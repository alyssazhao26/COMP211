#include <stdio.h>

unsigned int x = 5;

int main(){
    int x = 6;
    func();
    printf("%d from main\n", x);
    return 0;
}

void func(){
    // int x = 7;
    printf("%d from func \n", x);
}