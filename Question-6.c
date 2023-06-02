//Write a program to swap values of two int variables without using third variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a = %d\nb = %d",a,b);
}



