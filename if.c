// if Qestion 1 
// Check Wheater Number is Postive Or Not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
    {
        printf("Number = %d is a postive number \n", num);
    }
    else{
        printf("NUmber = %d is a negative number\n", num);
    }
}