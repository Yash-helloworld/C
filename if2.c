// if qestion 2 
// Check Wheather The Number IS zero or Non zero

#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if( num == 0)
    {
        printf("Number =  %d is zero number\n");
    }
    else{
        printf("Number = %d is non zero number\n");
    }
}