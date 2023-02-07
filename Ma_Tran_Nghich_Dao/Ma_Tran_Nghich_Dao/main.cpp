//
//  main.cpp
//  Ma_Tran_Nghich_Dao
//
//  Created by Đinh Bảo Châu Thi on 1/15/23.
//

#include <stdio.h>
int n;
float a[20][20];

void swap(float *a, float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}

void swap_hang(float c[], float d[]){
    for (int j=0; j<2*n; ++j){
        swap(&c[j],&d[j]);
    }
}

void input(){
    printf("Nhap bac cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap ma tran: \n");
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            scanf("%f", &a[i][j]);
    
    for (int i=0; i<n; ++i)
        for (int j=n; j<2*n; ++j){
            if (i+n==j)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    
}
// Biến đổi ma trận A thành ma trận tam giác trên
void biendoi1(){
    int i=0;
    // Chọn hàng i làm hàng mốc để biến đổi các hàng còn lại
    while (i<n-1){
    // Nếu a[i][i] = 0 thì đổi hàng đó với hàng gần nhất khác 0. Nếu không thì thực hiện biến đổi
        if (a[i][i] !=0){
            for (int k=i+1; k<n; ++k){
                
                float ratio=-a[k][i]/a[i][i];
                for (int j=0; j<2*n; ++j)
                    a[k][j] += ratio*a[i][j];
            }
        }
        else{
            int k=i+1;
            while (a[k][i]==0) k++;
            swap(a[i], a[k]);
            i--;
        }
        i++;
    }
}
// Biến đổi ma trận A thành ma trận chéo
void biendoi2(){
    int i=n-1;
    while (i>=0){
        // Làm tương tự như biến đổi 1 nhưng từ dưới lên trên
        for (int k=i-1; k>=0; --k){
            
            if (a[k][i]==0)
                continue;
            
            float ratio=-a[k][i]/a[i][i];
            
            for (int j=0; j<2*n; ++j)
 
                a[k][j] += ratio*a[i][j];
            
        }
        
        i--;
        
    }
}

// Biến đổi ma trận A thành ma trận đơn vị
bool biendoi3(){
    int i=0;
    while (i <n){
        // Nếu một phần tử trên đường chéo =0 -> Không có ma trận nghịch đảo
        if (a[i][i]==0)
            return false;
        
        else{
            // Biến đổi các phtu trên đường chéo về số 1
            float ratio=1/a[i][i];
 
            for (int j=0; j<2*n; ++j){
                if (a[i][j]==0)
                    continue;
                a[i][j] = (float)ratio*a[i][j];
            }
        }
        i++;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    input();
    biendoi1();
    biendoi2();
    biendoi3();
    printf("Ma tran nghich dao la: \n");
    for (int i=0; i<n; ++i){
        for (int j=n; j<2*n; ++j)
            printf("%0.3f ",a[i][j]);
        printf("\n");
    }
}
