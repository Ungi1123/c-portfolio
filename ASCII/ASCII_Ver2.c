#include<stdio.h>

int main(){
    char a, b;

    printf("두 개의 알파벳을 입력해주세요.");
    scanf("%c %c", &a, &b);

    if(a < 'A' || (a > 'Z' && a < 'a') || a > 'z'){
        printf("입력한 값이 올바르지 않습니다.");

        return 0;
    }

    if(b < 'A' || (b > 'Z' && b < 'a') || b > 'z'){
        printf("입력한 값이 올바르지 않습니다.");

        return 0;
    }

    if(a>b){
        printf("%c와 %c 사이의 거리: %d", a, b, a - b);
    }

    if(b>a){
        printf("%c와 %c 사이의 거리: %d", a, b, b - a);
    }

    return 0;
}