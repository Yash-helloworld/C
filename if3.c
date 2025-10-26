// Check whether the number is divisible by 3 or not
// divide by 3 and Check remainder 
// if remainder is 0 then it is divisble
// if not it is not divisble
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int remainder = num % 3;

    if(remainder == 0)
    {
        printf("Number is divisible by 3 , Number = %d", num);
    }
    else{
        printf("Number is not divisible by 3, Number = %d", num);
    }
}
