#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str1;
    string str2;
    cout << "Enter the string1: ";
    cin >> str1;
    cout << "\nEnter the string2: ";
    cin >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1 == str2) {
        cout << "\nTrue\n";
    }
    else {
        cout << "\nFalse\n";
    }
}