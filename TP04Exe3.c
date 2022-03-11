#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <time.h>


//Samuel Pedro Fernandes Amorim
//20213010502

int main(){
    int *q = (int *) malloc(12*sizeof(int));
    int *r = (int *) malloc(20*sizeof(int));
    int *w = (int *) malloc(0*sizeof(int));
    //int i=0,j=0,tam=0;
        int i=0,j=0,k=0,tam=0,add=1;
    srand(time(0));
    printf("Q = ");
    for(i=0;i<12;i++){
        q[i]=rand()%26;
        printf("%d ",q[i]);
    }
    printf("\nR = ");
    for(i=0;i<20;i++){
        r[i]=rand()%26;
        printf("%d ",r[i]);
    }
    printf("\n");
    //tam=intersecao(q,r,w);
    for(i=0;i<20;i++){
        for(j=0;j<12;j++){
            if(q[j]==r[i]){
                for(k=0;k<tam;k++){
                    if(q[j]==w[k]){
                        add=0;
                    }
                }
                if(add==1){
                    tam++;
                    if(tam==1){
                        w = (int *) realloc(NULL,tam*sizeof(int));
                        w[0]=r[i];
                    }else{
                        w = (int *) realloc(w,tam*sizeof(int));
                        w[tam-1]=r[i];
                    }
                }
            }
        }
        add=1;
    }

    for(i=0;i<tam;i++){
        printf(" W [%d] = %d\n",i,w[i]);
    }
}

