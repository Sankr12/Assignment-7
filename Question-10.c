//Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    b = a/10;
    c = a%10;
    a = c*100+b;
    printf("%d\n",a);
}
