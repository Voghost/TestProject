#include<stdio.h>

int fun(int a, int b) {
    return a + b;
}

double cheng(int a,int b)
{
   return a*b;
}

double div (double a, double b) {
    return a / b;
}

int main() {
    printf("Hello World!\n");
    printf("a+b=%d\n", fun(1, 2));
    return 0;
}
