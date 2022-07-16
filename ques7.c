// Program to print ten even numbers in reverse order
#include <stdio.h>
int main(){
    int i;
    for(i = 10; i ; --i){
        printf("%d ", (2 * i));
    }
    return 0;
}