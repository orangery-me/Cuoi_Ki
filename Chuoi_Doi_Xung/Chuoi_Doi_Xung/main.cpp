//
//  main.cpp
//  Chuoi_Doi_Xung
//
//  Created by Đinh Bảo Châu Thi on 1/14/23.
//

#include <stdio.h>
#include <cstring>

bool Doi_Xung(char str[], long long n){
    for (long long i=0; i<n; ++i)
        if (str[i] != str[n-1-i])
            return false;
    return true;
}

int main(int argc, const char * argv[]) {
    char str[1000];
    gets(str);
    long long n=strlen(str);
    if (Doi_Xung(str,n))
        printf("Chuoi Doi Xung");
    else
        printf("Chuoi Khong Doi Xung");
}
