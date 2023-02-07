//
//  main.cpp
//  LietKe_HoanVi2
//
//  Created by Đinh Bảo Châu Thi on 1/16/23.
//

#include <iostream>

using namespace std;

int res[4];
int visited[10]={};
int ncount=0;

void output(){
    for (int i=0; i<=3; ++i){
        if (i==3)
            cout<<".";
        cout <<res[i];
    }
    cout <<endl;
}

void hoanvi(int k){
    
    for (int i=0; i<=9; ++i){
        if (visited[i]==0 && !(i==0 && k==0)){
            visited[i]=1;
            res[k]=i;
            
            if (k==3){
                output();
                ncount++;
            }
            else
                hoanvi(k+1);
            visited[i]=0;
            
        }
    }
}
int main() {
    hoanvi(0);
    cout <<ncount;
}
