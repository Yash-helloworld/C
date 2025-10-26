// Check wheather the number is prime or not


#include<stdio.h>

int main()
{
    int n,i , prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if(prime == 0)
    {
        printf("Number = %d is a prime number", n);
    }
    else{
        printf("Number = %d is not a prime number", n);
    }
}