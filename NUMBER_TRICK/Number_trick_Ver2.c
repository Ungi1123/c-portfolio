#include <stdio.h>

int main(){
    int a, b, tem, num;
    int count = 0;

    scanf("%d", &num);

    if (num < 0 || num >99){
        printf("0 ~ 99사이의 숫자를 입력해주세요.\n");
        return 0;
    }

    if(num < 10){
        num *= 10;
    }

    tem = num;

    do{
        a = tem / 10;
        b = tem % 10;

        tem = b * 10 + (a + b) % 10;
        count++;
    }while(tem != num);

    printf("반복되는 횟수: %d\n", count);
    fflush(stdout); 
    return 0;
}