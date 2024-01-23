//6. Write a C program to compare three numbers using **pass by reference**
#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
    int input(int *a, int *b, int *c)
    {
        printf("enter a : ");
        scanf("%d",a);
        printf("enter b : ");
        scanf("%d",b);
        printf("enter c : ");
        scanf("%d",c);
    }
    void compare(int a, int b, int c, int *largest)
    {
        if(a>=b&&a>=c)
        {
            *largest=a;
        }
        else if(b>=a&&b>=c)
        {
            *largest=b;
        }
        else if(c>=a&&c>=b)
        {
            *largest=c;
        }
    }
    void output(int a, int b, int c, int largest)
    {
        if(a==b&&b==c)
        {
            printf("they are equal\n");
        }
        else
        {
        printf("largest of %d, %d, %d is %d",a,b,c,largest);
        }
    }
    int main()
    {
        int a,b,c,largest;
        input(&a,&b,&c);
        compare(a,b,c,&largest);
        output(a,b,c,largest);
        return 0;
    }