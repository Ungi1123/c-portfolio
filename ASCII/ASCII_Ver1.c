#include <stdio.h>

int isalphabet(char x){
    if(x < 65){
        return 0;
    }

    else if(x > 90 && x < 97 && x > 122){
        return 0;
    }

    else {
        return 1;
    }
}

int main(){
    
    char a, b;
    printf("두 개의 알파벳을 입력해주세요.");
    scanf("%c %c", &a, &b);

    int alphabet = 0;

    alphabet += isalphabet(a);
    alphabet += isalphabet(b);
    if(alphabet == 0 || alphabet ==1){
        printf("올바르지 않은 문자입니다.");

        return 0;
    }
    
    if(a>b) {
        printf("%c와 %c의 거리 : %d\n", a, b, a-b);
    }
    if(b>a){
        printf("%c와 %c의 거리 : %d", a, b, b-a);
    }

    return 0;
}