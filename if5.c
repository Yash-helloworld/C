// Accept percentage and Display Grades on criteria
/*
90 to 100 = A
75 to 89 = B
60 to 74 =  C
35 to 59 = D
less = F
*/

#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter Percentage : ");
    scanf("%d", &percentage);

    if(percentage >= 90)
    {
        printf("A");
    }
    else if(percentage >= 75)
    {
        printf("B");
    }
    else if(percentage >= 60)
    {
        printf("C");
    }
    else if(percentage >= 35)
    {
        printf("D");
    }
    else{
        printf("F");
    }
}