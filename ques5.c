//Program to print 10 odd natural numbers in reverse order
#include <stdio.h>
int main(){
    int i;
    for(i = 10 ; i > 0 ; --i){
        printf("%d ", (2 * i) - 1);
    }
    return 0;
}