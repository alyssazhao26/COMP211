#include <stdio.h>
//pre define type and constants
float fahr,celsius;
#define LOWER 0
#define UPPER 100
#define STEP 20

#define IN 1
#define OUT 0
/*
1. variable declaration
2. printf and corresponding syntax
3. making tbl, and number types
4. defne constant
5. char 
*/

int main() {
    /*
    // Overfloating imprecision
    int a = 3;
    double b = (double) 1/3;
    printf("The sum of %i and %f is: %.20f\n", a,b, a+b); 

    // temperature conversion
    printf(" Temperature \n");
    printf("=============\n");
    for(int i = LOWER; i < UPPER; i+=20){
        fahr = i;
        celsius = (5.0/ 9.0) * (fahr - 32);
        // \t == horizontal tab
        // %d = %i = int
        printf("|%3.0f || %5.1f|\n", fahr,celsius);
    }
    */

   int c, n1, nw, nc, state;
   state = OUT;
   n1 = nw = nc = 0;
   while((c  = getchar()) != EOF){
    ++nc;
    if(c == '\n'){++n1;}
    if(c == ' ' || c == '\n' || c == '\t'){state = OUT;}
    else if (state ==OUT){
        state = IN; 
        ++nw;}
   }
   printf("%d %d %d\n", n1, nw, nc);

} 