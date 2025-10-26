// Check whether the  number is Postive or Negative or Zero

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Number is Postive\n");
    }
    else if( num < 0)
    {
        printf("Number is Negative\n");
    }
    else
    {
        printf("Number is zero\n");
    }
}