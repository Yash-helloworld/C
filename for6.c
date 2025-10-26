// check whether the number is a perfect number or not

#include<stdio.h>
int main()
{
    int n, i ,sum = 0;
    printf("Ente a number :  ");
    scanf("%d",&n);

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(n == sum)
    {
        printf("Number is perfect number %d", n);
    }
    else{
        printf("Number is not perefect number , it not divsible %d of the number given , number = %d ",sum, n);
    }

}