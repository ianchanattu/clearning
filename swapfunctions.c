#include <stdio.h>

void swaptwonumbers(int *x1, int *y1) {
    int temp = *x1;
    *x1 = *y1;
    *y1 = temp;
}
int main() {
    int x,y;
    printf("This function will swap the value of two numbers, 'x', and 'y'. \n");
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("\nEnter Value of y: ");
    scanf("%d", &y);
    swaptwonumbers(&x,&y);
    printf("After Swapping\n x = %d \n y = %d", x, y);
    return 0; 
}