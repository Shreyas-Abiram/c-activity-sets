//12. Write a C program to find the sum of _n_ complex numbers
#include<stdio.h>
struct _complex {
   float real,imaginary;
};
  typedef struct _complex Complex; 
  int get_n(){
    int n;
    printf("enter the number of complex numbers:\n");
    scanf("%d",&n);
    return n;
  }
  Complex input_complex(){
    Complex x;
    printf("enter the real part:\n");
    scanf("%f",x.real);
    printf("enter the imaginary part:\n");
    scanf("%f",x.imaginary);
    return x;
  }
  void input_n_complex(int n, Complex c[n]){
    for (int i = 0; i < n; i++)
    {
        printf("enter complex number:%d\n",i+1);
        c[i]=input_complex();
    } 
  }
  Complex add(Complex a, Complex b){
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
  }
  Complex add_n_complex(int n, Complex c[n]){
    Complex sum={0.0,0.0};
    for(int i=0;i<n;i++){
        sum=add(sum,c[i]);
    }
      return sum;
  }
  void output(int n, Complex c[n], Complex result){
    printf("sum of %d of complex numbers is :%d\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("%f+%fi",c[i].real,c[i].imaginary);
        if(i<n-1){
            printf("+");
        }
    }
    printf("=%f+%fi\n",result.real,result.imaginary);
  }
  int main()
  {
    int n;
    n=get_n();
    Complex numbers[n];
    input_n_complex(n,numbers);
    Complex result=add_n_complex(n,numbers);
    output(n,numbers,result);
    return 0;
  }