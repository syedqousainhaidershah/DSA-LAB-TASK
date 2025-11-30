#include <iostream>
using namespace std;


int binarySearchAscending(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int binarySearchDescending(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "=== Student Roll Number Search ===" << endl;
    cout << "Enter number of students: ";
    cin >> n;

    int rollNumbers[100]; // beginner-friendly fixed size
    cout << "Enter roll numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> rollNumbers[i];
    }

    int target;
    cout << "Enter roll number to search: ";
    cin >> target;

    char order;
    cout << "Is the array sorted ascending (a) or descending (d)? ";
    cin >> order;

    int position = -1;
    if (order == 'a' || order == 'A') {
        position = binarySearchAscending(rollNumbers, n, target);
    } else if (order == 'd' || order == 'D') {
        position = binarySearchDescending(rollNumbers, n, target);
    } else {
        cout << "Invalid choice. Please enter 'a' or 'd'." << endl;
        return 0;
    }

    if (position != -1) {
        cout << "? Roll number found at position " << position << endl;
    } else {
        cout << "? Roll number not found" << endl;
    }

    return 0;
}
