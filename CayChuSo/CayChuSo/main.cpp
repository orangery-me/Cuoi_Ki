#include <stdio.h>

// mang a gom cac chu so bat dau moi hang
int a[10]={1,2,3,4,5,6,7,8,9,10};
// mang b gom so cac phan tu cua moi hang
int b[10]={1,3,5,7,9,11,13,15,17,19};

int main(){

    for (int i=0; i<10; ++i){
        // tao khoang cach
        for (int j=0; j<10-i; ++j)
             printf(" ");
             
        // in tu a[i] den b[i] la duoc 1 nua hang
        for (int j=a[i];j<=b[i]; ++j ){
            printf("%d",j%10);
        }
        //in nua hang con lai
        for (int j=b[i]-1; j>=a[i]; --j){
            printf("%d",j%10);
        }
        
        printf("\n");
    }
}
