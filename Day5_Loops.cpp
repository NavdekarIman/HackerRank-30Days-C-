#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Printing a table of n using loops up to 10
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << (n * i);
        if (i != 10) {
            cout << endl;
        }
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
