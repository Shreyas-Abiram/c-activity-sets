//5. Write a C program to compare three numbers using **pass by value**
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
    int input()
    {
        int x;
        printf("enter a number : ");
        scanf("%d",&x);
        return x;
    }
    int compare(int a, int b, int c)
    {
        int lg;
        if(a>b&&a>c)
        {
            lg=a;
        }
        else if(b>a&&b>c)
        {
            lg=b;
        }
        else if(c>a&&c>b)
        {
            lg=c;
        }
        else if(a==b&&b==c)
        {
            printf("they are equal\n");
            return a;
        }
        return lg;
    }
    void output(int a, int b, int c, int largest)
    {
        printf("largest of %d, %d, %d is %d",a,b,c,largest);
    }
    int main()
    {
        int a,b,c,lg;
        a=input();
        b=input();
        c=input();
        lg=compare(a,b,c);
        output(a,b,c,lg);
        return 0;
    }