#include <stdio.h>

int main(){

    int a;

    while(1){

        printf("\n ------ 플래너 메뉴 ------\n");
        printf("0. 종료\n");
        printf("1. 김변수랑 놀기\n");
        printf("2. 일기쓰기\n");
        printf("3. 운동하고 건강해지기\n");
        printf("옵션선택: ");

        scanf("%d", &a);

        if (a==0) {
            printf("플래너를 종료합니다. 오늘 하루도 수고했어요!\n");
            break;
        }

        else if (a==1) {
            printf("\n<오늘 해야 할 일>\n-----------------\n[X]김변수랑 놀기\n[ ]일기쓰기\n[ ] 운동하고 건강해지기\n");
        }

        else if (a==2) {
            printf("\n<오늘 해야 할 일>\n-----------------\n[ ]김변수랑 놀기\n[X]일기쓰기\n[ ] 운동하고 건강해지기\n");
        }

        else if (a==3) {
            printf("\n<오늘 해야 할 일>\n-----------------\n[ ]김변수랑 놀기\n[ ]일기쓰기\n[X] 운동하고 건강해지기\n");
        }

        else {
            printf("잘못된 입력입니다. 0~3 중에서 고르세요.\n");
        }

    }
    return 0;
}
         