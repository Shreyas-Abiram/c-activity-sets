//9. Write a C program to find the [square root]
#include<stdio.h>
float input();
float square_root(float n);
void output(float n);
    float input()
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
        return n;
    }
    float square_root(float n)
    {
        float X,x; 
        float ns; 
        int c = 0;
        x=n/2;
        while(c!=5)
        {
            X=(x+n/x);
            ns=(X+n/x)/2;
            x=ns;
        c++;
    }
    return X;
    }
    void output(float n)
    {
    printf("sqrt is :%f\n",n);
    }
int main()
    {
    float n=input();
    float sq=sqrroot(n);
    output(sq);
    return 0;
    }
        