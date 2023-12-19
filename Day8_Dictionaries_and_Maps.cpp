#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To consume the newline character after inputting n

    map<string, string> phoneBook;

    // Inputting n phone book entries
    for (int i = 0; i < n; i++) {
        string name, phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    // Querying the phone book
    string query;
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
