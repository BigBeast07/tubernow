//Program to print table of inputted number
#include<stdio.h>
void main()
{
    int n,a;
    printf("Enter number : ");
    scanf("%d",&n);
    for(a=1;a<=10;a++)
    {
        printf("%d * %d = %d \n",n,a,a*n);
    }

}