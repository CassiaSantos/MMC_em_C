/*6. Escreva uma função que calcula o mínimo múltiplo comum (MMC) entre dois números. 
Use essa função para escrever um programa que leia dois números e depois imprima o MMC dos mesmos.
Lembrando que MMC(a, b) = ax b/MDC (a, b).*/

#include <stdio.h>

//Função que calcula o MDC:
int mdc(int num1, int num2) {
    while (num2 != 0) {
        int resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }
    return num1;
}

/*Função que calcula o MMC:
MMC(a,b)×MDC(a,b)=a×b
Isto é, o produto de dois números é igual ao produto do MMC pelo MDC desses números:*/
int mmc(int num1, int num2){
    return num1 * (num2 / mdc(num1, num2));
}

void main(){
    
    int num1, num2;
    printf("\t\t\tMDC entre 2 números\n\nInsira:\n\n1° número: ");
    scanf("%d", &num1);
    printf("2° número: "); scanf("%d", &num2);

    printf("MMC(%d,%d) = %d",  num1, num2, mmc(num1, num2));
}
