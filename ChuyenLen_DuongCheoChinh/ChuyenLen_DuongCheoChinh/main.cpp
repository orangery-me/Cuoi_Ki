//
//  main.cpp
//  ChuyenLen_DuongCheoChinh
//
//  Created by Đinh Bảo Châu Thi on 1/16/23.
//

#include <stdio.h>

void input(float a[][100], int n){
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j)
            scanf("%f",&a[i][j]);
    }
}

void swap(float *a, float *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

void chuyen(float a[][100], int n){
    for (int i=0; i<n; ++i){
        float nmax=a[i][0];
        int index=0;
        for (int j=1; j<n; ++j)
            if (nmax<a[i][j]){
                nmax=a[i][j];
                index=j;
            }
        swap(&a[i][index],&a[i][i]);
    }
}
void output(float a[][100], int n){
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j)
            printf("%0.0f ", a[i][j]);
        printf("\n");
    }
}
int main(int argc, const char * argv[]) {
    float a[100][100];
    int n;
    scanf("%d", &n);
    input(a, n);
    chuyen(a, n);
    output(a, n);
    
}
