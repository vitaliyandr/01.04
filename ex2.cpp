#include <iostream>
using namespace std;

double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = (double)sum / size;
    return avg;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    double avg = average(arr, size);
    cout << "Average: " << avg << endl;
    return 0;
}
