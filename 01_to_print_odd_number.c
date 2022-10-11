//Program to print odd numbers from 50 to 1
#include<stdio.h>
void main()
{
    int n;
    printf("\n Odd numbers between 50 to 1 are : \n");
    for (n=49;n>=1;n=n-2)
    {
        printf("%d ",n);
    }
}
