#include <stdio.h>


int main (void){
    double a = 10.0;   
    double *A = &a ;
    double b = 3.0;
    double *B = &b;
    *A = *A * 3.0;
    *B = *B/3;
    printf("%f\n",a);
    printf("%f\n",b);
    getchar();
    return 0;

}
