#include <stdio.h>
int tamanho(char str[1000]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}
int letra(char str1[200],int tam1){

}
int main(){
    int n,i=0;
    char xyz[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[200];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        int m,j=0,k,a,b, quant[26];
        for(j=0;j<26;j++){quant[j]=0;}
        int tam1, resp;
        char abc='a',ABC='A';
        gets(str1);
        tam1=tamanho(str1);
        for(j=0;j<tam1;j++){
            for(k=0;k<26;k++,abc++,ABC++){
                if(str1[j]==abc || str1[j]==ABC){quant[k]++;}
            }
            abc='a';
            ABC='A';
        }
        int l=0,valMaior=0;;
        for(l=0;l<26;l++){
            if(quant[l]>valMaior){
                valMaior=quant[l];
            }
        }
        for(l=0;l<26;l++){
            if(quant[l]==valMaior){
                printf("%c",xyz[l]);
            }
        }
        printf("\n");
    }



}
