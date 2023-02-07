#include <stdio.h>
#include <string.h>

int main(){
    freopen("D:\\5.in","r",stdin);
    freopen("D:\\5.ans","w",stdout);
    char a[1000][1000];
    int n=0;
    while (gets(a[n]))
        n++;

    for (int i=0; i<n; ++i){
        for (int j=0; j<strlen(a[i]); ++j){
            
            if (a[i][j]=='/' && (a[i][j+1]=='/' || a[i][j+1]=='*') )
              strcpy(&a[i][j],&a[i][j+2]);
            if (a[i][j]=='*' && a[i][j+1]=='/')
              strcpy(&a[i][j],&a[i][j+2]);
        }
    }
    for (int i=0; i<n; ++i){
        printf("%s \n", a[i]);
    }
    return 0;
}

