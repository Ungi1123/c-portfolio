#include <stdio.h>


int main(){

    int a, b, tem;
    scanf("%d %d", &a, &b);

    tem = b % 10;
    printf("%d\n", tem * a);

    tem = (b / 10) % 10;
    printf("%d\n", tem * a);


    tem = b / 100;
    printf("%d\n", tem * a);

    printf("%d\n", a * b);

    return 0;
}

