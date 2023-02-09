#include <stdio.h>
#include <stdlib.h>

typedef struct Funcionario {

char nome[50];
float salario;
char cargo [50];

}funcionario;

int main(){

int quantidade, i;

printf("Informe quantos funcionarios deseja cadastrar: ");
scanf("%i", &quantidade);
funcionario *empresa = (funcionario*) malloc (quantidade * sizeof(int));
    if (empresa == NULL){
exit(1);
}

for(i = 0; i < quantidade; i++){

printf(" Informe o nome do funcionario:  ");
scanf(" %[^\n]s", empresa->nome);
printf("Informe o salario do funcionario: ");
scanf("%f", &empresa->salario);
printf("Informe o cargo do funcionario: ");
scanf(" %[^\n]s", empresa->cargo);

}
return 0;
}
