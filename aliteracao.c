#include <stdio.h>
int tamanho(char str[10000]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}
int main(){
    int n,i=0;
    char str1[10000];
    while(gets(str1)){
        int m,j=0,k,a,b;
        int tam1, resp;

        tam1=tamanho(str1);
        int aliteracoes=0;
        char atual=str1[0],anterior='0',ant2=' ';
        if(atual>='a' && atual<='z'){
            atual=atual-32;
        }
        for(j=0;j<tam1;j++){
            if(str1[j-1]==' ' && str1[j]!=' '){
                ant2=anterior;
                if (ant2>='a' && ant2<='z'){
                    ant2=ant2-32;
                }
                anterior=atual;
                if (anterior>='a' && anterior<='z'){
                    anterior=anterior-32;
                }
                atual=str1[j];
                if (atual>='a' && atual<='z'){
                    atual=atual-32;
                }

                if(anterior==atual){
                    if(ant2==anterior){}
                    else{
                        aliteracoes++;
                    }
                }
            }
        }
        printf("%d\n",aliteracoes);
    }



}
