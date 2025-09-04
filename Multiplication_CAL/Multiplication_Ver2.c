 #include <stdio.h>

 int main(void){

    int a, b, tem;
    scanf("%d %d", &a, &b);

    tem = b;

    while(tem>0){
        int digit = tem % 10;
        printf("%d\n", digit * a);

        tem /= 10;


    }

    printf("%d", a * b);

 }