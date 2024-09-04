#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    stringstream ss(str);
    string temp;
    string ans = "";
    while(ss >> temp) {
        ans = max(ans, temp);
    }

    cout << ans << "\n";
}