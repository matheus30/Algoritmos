#include <stdio.h>
/*
Autor: Matheus Felipe
E-mail: mflm@cin.ufpe.br
Public: cin.ufpe.br/~mflm

Fun��o de busca binaria em C, ela devolve a posi��o do valor caso for encontrado, se n�o ela devolve -1. Ultiliza da ideia
dividir para conquistar a cada intera��o ela verifica o valor do meio e separa duas parte e busca entre os possiveis valores.

Obs: A fun��o pre-suponhe que o vetor a ser consultado esteja ordenado!
*/


// a fun��o bb faz uma busca em um vector � se o valor procurado � encontrado ela retorna 1, caso contrario -1.
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
