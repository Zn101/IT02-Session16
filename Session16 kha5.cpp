#include <stdio.h>
void addArray(int *arr, int *value, int *position) {
        arr[*position] = *value;
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int value;
    int position;
    printf("Nhap vi tri can thay doi: ");
    scanf("%d",&position);
    printf("Nhap gia tri moi can thay doi: ");
    scanf("%d",&value);
    addArray(arr, &value, &position);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
