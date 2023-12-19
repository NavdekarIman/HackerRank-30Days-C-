#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> A = {1, 4, 3, 2}; // Storing the input in the vector A

    // Printing the elements of A in the desired order (2 3 4 1) separated by spaces
    cout << A[3] << " " << A[2] << " " << A[1] << " " << A[0];

    return 0;
}
  

//                -------------------   Alternate   ---------------
/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reversing the array elements
    reverse(arr.begin(), arr.end());

    // Printing the modified array elements separated by spaces
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << " ";
        }
    }

    return 0;
}
*/