#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
    int input()
    {
    int n;
        printf("enter the number : ");
        scanf("%d",&n);
        return n;
    }
    int add(int a, int b)
    {
        int sum;
        sum=0;
        sum=a+b;
        return sum;
    }    
    void output(int a, int b, int sum)
    {
        printf("sum of %d + %d is %d",a,b,sum);
    }
    int main()
    {
        int a,b,sum;
        a=input();
        b=input();
        sum=add(a,b);
        output(a,b,sum);
        return 0;
    }