// Tipo pilha
typedef struct no{
char caracter;
struct no *proximo;
} No


No *Empilha(No *pilha, char x){

    No *novoNo = (No *)malloc(sizeof(No));

    if(novoNo == NULL)
    {       
        return pilha;
    }

    novoNo ->caracter = x;
    novoNo ->proximo = pilha;

    return novoNo;
}


// Função Main
int main(){
char exp[50];
int retorno;
scanf("%49[^\n]", exp);
retorno = identifica_formacao(exp);
if (retorno == 1)
printf("BALANCEADA\n");
else
printf("DESBALANCEADA\n");
return 0;
}