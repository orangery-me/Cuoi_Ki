//
//  main.cpp
//  Chuoi_Hoan_Hao
//
//  Created by Đinh Bảo Châu Thi on 2/2/23.
//

#include <stdio.h>
#include <string.h>
#include <math.h>

bool LaSohh(int n){
    int sum=1;
    
    for (int i=2; i*i<n; ++i){
        if (n%i==0)
            sum+= i+ n/i;
    }
    
    int k= sqrt(n);
    // nếu n là số chính phương thì chỉ cộng thêm ước
    if (k*k==n)
        sum+=k;
    
    if (sum==n)
        return true;
    return false;
}

int main(int argc, const char * argv[]) {
    char a[20][100];
    int n;
    scanf("%d ", &n);
    for (int i=0; i<n; ++i)
        gets(a[i]);
    
    for (int i=0; i<n; ++i){
        int so=0;
        for (int j=0; j<strlen(a[i]); ++j){
            // nếu có chữ trong chuỗi thì cho số=0
            if (a[i][j] <'0' && a[i][j] >'9'){
                so=0;
                break;
            }
            // đổi 'so' từ dạng kí tự sang số
            else{
                so = so*10 + a[i][j] - '0';
            }
        }
        if (LaSohh(so))
            printf("%d \n", so);
    }
}
