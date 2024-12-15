#include <stdio.h>
void swap(int *N, int *M){
    int temp=*N;
    *N=*M;
    *M=temp;
}
int main() {
    int N = 1000;
    int M = 2000;
    swap(&N,&M);
    printf("%d\n", N);
    printf("%d", M);
}
