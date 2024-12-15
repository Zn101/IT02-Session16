#include <stdio.h>
int main() {
    int N=1000;
    int *ptr=&N;
    printf("%d\n",N);
    printf("%d\n",&N);
    printf("%d\n",ptr);
    printf("%d",*ptr);
}
