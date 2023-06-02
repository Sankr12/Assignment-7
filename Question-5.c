//Write a program to swap values of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a = %d\nb = %d",a,b);
}


