// Check wheter number is vowel or not
// variable = 1 , condition = 2

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter character: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e'|| alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A'|| alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Vowel = %c\n", alphabet);
    }
    else{
        printf("Not Vowel = %c \n", alphabet);
    }
}