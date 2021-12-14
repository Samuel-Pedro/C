#include <stdio.h>
int main(){
    int n,m,i=0,j=0,k,a,b;
    char certo='S';
    scanf("%d %d",&n,&m);
    int mat[n][m],col[12],cont0=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
            cont0=0;
        for(j=0;j<m;j++){
            if(mat[i][j]==0){
                cont0++;
            }
            if(mat[i][j]!=0){
                for(k=i+1;k<n;k++){
                    if(mat[k][j]!=0){
                        certo='N';
                    }
                }
                break;
            }
            if(cont0==m){
                for(a=i+1;a<n;a++){
                    for(b=0;b<m;b++){
                        if(mat[a][b]!=0){
                            certo='N';
                        }
                    }
                }
                break;
            }

        }
    }
    printf("%c\n",certo);

}
