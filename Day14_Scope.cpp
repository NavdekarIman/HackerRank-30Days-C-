#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Difference {
private:
    vector<int> elements;
    int maximumDifference;

public:
    Difference(vector<int> arr) : elements(arr), maximumDifference(0) {}

    void computeDifference() {
        int minElement = *min_element(elements.begin(), elements.end());
        int maxElement = *max_element(elements.begin(), elements.end());
        maximumDifference = abs(maxElement - minElement);
    }

    int getMaximumDifference() {
        return maximumDifference;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; ++i) {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);
    d.computeDifference();
    cout << d.getMaximumDifference() << endl;

    return 0;
}
