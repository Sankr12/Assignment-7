//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,A,B,C,D;
    float b;
    char c;
    double d;
    A = sizeof(a);
    B = sizeof(b);
    C = sizeof(c);
    D = sizeof(d);
    printf("a = %d\nb = %d\nc = %d\nd = %d",A,B,C,D);
}
