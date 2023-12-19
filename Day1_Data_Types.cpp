#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int x = 4;
    double y = 4.0;
    char z[] = "HackerRank";

    // Declare variables for user input
    int i;
    double d;
    char c[100];

    // Read user input
    cin >> i;
    cin >> d;
    cin.ignore(); // Ignore newline character in the input buffer
    cin.getline(c, 100);

    // Output values
    cout << x + i << endl; // Sum of integers x and i
    cout.precision(1); // Set precision for one decimal place
    cout << fixed << y + d << endl; // Sum of doubles y and d
    cout << z << " " << c << endl; // Concatenation of strings z and c

    return 0;
}
