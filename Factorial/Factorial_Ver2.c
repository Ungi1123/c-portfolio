#include <stdio.h>

unsigned long long factorial(int n){

    unsigned long long r = 1;

    for(int i=1; i <= n; i++){
        r = r * i;

       
    }
    return r;
}
int main(){

    int n;
    scanf("%d", &n);

    if(n < 0){
        return 0;
    }

    else if (n == 0){
        return 1;
    }

    else if (n >= 20){
        printf("숫자가 너무 큽니다.");
    }

    else {
        printf ("%llu", factorial(n));
    }

    return 0;

}