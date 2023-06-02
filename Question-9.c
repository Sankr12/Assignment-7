//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("Enter amount in rupees: ");
    scanf("%f",&a);
    a = a/76.23;
    printf("%f",a);
}
