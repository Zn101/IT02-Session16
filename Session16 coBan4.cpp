#include <stdio.h>
void inMang(int *arr,int *p) {
    for(int i=0;i<5;i++) {
        printf("[%d],",*p);
        p++;
    } 
}
int main() {
    int arr[5]={10,20,30,40,50};
    int *p=arr;
    inMang(arr,p);
}
