// Check whether the number have 3 digit or not

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if( num >= 100 && num <= 999)
    {
        printf("3 Digits  = %d\n", num);
    }
    else{
        printf("NUmber is not have 3 digits\n", num);
    }
}