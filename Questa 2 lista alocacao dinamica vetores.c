#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//função para calcular a nota de cada aluno//
void calcula_nota (int * prova_aux, int * gabarito_aux, int qtd_questoes_aux, float *nota_aux, int qtd_aluno_aux ){
int index, cont_aluno;

for(cont_aluno = 0; cont_aluno < qtd_aluno_aux; cont_aluno++){
  for(index = 0; index < qtd_questoes_aux; index++){
      if (prova_aux[index] == gabarito_aux[index]){
        nota_aux[cont_aluno] += 1;
        nota_aux[cont_aluno] = nota_aux[cont_aluno] * (10 / qtd_questoes_aux);
            }
        }
    printf("a nota do aluno %d e %.1f\n", cont_aluno, nota_aux[cont_aluno]);
    }

}

int main (){
int qtd_questoes, index, cont_alunos, qtd_alunos = 2;
printf("Quantas questoes a prova possui?\n ");
scanf("%d", &qtd_questoes);

//Alocando dinamicamente os vetores//
int *prova = (int*) malloc (qtd_questoes * sizeof(int));
int *gabarito = (int*) malloc (qtd_questoes * sizeof (int));
float *nota = (float*) malloc (qtd_questoes * sizeof(float));

//Empregando as respostas corretas no gabarito//
for(index = 0; index < qtd_questoes; index++){
printf("gabarito da %d questao:\n ", index + 1);
scanf("%d", &gabarito[index]);
}

//Laço para cada aluno responder a prova, levando em consideração 10 alunos matriculados//
for (cont_alunos = 0; cont_alunos < qtd_alunos; cont_alunos++){

    for(index = 0; index < qtd_questoes; index++){
printf("Qual resposta da %d questao?\n (1) (2) (3)\n ", index + 1);
scanf("%d", &prova[index]);


    }
}
for (index = 1;index < 2; index++){

    calcula_nota(prova, gabarito, qtd_questoes, nota, qtd_alunos);
}
return 0;
}
