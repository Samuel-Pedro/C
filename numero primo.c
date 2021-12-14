#include <stdio.h>
int main(){
    int quant,i=0,j=0,num;
    scanf("%d",&quant);
    for(i=0;i<quant;i++){
        scanf(" %d",&num);
        for(j=1;j<=num;j++){
            if(num==j){
                printf("%d eh primo\n",num);
                break;
            }else if(num%j==0 && j!=1){
                printf("%d nao eh primo\n",num);
                break;
            }

        }
    }
}
