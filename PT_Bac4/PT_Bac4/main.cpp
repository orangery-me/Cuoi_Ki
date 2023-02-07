//
//  main.cpp
//  PT_Bac4
//
//  Created by Đinh Bảo Châu Thi on 1/16/23.
//

#include <stdio.h>
#include <cmath>

int main() {
    float a,b,c,denta,x1,x2;
    do{
        printf("Nhap he so a,b,c: ");
        scanf("%f %f %f",&a,&b,&c);
    }
    while (a==0);
    denta=(b*b-4*a*c);
    
    if (denta <0){
        printf("Phuong trinh vo nghiem ");
        return 0;
    }
    
    if (denta >0){
        x1=(-b + sqrt(denta))/(2*a);
        x2=(-b - sqrt(denta))/(2*a);
        if (x1 >0 && x2>0){
            printf("Phuong trinh co 4 nghiem phan biet: \n");
            printf("x1= %0.3f \n",(sqrt(x1)) );
            printf("x2= %0.3f \n",(-sqrt(x1)) );
            printf("x3= %0.3f \n",(sqrt(x2)) );
            printf("x4= %0.3f \n",(-sqrt(x2)) );
            
        }
        
        else{
            if (x1*x2 <0){
            printf("Phuong trinh co 2 nghiem: \n");
            printf("x1= %0.3f \n",sqrt(x1));
            printf("x2= %0.3f \n",-sqrt(x1));
            }
            else
                printf("Pt vo nghiem");
        }
    }
    
    if (denta ==0){
        float x0=(-b)/(2*a);
        if (x0<0)
            printf("Pt vo nghiem");
        else{
            printf("Pt co 2 nghiem: /n");
            printf("x1= %0.3f \n", sqrt(x0));
            printf("x2= %0.3f \n", -sqrt(x0));
            
        }
    }
}
