//10. Write a C program to compare two strings, character by character.
#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);


void input_2_strings(char *string1, char *string2)
{
    printf("enter the string1:\n");
    scanf("%s", string1);
    printf("enter the string2:\n");
    scanf("%s", string2);
}
int stringcompare(char *string1, char *string2)
{
    int i=0;
    for (i = 0; string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0'; i++);
        if (string1[i] > string2[i])
        {
            return 1;
        }
        else if (string2[i] > string1[i])
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    void output(char *string1, char *string2, int result)

    {
        if (result == 1)
        {
            printf("%s is greater that %s", string1, string2);
        }
        else if (result == -1)
        {
            printf("%s us greater than %s", string2, string1);
        }
        else
            printf("they are equal");
    }
    int main()  
     
    {
        char string1[100], string2[100];
        input_2_strings(string1, string2);
        int result = stringcompare(string1, string2);
        output(string1, string2, result);
        return 0;
    }