// Accept marks of 5 subject caluclate sym and percentage on bases on percentage / avg 

#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum, percentage;
        printf("Enter marks of subject 1: ");
        scanf("%d", &m1);
        printf("Enter marks of subject 2: ");
        scanf("%d", &m2);
        printf("Enter marks of subject 3: ");
        scanf("%d", &m3);
        printf("Enter marks of subject 4: ");
        scanf("%d", &m4);
        printf("Enter marks of subject 5: ");
        scanf("%d", &m5);

        sum = m1 + m2 + m3 + m4 + m5;
        percentage = sum / 5;

        printf("Total marks Obtained = %d\n", sum);
        printf("Percentage = %d\n", percentage);


        printf("Grades = ");
        if(percentage >= 90)
        {
            printf("A");
        }
        else if (percentage >= 75)
        {
            printf("B");
        }
        else if(percentage >= 60)
        {
            printf("C");
        }
        else if (percentage >= 35)
        {
            printf("D");
        }
        else{
            printf("F");
        }


}
