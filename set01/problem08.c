//8. Write a C program to find sum of _n_ different numbers entered by the user.

#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
    int input_array_size()
    {
        int n;
        printf("Enter the size of the array");
        scanf("%d",&n);
        return n;
    }
    void input_array(int n, int a[n])
    {
        int i=0;
        for(i=0;i<n;i++)
        {
            printf("Enter the number: ");
            scanf("%d",&a[i]);
        }   
    }
    int sum_n_array(int n, int a[n])
    {
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum = sum + a[i];
        }
        return sum;
    }
    void output(int n, int a[n], int sum)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d",a[i]);
        }
        printf("the sum is %d ",sum);
    }
    int main()
    {
        int n,sum;
        
    }