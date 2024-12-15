#include <stdio.h>
void findArray(int *arr, int *value) {
    for (int i=0;i<5;i++) {    
    if (arr[i] == *value) {
        printf("%d",i);
        break;
        }
    }
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d",&value);
    findArray(arr, &value);
}
