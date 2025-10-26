// Check greatest of 2 number or both are equal

#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 2 Number: ");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2)
    {
        printf("n1 = %d is greater than n2 = %d\n", n1, n2);
    }
    else if(n1 == n2)
    {
        printf("n1 = %d is equal to n2 = %d\n", n1, n2);
    }
    else{
        printf("n2 = %d is greater than n1 = %d\n", n2,n1);
    }
}