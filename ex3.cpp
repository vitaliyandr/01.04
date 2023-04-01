#include <iostream>
using namespace std;

void countElements(int arr[], int size, int& positive, int& negative, int& zero) {
    positive = 0;
    negative = 0;
    zero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }
}

int main() {
    int arr[] = { 1, -2, 3, 0, -4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int positive, negative, zero;
    countElements(arr, size, positive, negative, zero);
    cout << "Positive elements: " << positive << endl;
    cout << "Negative elements: " << negative << endl;
    cout << "Zero elements: " << zero << endl;
    return 0;
}
