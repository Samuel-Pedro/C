#include <stdio.h>

int main(void){
    char cpf[15];
    while(gets(cpf)){
        int i=0,ida=0,volta=10,soma1=0,soma2=0,b1=0,b2=0;
        int val1=0,val2=0;
        int compara1,compara2;
        for(i=0;i<12;i++){
            if(cpf[i]>47 && cpf[i]<58){
                ida++;
                int a = cpf[i]-'0';
                a=a*ida;
                soma1=soma1+a;
                //printf("a=%d\nsoma1=%d\n",a,soma1);
            }
        }
        b1=soma1%11;
        compara1=cpf[12]-'0';
        if(b1==10){b1=0;}
        if(b1==compara1){val1=1;}

        for(i=0;i<12;i++){
            if(cpf[i]>47 && cpf[i]<58){
                volta--;
                int a = cpf[i]-'0';
                a=a*volta;
                soma2=soma2+a;
                //printf("a=%d\nsoma2=%d\n",a,soma2);
            }
        }
        b2=soma2%11;
        compara2=cpf[13]-'0';
        if(b2==10){b2=0;}
        if(b2==compara2){val2=1;}

        if(val1==1 && val2==1){
            printf("CPF valido\n");
        }else{
             printf("CPF invalido\n");
        }

    }
}
