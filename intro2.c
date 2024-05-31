#include <stdio.h>

/*
1. Array build
2. Functions
*/

// short cut for func
int power (int m, int n);

int main(){
    /*
    int c, i, nwhite,nother;
    // declares an array with 10 ints
    int ndigit[10];

    nwhite = nother = 0;
    // initialize array
    for(i = 0; i < 10; ++i){ndigit[i] = 0;}
    //count numbers of occurances 
    while ((c = getchar())!=EOF){
        // c - '0' is an integer expression 
        if(c >= '0' && c <= '9'){++ndigit[c - '0'];}
        else if (c == '\n' || c == ' ' || c == '\t'){++nwhite;}
        else {++nother;}
    }
        printf("digits =");
        for(i = 0; i<10; ++i){
            printf(" %d", ndigit[i]);
        }
        printf(", white space = %d, other  = %d \n", nwhite, nother);
*/ 
    printf("%d \n", power(2,3));
    }


    int power(int m, int n){       
        int p,i;
        p= 1;
        for(i = 1; i <= n; i++){p *= m;}
        return p;
    }
