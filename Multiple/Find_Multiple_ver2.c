#include <stdio.h>

int main(){
    int str, end; 
    int n;

    printf("두 숫자: ");
    if(scanf("%d %d", &str, &end) != 2) return 1;
    
    
    printf("N의 배수: ");
    if(scanf("%d", &n) != 1) return 1;
   

    if(n == 0){
        printf("0의 배수는 존재하지 않습니다.");
        return 1;
    }
    
    if(str > end){
        int temp; 
        temp = str;
        str = end;
        end = temp;
    }

    if(n > str){
        for(int i = 1; i * n < end; i++){
            printf("%d ", i*n);
        }
    }

    if(n <= str){

        for(int i = 2; i * n < end; i++){
            printf("%d ", i*n);
        }
    }
    return 0;

}