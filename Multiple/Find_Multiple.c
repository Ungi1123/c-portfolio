#include<stdio.h>

int main(){
    
    int str, end; 
    int n;

    printf("두 숫자: ");
    scanf("%d %d", &str, &end);

    printf("N의 배수: ");
    scanf("%d", &n);

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