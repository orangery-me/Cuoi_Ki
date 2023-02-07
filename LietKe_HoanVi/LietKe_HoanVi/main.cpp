
#include <stdio.h>

int a[10]={0,1,2,3,4,5,6,7,8,9};
int visited[10]={};
int res[100];

void output(int a[], int n){
    for (int i=0; i<n; ++i){
       if (i==2)
           printf(".");
        printf("%d",a[i]);
    }
    printf("\n");
}

void Try(int k){
    for (int i=0; i<10; ++i){
        if (!visited[i] && !(k==0 && i==0)){
            visited[i]=1;
            res[k]=a[i];
            // nếu đã đủ 4 chữ số -> in ra số đó
            if (k==3)
                output(res, 4);
            //nếu chưa đủ 4 chữ số -> tìm chữ số tiếp theo
            else
                Try(k+1);
            // Sau khi đã in ra số thỏa mãn -> đặt lại visited=0 để thực hiện kiếm số tiếp theo
            visited[i]=0;
        }
    }
}

int main(int argc, const char * argv[]) {
    Try(0);
}


