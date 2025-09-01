#include <stdio.h>

int main(void){
    int birth;
    int year;

    scanf("%d %d", &birth, &year);
    printf("%d년에 나는 %d살이야!",year, year - birth);

    return 0;

}