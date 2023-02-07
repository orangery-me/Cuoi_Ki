//
//  main.cpp
//  TamGiacPascal
//
//  Created by Đinh Bảo Châu Thi on 2/1/23.
//

#include <stdio.h>

int a[1000][1000];

void TG(int n){
    for (int i=0; i<n; ++i){
        for (int j=0; j<=i; ++j){
            
            if (j==0 ){
                a[i][j]=1;
                for (int k=n-i-1; k>=0; --k)
                    printf(" ");
            }
            
            else
                a[i][j]=a[i-1][j-1]+a[i-1][j];
                
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

int main(int argc, const char * argv[]) {
    int n;
    printf("Nhap so hang cua tam giac: ");
    scanf("%d",&n);
    TG(n);
}
