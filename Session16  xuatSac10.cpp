#include <stdio.h>
void deleteArray(int *arr,int *length, int *position) {
    for (int i = *position; i < *length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*length)--;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length =sizeof(arr)/sizeof(int);
    int position;
    printf("Nhap vi tri can xoa: ");
    scanf("%d",&position);
    deleteArray(arr,&length , &position);
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}
