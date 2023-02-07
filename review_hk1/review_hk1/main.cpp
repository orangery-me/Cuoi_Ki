#include <stdio.h>

int main(){
    int i=1,s=0;
    while (i<=10){
        s=s+i;
        i+=2;
    }
    printf("%d %d", i,s);
}