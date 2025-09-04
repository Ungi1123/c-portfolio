#include <stdio.h>

int main(){

    int a, b, tem;
    scanf("%d %d", &a, &b);

    tem = b;
    
    int pos = 0;
    int width = 7;

    printf("%*d\n", width, a);
    printf("*%*d\n", width-1, b);
    for (int i = 0; i < width; i++) 
    putchar('-');
    putchar('\n');

    while(tem > 0){
        int digit = tem % 10;
        int partial = a * digit;

        printf("%*d\n", width - pos, partial);

        tem /= 10;

        pos++; 

    }

    for (int i = 0; i < width; i++) 
    putchar('-');
    putchar('\n');

    printf("%*d",width , a * b);

    return 0;

}
