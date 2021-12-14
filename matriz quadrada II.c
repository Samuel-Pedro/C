#include <stdio.h>
int main(){
    int c=1,i=0,j=0,cont=0,num=0;
    char t;
    scanf("%d",&c);
    double mat[12][12],col[12],soma=0,media=0,aux=0;
    while(c!=0){
        for(i=0;i<c;i++){
                num=i+1;
            for(j=0;j<c;j++){


                if(j==0){
                    printf("%3d",num);
                    num--;
                    if(i==j){
                    num=1;
                    }
                }else if((i+j)<(i+i)){
                    printf(" %3d",num);
                    num--;
                }else if((i+j)>(i+i)){
                    num++;
                    printf(" %3d",num);
                }else if(i==j){
                    num=1;
                    printf(" %3d",num);

                }

            }
            printf("\n");
        }
        printf("\n");
        scanf(" %d",&c);
    }

}
