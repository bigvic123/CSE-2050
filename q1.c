#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void toHex(int n, char * buff, int len){
    int counter = 0;
    int m = n;
    int div = 1;
    while(m > 16){
        m = m/16;
        counter++;
    }
    int a[counter + 1];
    for(int k = 0; k<= counter; k++){
        a[k] = 0;
    }
    //creat list with counter spots
    for (int i = counter; i > 0; i-=1){
        for (int j = 0; j < i; j++){
            div = div * 16;
        }
        while(n>div){
            n = n - div;
            a[counter - i] = a[counter - i] + 1;
        }
    }
    a[counter] = n;
    buff[len] = '\0';

    char hex[] ="0123456789abcdef";
    char result[10] = "";
    result[counter] = '\0';
    for (int i =0; i < counter; ++i) {
        result[counter -i -1] = hex[a[i]];
    }
}

int main(int argc, char *argv[]){
    int x = 1000;
    const int len = 9;
    char  buff[9] = "";
    toHex(x, buff, len);
    printf("%s",buff);
}

