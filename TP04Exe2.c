#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//Samuel Pedro Fernandes Amorim
//20213010502

int main(){
    int n,i=0,j=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vet[n];
    int *pontVet[n];//*p0=vet;
    int maior=-1,maiorAnt=-1,maiorPos=-1;
    for(i=0;i<n;i++){
        printf("Digite o valor da posicao %d do vetor: ",i);
        scanf(" %d",&vet[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0){
                maiorAnt=maior;
                maior=-1;
                maiorPos=0;
            }
            if(i>0){
                  //  if(j==0){
                 //       maiorAnt=maior;
                  //      }
                if(vet[j]>maior /*&& vet[j]!=maiorAnt*/ && vet[j]<maiorAnt){
                    maior=vet[j];
                    maiorPos=j;
                    //pontVet[i]=p0+j;
                    }
            }else{
                if(vet[j]>maior){
                    maior=vet[j];
                    maiorPos=j;
                    //pontVet[0]=p0+j;
                    }
                }
        }
        pontVet[i]=vet+maiorPos;
    }
    for(i=0;i<n;i++){
        printf("pontVet[%d]= %d , endereco = %p\n",i,*pontVet[i],pontVet[i]);
    }


}

