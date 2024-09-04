#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    sort(str.begin(), str.end());
    int i = str.length() - 1;
    while(str[i] == str[i-1]) {
        i--;
    }
    cout << str[i-1] << "\n";
}