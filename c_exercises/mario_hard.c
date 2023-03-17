#include <stdio.h>

void printFullBlock(int nb);

int main(void) {
    int nb;

    do{
        printf("Insert a number between 1 and 8: ");
        scanf("%d", &nb);
        printf("\n\n");
    } while (nb < 1 || nb > 8);

    printFullBlock(nb);

    return 0;
}



void printFullBlock(int nb) {
    int qtd_spaces = nb-1;

    for(int i = 1; i <= nb; i++){
        for(int n = qtd_spaces; n > 0; n--){
            printf(" ");
        }
        for(int m = i; m > 0; m--){
            printf("#");
        }
        printf(" ");
        for(int m = i; m > 0; m--){
            printf("#");
        }
        for(int n = qtd_spaces; n > 0; n--){
            printf(" ");
        }
        printf("\n");
        qtd_spaces--;
    }
}