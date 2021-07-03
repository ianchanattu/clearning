#include <stdio.h>
int main() {
    int x, y;
    printf("This program will swap two numbers inputted by the user. ");
    printf("   "); 
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d",&y);
    int temp = x;
    x = y;
    y = temp;
    printf("\nNew Value of x: %d ", x);
    printf("\nNew Value of y: %d ", y);
    return 0;



}