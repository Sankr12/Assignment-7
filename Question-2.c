//Write a program to find last digit of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = a%10;
    printf("%d",b);
}

