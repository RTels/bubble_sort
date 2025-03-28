#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = size -1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
int main() {
    int size;
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    bubbleSort(array, size);
    for (auto val : array) {
        cout << val << " ";
    }

    return 0;

}
