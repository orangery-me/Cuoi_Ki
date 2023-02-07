//
//  main.cpp
//  So_Chu_So0_TanCung
//
//  Created by Đinh Bảo Châu Thi on 1/16/23.
//

#include <stdio.h>
#define min(x,y) ((x<y)? x:y)

typedef long long ll;

int Dem(int k, ll v){
    int count=0;
    while (v%k==0){
        count++;
        v=v/k;
    }
    return count;
}

int main() {
    ll a[1000];
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    for (int i=1; i<=n; ++i){
        printf("a[%d]=",i);
        scanf("%lld", &a[i]);
    }

    int mu2=0,mu5=0;
    for (int i=1; i<=n; ++i){
        mu2+=Dem(2,a[i]);
        mu5+=Dem(5,a[i]);
    }
    printf("%d ", min(mu2,mu5));
}
