//
//  main.cpp
//  GiaiThuaSoLon
//
//  Created by Đinh Bảo Châu Thi on 1/31/23.
//

#include <iostream>
using namespace std;

void Try(int n){
    int a[4000]={};
    int k=1,nho=0, tich=1;;
    a[0]=1;
    
    for (int i=2; i<=n; ++i){
        for (int j=0; j<k; ++j){
            
            tich = (nho +a[j]*i);
            a[j] = tich %10 ;
            nho = tich/10;
            
            if (j==k-1 & nho >0)
                k++;
        }
    }
    
    for (int i=k-1; i>=0 ;-- i)
        cout <<a[i];
    
}
int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    Try(n);
}
