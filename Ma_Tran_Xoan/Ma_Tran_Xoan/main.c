#include <stdio.h>

int main(){
    int a[100][100];
    freopen("D:\\5.in","r",stdin);
    freopen("D:\\5.ans","w",stdout);
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            scanf("%d",&a[i][j]);
        }
    }
    
    int h1=0,h2=n-1,c1=0,c2=n-1;
    while (h1<=h2 && c2<=c2){
        for (int i=c1; i<=c2; ++i)
        printf("%d ",a[h1][i]);
        h1++;
        for (int i=h1; i<=h2; ++i)
        printf("%d ",a[i][c2]);
        c2--;
        for (int i=c2; i>=c1; --i)
        printf("%d ",a[h2][i]);
        h2--;
        for (int i=h2; i>=h1; --i)
        printf("%d ",a[i][c1]);
        c1++;

    }
    
}
