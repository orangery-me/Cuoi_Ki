//
//  main.cpp
//  So_Phan_Tu_Thu_k
//
//  Created by Đinh Bảo Châu Thi on 1/16/23.
//

#include <stdio.h>

int a[100];
int n;
void input(){
    scanf("%d", &n);
    for (int i=0; i<n; ++i)
        scanf("%d",&a[i]);
    
}

void xoapt(int k){
    for (int i=k; i<n-1; ++i){
        a[i]=a[i+1];
    }
    n--;
}

void output(){
    for (int i=0; i<n; ++i)
        printf("%d ",a[i]);
}

int main(int argc, const char * argv[]) {
    input();
    int k;
    scanf("%d", &k);
    xoapt(k);
    output();
}
