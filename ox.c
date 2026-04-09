#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
    int num = atoi(argv[1]);

    if (argc < 2) {
        printf("Digite um numero inteiro\n");
        return 1;
    }

    if(num % 2 == 0){
        printf("%c", 'O');
    }else{
        printf("%c", 'X');
    }
    return 0;
}