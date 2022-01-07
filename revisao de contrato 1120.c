#include <stdio.h>
int tamanho(char str[1000]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}
int main(){
    int n=0,i=0;
    char d,str1[1000];//[1000];
    char D[1],str2[1000];
    scanf(" %c %s",&d,&str1);
    while(d!='0' || str1[0]!='0' || str1[1]!='\0'){

        //getchar();
        //scanf("%s",str1);

        //itoa(str1,str2,10);
        //sprintf(D,"%d",d);
        //sprintf(str2,"%d",str1);

        //printf("%s\n",str2);
        //itoa(d,D,10);
        //printf("%s\n",D);
        //(d=='0' && str1=="0"){break;}
        int tam,j,k,quantD=0,quant=0,quant0=0,pode=0;
        tam=tamanho(str1);
        char semD[1000]="";
        for(i=0;i<tam;i++){
            if(str1[i]!='0' && str1[i]!=d){
               pode=1;

            }
            if(str1[i]!=d && pode==1){
                semD[quant]=str1[i];
                quant++;
                //printf("%c",str1[i]);
            }else if(str1[i]==d){
               quantD++;
            }

            if(str1[i]=='0'){
               quant0++;
            }
        }

        if(quantD==tam){
            printf("0");
        }else if(quant>=0 && pode==1){
            printf("%s",semD);
        }else if(quant0==tam-1){
            printf("0");
        }

        if(d!='0' || str1[0]!='0' || str1[1]!='\0'){
        printf("\n");
        }
        scanf(" %c %s",&d,&str1);
    }



}

