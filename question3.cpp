 #include <iostream>
 #include <algorithm>
 #include <string>

 using namespace std;

 int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int i = 0;
    int result = 0;
    int count = 0;
    while(i <= str.length()) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
            i++;
        }
        else {
            if(count == 0) {
                i++;
                continue;
            }
            else {
                result += count*(count+1)/2;
                count = 0;
                i++;
            }
        }
    }
    cout << result << "\n";
 }