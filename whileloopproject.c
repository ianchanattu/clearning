#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("How many numbers do you want to add? ");
    scanf("%d",&n);
    i = 0;
    while (i<= n) {
        sum += i;
        ++i;

    }
    printf("Sum = %d", sum);
    return 0;




}