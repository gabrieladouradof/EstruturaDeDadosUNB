
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node *Esq;
    struct node *Dir;
} TABP;

TABP* inserir(TABP *raiz, int num)
{
   if(raiz == NULL)
   {
    //__T1__  comando 
   } 
   else if (num < raiz->Num)
   {
      raiz -> Esq = inserir(raiz-> Esq, num);
   }
   else
   {
      raiz ->Dir=inserir(raiz-> Dir, num);
   }
    //__T2__ comando
}
 TABP* buscar (TABP *raiz, int valor)
 {
    if (raiz == NULL || raiz->Num==valor)
    {
        return raiz;
    }
    else if (valor < raiz ->Num)
    {
        //T3 COMANDO
    }}
    void liberarArvore(TABP *raiz)
    {
        if(raiz != NULL)
        {
            //T5
            //T6
            free(raiz);
        }
    }
TABP* carregarDados(char *nomeArquivo)
    {
        TABP *raiz = NULL;
        int num;
        FILE *file = fopen(nomeArquivo){
            if (file == NULL)
            {
                printf("Erro ao abrir o arquivo!\n");
                return NULL;
            }
            while(fscanf(file, "%d", &num) != EOF)
            //T7
            fclose(file);
            return raiz;
        }
        void imprimirInOrder(TABP *raiz)
        {
            if(raiz != NULL)
            {
                //T8
                printf("%d", raiz->Num);
                //T9
            }
        }
        void exibirMenu()
        {
            printf("\n -- Menu de Opcoes ---\n");
            printf("1. Carregar Dados\n");
            printf("2. Buscar\n");
            printf("3. Imprimir\n");
            printf("4. Encerrar \n");

        }

        int main ()
        {
            TABP *raiz = NULL;
            int opcao, valor;
            char nomeArquivo[100];

            do {
                exibirMenu();
                printf("Escolha uma opcao: ");
                scanf("%d", &opcao);
                switch (opcao)
                {
                    case 1:
                        printf("Digite o nome do arquivo para carregar os números:");
                        scanf("%s", &valor);
                        raiz = carregarDados(nomeArquivo); break;
                    case 2:
                        printf("Digite o valor a ser buscado: ");
                        scanf("%d", &valor);
                        TABP *resultado = buscar(raiz, valor);
                        if(resultado != NULL)
                        {
                            printf("Valor encontrado: %d\n", resultado->Num);
                        } else printf("Valor nao encontrado.\n");

                        break;

                    case 3: 
                        imprimirInOrder(raiz);
                    case 4:
                        liberarArvore(raiz);
                    default: 
                    printf("Opcao invalida!\n");
                }
            }while (opcao != 4);
            return 0;

                }
    }
 