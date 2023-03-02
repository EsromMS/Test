#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *fp;
    int c, nlinhas = 0;
    fp = fopen("entrada.txt", "rt");
    if(fp==NULL){
        printf("Erro na abertura do arquivo!");
        exit(1);
    }
    while ((c = fgetc(fp)) != EOF){
        if(c == '\n')
     nlinhas++;
           
    }
    fclose(fp);
    printf("Numero de linhas = %d\n", nlinhas);
    
    return 0;
}