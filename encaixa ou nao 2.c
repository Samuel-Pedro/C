#include <stdio.h>
int tamanho(char str[1000]){
    int i=0;
    for(i=0;str[i]!='\0';i++){

    }
    return i;
}
int palavra(char str1[1000],char str2[1000],int tam1, int tam2){
    int enc=0;
    int i=0,j=0,aux=0;
    aux=tam1-tam2;
    for(i=aux,j=0;i<tam1;i++,j++){
        if(str1[i]!=str2[j]){
            enc=1;
        }
    }
    return enc;
}
int main(){
    int n,m,i=0,j=0,k,a,b;
    char str1[1000],str2[1000];
    scanf("%d",&n);
    int mat[n][m],col[12],cont0=0;
    for(i=0;i<n;i++){
        int tam1, tam2, resp;

        scanf(" %s %s",str1,str2);
        tam1=tamanho(str1);
        tam2=tamanho(str2);
        resp=palavra(str1,str2,tam1,tam2);
        if(resp==1){
            printf("nao encaixa\n");
        }else{
            printf("encaixa\n");
        }

    }



}
