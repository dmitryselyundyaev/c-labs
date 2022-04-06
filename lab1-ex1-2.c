#include <stdio.h>


int main (void){
    int a = 10;   
    int *b = &a;
    double c = 2.0;
    double *d = &c;
    printf("Var a: %d\n", a);  
    printf("Var b: %d\n", *b);   
    printf("Var b adress: %x\n", b); 
    printf("Var c: %f\n", c);  
    printf("Var d: %f\n", *d);   
    printf("Var d adress: %x\n", d); 
    printf("sizeof a = %d\n", sizeof(a));
    printf("sizeof b = %d\n", sizeof(b));
    printf("sizeof c= %d\n", sizeof(c));
    printf("sizeof d = %d\n", sizeof(d)); 
    printf("sizeof size_t = %d\n", sizeof(size_t));
    getchar();
    return 0;

}
