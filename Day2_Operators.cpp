#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

void bill(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost * (tip_percent / 100.0); // Cal tip
    double tax = meal_cost * (tax_percent / 100.0); // Cal tax

    // Cal the total cost of the meal, including tip and tax
    double total_cost = meal_cost + tip + tax;

    // Round the total_cost to the nearest integer
    int rounded_total_cost = round(total_cost);

    // Print the rounded total cost of the meal
    cout << rounded_total_cost << endl;
}

int main() {
    double meal_cost;
    int tip_percent, tax_percent;

    // Read inputs for meal_cost, tip_percent, and tax_percent
    cin >> meal_cost >> tip_percent >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bill(meal_cost, tip_percent, tax_percent);

    return 0;
}
