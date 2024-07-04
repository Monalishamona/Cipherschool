#include <iostream>
using namespace std;

int main() {
    // Insertion Sort
    int a[10];

    // Read 10 elements
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // Perform Insertion Sort
    for (int i = 1; i < 10; i++) {
        int key = a[i];
        int j = i - 1;
        // Move elements of a[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }

    // Print the sorted array
    cout << "The elements are sorted: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
