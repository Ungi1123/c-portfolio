#include <stdio.h>

int main(){
    int a, b, num, temp;

    int count = 0;
    scanf("%d", &num);

    if(num < 0 || num >= 100){
        printf("0~99사이의 수만 입력하세요.\n");
        return 0;
    }

    if(num < 10){
        num = num * 10;
    }

    temp = num;

    while(1){
        a = temp / 10;
        b = temp % 10;

        temp = b * 10 + (a + b) % 10;
          count++;

        if(temp == num){
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}

