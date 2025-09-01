#include <stdio.h>

int main(){

    int birth;
    int year;

    scanf("%d %d", &birth, & year);

    int age = year - birth;

    printf("%d년에 나는 %d살이야!", year, age);

    return 0;

}