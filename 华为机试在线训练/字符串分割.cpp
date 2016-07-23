#include <iostream>
#include <string>
using namespace std;
void fuck(string str) {
    if (str == "")
        return;
    if (str.size() <= 8) {
        str.append(8 - str.size(), '0');
        cout << str << endl;
        return;
    }
    cout << str.substr(0, 8) << endl;
    fuck(str.substr(8, str.size()));
}
int main() {
    string str1, str2;
    cin >> str1 >> str2;
    fuck(str1);
    fuck(str2);
    return 0;
}