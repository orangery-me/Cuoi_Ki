//
//  main.c
//  Noi_2_Mang
//
//  Created by Đinh Bảo Châu Thi on 1/17/23.
//

#include <stdio.h>

void input(float a[], int n){
    for (int i=0; i<n; ++i)
        scanf("%f", &a[i]);
}

void Chia(int a[], int l , int r){
    int mid=(l+r)/2;
    
    Chia(a, l, mid);
    Chia(a, mid+1, r);
    
}

int main(int argc, const char * argv[]) {
    float a[100],b[100];
    int na,nb;
    scanf("%d %d", &na, &nb);
    input(a, na);
    input(b, nb);
    
}
