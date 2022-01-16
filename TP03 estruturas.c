#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{int mes, ano;} TDATA;
typedef struct prod{int cod; char nome[50]; float preco; TDATA validade;} TPROD;

int tamanho(char str[5]){
    int i=0;
    for(i=0;str[i]!='\0';i++){}
    return i;
}

struct prod adicionar(int quant){
    struct prod p;
    p.cod=quant;
    printf("Digite o nome do produto: ");
    getchar();
    gets(p.nome);

    printf("Digite o preco do produto: ");
    scanf("%f",&p.preco);
    printf("Digite a validade do produto \n");
    printf("Digite o mes: ");
    scanf("%d",&p.validade.mes);
    printf("Digite o ano: ");
    scanf("%d",&p.validade.ano);

    return p;
}
void exibirTodos(struct prod p[100],int quant){
    int i;
    for(i=0;i<quant;i++){

    printf("Produto %d \n",p[i].cod+1);
    printf("Nome: %s\n",p[i].nome);
    printf("Preco: %.2f\n",p[i].preco);
    printf("Validade: %d - %d\n",p[i].validade.mes , p[i].validade.ano);
    printf("------------------------------\n");
    }
}
void caro(struct prod p[100],int quant){
    int i,maiorPos,menorPos;
    float maior,menor;
    for(i=0;i<quant;i++){
        if(i==0){
            maior=p[0].preco;
            menor=p[0].preco;
            maiorPos=0;
            menorPos=0;
        }else{
            if(p[i].preco>maior){
                maior=p[i].preco;
                maiorPos=i;
            }
            if(p[i].preco<menor){
                menor=p[i].preco;
                menorPos=i;
            }
        }
    }
    printf("Produto %d e' o mais caro\n",maiorPos+1);
    printf("Nome: %s\n",p[maiorPos].nome);
    printf("Preco: %.2f\n",p[maiorPos].preco);
    printf("Validade: %d - %d\n",p[maiorPos].validade.mes , p[maiorPos].validade.ano);
    printf("Produto %d e' o mais barato\n",menorPos+1);
    printf("Nome: %s\n",p[menorPos].nome);
    printf("Preco: %.2f\n",p[menorPos].preco);
    printf("Validade: %d - %d\n",p[menorPos].validade.mes , p[menorPos].validade.ano);
}
int excluir(struct prod p[100],int quant){
    int i,j,newQuant,quantExc=0;
    char nomeExcluir[50];
    printf("Digite o nome do produto que deseja excluir: ");
    getchar();
    gets(nomeExcluir);

    for(i=0;i<quant;i++){
        if(strcmp(p[i].nome,nomeExcluir)==0){
          for(j=i;j<quant;j++){
            //passar os produtos para as novas posições
            TPROD aux;
            p[j]=p[j+1];
            p[j].cod--;
          }
          quant--;
          quantExc++;
          i=-1;
        }
    }
    printf("\nExcluido %d produtos!\n",quantExc);
    newQuant=quant;
    return newQuant;
}
void troca(TPROD p1,TPROD p2){
    TPROD aux;
    int auxInt;
    aux=p1;
    p1=p2;
    p2=aux;
    auxInt=p1.cod;
    p1.cod=p2.cod;
    p2.cod=auxInt;
}
void ordenar(struct prod p[100],int quant){
    int i,j;
    TPROD aux;
    int auxInt;
    for(i=1;i<quant;i++){
        for(j=1;j<quant;j++){
            if(strcmp(p[j-1].nome,p[j].nome)>0){
                aux=p[j-1];
                p[j-1]=p[j];
                p[j]=aux;
                auxInt=p[j-1].cod;
                p[j-1].cod=p[j].cod;
                p[j].cod=auxInt;
                //troca(p[j-1],p[j]);
            }else if(strcmp(p[j-1].nome,p[j].nome)==0){
                if(p[j-1].validade.ano>p[j].validade.ano){
                    aux=p[j-1];
                    p[j-1]=p[j];
                    p[j]=aux;
                    auxInt=p[j-1].cod;
                    p[j-1].cod=p[j].cod;
                    p[j].cod=auxInt;
                }else if(p[j-1].validade.ano==p[j].validade.ano){
                    if(p[j-1].validade.mes>p[j].validade.mes){
                            aux=p[j-1];
                            p[j-1]=p[j];
                            p[j]=aux;
                            auxInt=p[j-1].cod;
                            p[j-1].cod=p[j].cod;
                            p[j].cod=auxInt;
                    }else if(p[j-1].validade.mes==p[j].validade.mes){
                        if(p[j-1].preco<p[j].preco){
                            aux=p[j-1];
                            p[j-1]=p[j];
                            p[j]=aux;
                            auxInt=p[j-1].cod;
                            p[j-1].cod=p[j].cod;
                            p[j].cod=auxInt;
                        }else if(p[j-1].validade.mes==p[j].validade.mes){

                        }
                    }
                }
            }
        }
    }
    printf("\nOrdenado!\n");
}
int main(){
    int funcao=-1;
    TPROD p[100];
    int quantProd=0;
    while(funcao!=0){
        printf("\nSelecione a opcao desejada:\n");
        printf("1  -  Adicionar um produto\n");
        printf("2  -  Exibir todos os produtos\n");
        printf("3  -  Exibir o produto mais caro e o mais barato.\n");
        printf("4  -  Excluir um produto\n");
        printf("5  -  Ordenar produtos\n");
        printf("0  -  Sair\n");
        scanf("%d",&funcao);
        printf("\n");
        if(funcao==0){
            printf("Saindo.\n");
            break;
        }else if(funcao==1){
            p[quantProd]=adicionar(quantProd);
            quantProd++;
        }else if(funcao==2){
            exibirTodos(p,quantProd);
        }else if(funcao==3){
            caro(p,quantProd);
        }else if(funcao==4){
            int auxEXC;
            auxEXC=excluir(p,quantProd);
            quantProd=auxEXC;
        }else if(funcao==5){
            ordenar(p,quantProd);
        }else{
            printf("Comando desconhecido\n");
        }

    }
}

