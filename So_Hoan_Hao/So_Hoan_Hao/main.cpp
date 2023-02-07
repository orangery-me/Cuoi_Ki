//
//  main.cpp
//  So_Hoan_Hao
//
//  Created by Đinh Bảo Châu Thi on 1/14/23.
//

#include <stdio.h>
#include <math.h>
typedef long long ll;

void input(ll a[], ll n){
    for (ll i=0; i<n; ++i)
        scanf("%lld", &a[i]);
}

bool laSohh(ll n){
    ll i=2,dem=0;
    ll sum=1,m=n;

    while (n>1){
        if (n%i==0){
            dem=0;
            while (n%i==0){
                dem++;
                n=n/i;
            }
            sum *= ( (pow(i,dem+1)-1)/(i-1) );

        }
        i++;
    }

    if (sum-m ==m) return true;
    return false;
}


int main(){
    int n;
    scanf("%d", &n);
    ll a[1000];
    input(a,n);
    for (int i=0; i<n; ++i)
        if (laSohh(a[i])==true){
            printf("%lld ", a[i]);
        }
}
