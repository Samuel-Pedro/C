#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int tamanho(char str[5]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}
int main(){
    int i,j,num1,num2;
    char str1[5],str2[5],str3[5];

    //itoa(number,str,10);
    //printf("String value = %s\n", str);*/

    while(scanf("%d%d",&num1,&num2)!=EOF){
        int quant=0,igual=0,sub=0,quantIgual=0,tam1=0,tam2=0,casoBom=0;
        sub=num2-num1+1;
        /*itoa(num1,&str1,10);
        getchar();
        itoa(num2,&str2,10);*/


        for(i=0;i<sub;i++){
            int mil,cem,dez,um,num3=0;
        num3=num1;
        if(num3>=1000){
            mil=num3/1000;
            num3=num3-(mil*1000);
            cem=num3/100;
            num3=num3-(cem*100);
            dez=num3/10;
            num3=num3-(dez*10);
            um=num3;
        }else if(num3>=100){
            cem=num3/100;
            num3=num3-(cem*100);
            dez=num3/10;
            num3=num3-(dez*10);
            um=num3;
        }else if(num3>=10){
            dez=num3/10;
            num3=num3-(dez*10);
            um=num3;
        }else if(num3>=0){
            um=num3;
        }


            if(num1<10){
                casoBom++;
            }else if(num1<100){
                if(um==dez){

                }else{
                    casoBom++;
                }
            }else if(num1<1000){
                if(um==dez || um==cem || dez==cem){

                }else{
                    casoBom++;
                }
            }else if(num1<=5000){
                if(um==dez || um==cem || um==mil || dez==cem || dez==mil || cem==mil){

                }else{
                    casoBom++;
                }
            }

            num1++;
            //itoa(num1,str1,10);
        }


        //if(i=2){if(str1[0]==sr1[1]){}}
        printf("%d\n",casoBom);

    }
   // printf("%s",str2);
    return 0;
}
