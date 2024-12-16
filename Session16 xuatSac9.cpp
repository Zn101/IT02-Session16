#include <stdio.h>
void addArray(int *arr,int *length, int *value, int *position) {
    for (int i = *length; i > *position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[*position] = *value;
    (*length)++;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length =sizeof(arr)/sizeof(int);
    int value;
    int position;
    printf("Nhap vi tri can thay doi: ");
    scanf("%d",&position);
    printf("Nhap gia tri moi can thay doi: ");
    scanf("%d",&value);
    addArray(arr,&length , &value, &position);
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}
