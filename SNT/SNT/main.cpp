//
//  main.cpp
//  SNT
//
//  Created by Đinh Bảo Châu Thi on 1/31/23.
//

#include <stdio.h>
typedef long long ll;

bool isPrime(ll n){
    if (n==0 || n==1) return false;
    for (ll i=2; i*i<=n; ++i){
        if (n%i==0)
            return false
            ;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    float nhap;
    ll n;
    do{
        printf("Nhap n: ");
        scanf("%f",& nhap);
        n= nhap;
    }
    while (nhap != n);
    
    for (ll i=1; i<=n; ++i){
        if (isPrime(i))
            printf("%lld ", i);
    }
}
