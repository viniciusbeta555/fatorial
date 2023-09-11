#include <stdio.h>

int main(){
    int numero, fat;

        printf("Digite um numero maior ou igual a 0\n");
        scanf("%d", &numero);

    while(numero > 0){  
        for(fat = 1; numero > 1; numero = numero - 1){
            fat = fat * numero;
        }
        printf("O fatorial do numero e: %d\n", fat);
            printf("Digite um numero maior ou igual a 0\n");
            scanf("%d", &numero);
    }
    if(numero == 0){
            printf("Voce digitou o numero 0");
    }else{
            printf("numero invalido");
    }
    return 0;            
}