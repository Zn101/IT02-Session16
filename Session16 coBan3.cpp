#include <stdio.h>
void tinhTong(int *N, int *M, int *result) {
    *result = *N + *M;
}
int main() {
    int N = 1000;
    int M = 2000;
    int sum = 0;
    tinhTong(&N,&M,&sum);
    printf("Tong 2 so la: %d", sum);
}
