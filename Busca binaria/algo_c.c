#include <stdio.h>
/*
Autor: Matheus Felipe
E-mail: mflm@cin.ufpe.br
Public: cin.ufpe.br/~mflm

Função de busca binaria em C, ela devolve a posição do valor caso for encontrado, se não ela devolve -1. Ultiliza da ideia
dividir para conquistar a cada interação ela verifica o valor do meio e separa duas parte e busca entre os possiveis valores.

Obs: A função pre-suponhe que o vetor a ser consultado esteja ordenado!
*/

int bb(int x, int n, int *v){
   int e, m, d;
   if (v[n-1] < x) return n;
   if (x <= v[0]) return -1;  // agora v[0] < x <= v[n-1]
   e = 0; d = n-1;
   while (e < d-1) {
      m = (e + d)/2;
      if (v[m] < x) e = m;
      else d = m;
   }
   return d;
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10}, aux = 0;
    printf("Informe para ser buscado: ");
    scanf("%d", &aux);
    printf("%d",bb(aux,10,&vetor));
    return 0;
}
