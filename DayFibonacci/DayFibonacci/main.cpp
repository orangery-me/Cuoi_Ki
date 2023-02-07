//
//  main.cpp
//  DayFibonacci
//
//  Created by Đinh Bảo Châu Thi on 1/17/23.
//

#include <stdio.h>
typedef long long ll;

bool InFibo(ll n){
    ll a[1000];
    a[0]=0; a[1]=a[2]=1;
    ll i=2;
    while (a[i] <n){
        i++;
        a[i]=a[i-1]+a[i-2];
    }
    if (a[i]==n) return true;
    return false;
}

int main(int argc, const char * argv[]) {
    ll n;
    scanf("%lld", &n);
    if (InFibo(n)==true)
    printf("%lld thuoc day fibonacci \n", n);
    else
        printf("%lld khong thuoc day fibonacci \n", n);
        
}
