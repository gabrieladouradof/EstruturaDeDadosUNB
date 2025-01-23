// Tipo pilha
typedef struct no{
char caracter;
struct no *proximo;
} No



No *Desempilha(No *pilha) {//funçao q pedia para colocar na questao
    if (pilha == NULL) {
        return NULL;
    }
    
    No *topo = pilha;
    pilha = pilha->proximo;
    free(topo);
    
    return pilha;
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