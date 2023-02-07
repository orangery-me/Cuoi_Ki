//
//  main.cpp
//  UCLN_BCNN
//
//  Created by Đinh Bảo Châu Thi on 2/1/23.
//

#include <stdio.h>
typedef long long  ll;

void swap(ll *a, ll *b){
    ll temp=*a;
    *a=*b;
    *b=temp;
}
//int ucln(int a, int b){
//    if (a<b) swap(&a,&b);
//
//    int t= a/b;
//    int r=a%b;
//
//    if (t==1) return r;
//    return ucln(b,r);
//}

ll ucln(ll a, ll b)
{
    if (a<b) swap(&a, &b);
    if (a==b) return a;
    return ucln(a-b, b);
}
int main(int argc, const char * argv[]) {
    ll a,b;
    printf("Nhap a,b: ");
    scanf("%lld %lld", &a ,&b);
    printf("ucln= %lld", ucln(a, b));
}
