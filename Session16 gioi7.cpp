#include <stdio.h>
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[5] = {50, 30, 10, 40, 20};
    int size = 5;
    sortArray(arr, size);
    for (int i = 0; i < size; i++) {
        printf("[%d],", arr[i]);
    }
}
