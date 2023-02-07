//
//  main.cpp
//  Cos
//
//  Created by Đinh Bảo Châu Thi on 1/17/23.
//

#include <stdio.h>
#include <cmath>

int main(int argc, const char * argv[]) {
    float n, res,t;
    const float eps=10e-6;
    scanf("%f",&n);
    t=1;res=1;
    int i=1;
    while (fabs(t) >= eps ){
        t *= (-1)*( (n*n)/ (i*(i+1)));
        res+=t;
        i+=2;
    }
    printf("cos  x= %0.3f \n", res);
}
