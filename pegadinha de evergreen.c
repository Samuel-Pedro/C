#include <stdio.h>
//#include <string.h>
int tamanho(char str[101]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}
int main()
{
    int n,m,i,j=0,k,tam1=0,tam2=0;
    char palavra1[101],palavra2[101];
    scanf("%d ", &n);
    int num[n],cont[n],quant=0,igual=0;
    for(i=0;i<n;i++){
        gets(palavra1);
        gets(palavra2);
        tam1=tamanho(palavra1);

        tam2=tamanho(palavra2);
        for(j=0;j<tam1;j++){
            printf("%c%c",palavra1[j],palavra1[j+1]);
            if(palavra2[j+1]!='\0'){
                printf("%c%c",palavra2[j],palavra2[j+1]);
                if(palavra2[j+2]=='\0'){
                    printf("\n");
                }
            }else{
                printf("%c\n",palavra2[j]);
            }
            j++;
        }

    }


    return (0);
}
