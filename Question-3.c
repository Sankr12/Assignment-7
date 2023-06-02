//Write a program to find first digit of a given three digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = a/100;
    printf("%d",b);
}


