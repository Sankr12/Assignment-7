/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a = a/10;
    a = a*10;
    printf("%d",a);
}
