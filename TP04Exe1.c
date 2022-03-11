#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//Samuel Pedro Fernandes Amorim
//20213010502

int tamanho(char str[200]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}

char *strstr(char *str1, char *str2){
    char *volta=NULL;
    int tam1, tam2,i=0,j=0,quantIgual=0;
    tam1=tamanho(str1);
    tam2=tamanho(str2);
    //printf("tam1=%d\n",tam1);
   // printf("tam2=%d\n",tam2);
    for(i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            if(str1[i]==str2[j]){
                //printf("entrou\n");
                quantIgual++;
                i++;
                //printf("quantigual=%d\n",quantIgual);
            }
            if(quantIgual==tam2){
                volta=str1+i-quantIgual;
                return volta;
            }
        }
        i=i-quantIgual;
        quantIgual=0;
    }
    return volta;
}

int main(){
    char str1[200],str2[200];
    char *s1,*s2,*resposta;
    printf("Digite a primeira string: ");
    gets(str1);
    s1=str1;
    //printf("Endereço de str1: %p\n",s1);
    printf("Digite a segunda string: ");
    gets(str2);
    s2=str2;
    //printf("Endereço de str2: %p\n",s2);
    resposta=strstr(s1,s2);
    printf("Endereco de str1: %p\n",s1);
    printf("Endereco da primeira aparicao de str2 em str1: %p\n",resposta);

}

