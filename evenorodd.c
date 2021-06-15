#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    	printf("%d is even.", num);
    else if (num % 2 != 0)
    	printf("%d is odd.", num);
    else
        printf("You have not entered a valid input.", num);
    return 0;
}