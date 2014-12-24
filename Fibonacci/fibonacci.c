#include <stdio.h>
/*
Autor: Matheus Felipe
E-mail: mflm@cin.ufpe.br
Public: cin.ufpe.br/~mflm

Funca fibonacci retorna o n-esimo valor dos numeros de fibonacci.

Obs: A funçao pre-suponhe que o valor e > 0!
*/
int fibonacci(int n){
    int primeiro = 0, segundo = 1;
    if(n>0){
        if(n==0) return primeiro;
        else if(n==1) return segundo;
        else return fibonacci(n-1) + fibonacci(n-2);
    }
    return 0;
}

int main(){
    int n=0;
    printf("Informe o valor para ser calculado em Fibonacci: ");
    scanf("%d", &n);
    printf("\n%d", fibonacci(n));
    return 0;
}
