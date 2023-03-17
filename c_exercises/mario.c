#include <stdio.h>
#include <cs50.h>


int main(void) {
    int nb;
    do{
        nb = get_int("Tell me a number: ");
    } while (nb < 1 || nb > 8);
    int qtd_spaces = nb-1;
    for(int i = 1; i <= nb; i++){
        for(int n = qtd_spaces; n > 0; n--){
            printf(" ");
        }
        for(int m = i; m > 0; m--){
            printf("#");
        }
        printf("\n");
        qtd_spaces--;
    }
}