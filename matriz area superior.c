#include <stdio.h>
int main(){
    int c,i=0,j=0,cont=0;
    char t;
    scanf("%c",&t);
    double mat[12][12],col[12],soma=0,media=0,aux=0;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf(" %lf",&mat[i][j]);

            if((i+j)<11 && (i+j)>i+i){
                soma=soma+mat[i][j];
                cont++;
            }
        }

    }
    if(t=='S'){
        printf("%.1lf\n",soma);
    }else if(t=='M'){
        media=soma/cont;
        printf("%.1lf\n",media);
    }

}
