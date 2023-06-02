//Write a program to find middle digit of a given three digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = a%100;
    c = b/10;
    printf("%d",c);
}


