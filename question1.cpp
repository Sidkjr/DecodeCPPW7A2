#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    string rev = str;
    reverse(rev.begin(), rev.end());
    cout << "\n" << str << rev << "\n";
}