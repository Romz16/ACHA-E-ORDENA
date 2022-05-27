#include "ordenacao.h"
#include <stdio.h>
#include<stdlib.h>




#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Manter como especificado
TipoAluno *alocaAlunos(TipoAluno *alunos, int n){
	
   alunos = malloc(n*sizeof(TipoAluno));//preencher
   return alunos;
}

//Manter como especificado
TipoAluno *desalocaAlunos(TipoAluno *alunos){
  free(alunos);
  return alunos;
}

void ordena(TipoAluno *alunos, int n){
	int i, j;
    char aux[20];
        for (i = 0; i < n; i++){
              for (j = i; j < n; j++){
                    if (strcmp(alunos[i].nome, alunos[j].nome) >  0){
                          strcpy (aux, alunos[i].nome);
                          strcpy (alunos[i].nome, alunos[j].nome);
                          strcpy (alunos[j].nome, aux); 
                        }
                }
        }
}







int main ()
{
	int i;
	int n, k;
  TipoAluno *alunos =NULL;

	//ler as quantidades
	scanf("%d %d",&n,&k);
	//alocar o vetor
	alunos = alocaAlunos(alunos,n);
	//preencher o vetor
	for ( i = 0; i < n; i++)
	{
		scanf("%s",alunos[i].nome);
		alunos[i].numero =i;
	}
	
	//ordenar
	ordena(alunos,n);
	//imprimir o resultado
	for ( i = 0; i < n; i++)
	{
		printf("\n %d %s\n",i,alunos[i].nome);/* code */
	}
	
	printf("%s\n",alunos[k].nome);
	

	//desalocar o vetor
	alunos = desalocaAlunos(alunos);
  return 0;
}
