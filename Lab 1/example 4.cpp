//  Write a C++ program to add two distances in inch-feet using structure.

#include <iostream>
using namespace std;

// Define the structure
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
Distance addDistances(Distance d1, Distance d2) {
    Distance result;
    result.inches = d1.inches + d2.inches;

    // Convert excess inches to feet
    if (result.inches >= 12) {
        result.feet = d1.feet + d2.feet + result.inches / 12;
        result.inches %= 12;
    } else {
        result.feet = d1.feet + d2.feet;
    }
    return result;
}

int main() {
    Distance dis1, dis2;

    // Input for the first distance
    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> dis1.feet;
    cout << "Inches: ";
    cin >> dis1.inches;

    // Input for the second distance
    cout << "\nEnter the second distance:" << endl;
    cout << "Feet: ";
    cin >> dis2.feet;
    cout << "Inches: ";
    cin >> dis2.inches;

    // Add distances
    Distance sum = addDistances(dis1, dis2);

    // Display the result
    cout << "Sum of distances: " << sum.feet << " Feet " << sum.inches << " Inches" << endl;

    return 0;
}
