//11 Write a C program to find the sum of 2 complex numbers
#include<stdio.h>
struct complex{
    float real,imaginary;
};
typedef struct complex Complex;
Complex input_complex(){
    Complex c;
    printf("enter the real part:\n");
    scanf("%f",&c.real);
    printf("enter the imaginary part:\n");
    scanf("%f",&c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum){
    printf("(%f+%fi)+(%f+%fi)=(%f+%fi)",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main(){
    Complex a,b;
    Complex sum;
    printf("enter the 1st complex number");
    a=input_complex();
    printf("enter the 2nd complex number");
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
