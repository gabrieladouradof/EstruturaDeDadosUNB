// Função Desempilha
// Assinatura: 
No *Desempilha(No *pilha);
//Retorno
// Topo da pilha

// Função Empilha
// Assinatura: 
No *Empilha(No *pilha, char x);
//Retorno
// Topo da pilha

int identifica_formacao(char *exp) {
    No *pilha = NULL;
    for (int i = 0; exp[i] != '\0'; i++) {
        char simb = exp[i];
        if (simb == '(' || simb == '{' || simb == '[') {
            pilha = Empilha(pilha, simb);
        } else if (simb == ')' || simb == '}' || simb == ']') {
            if (pilha == NULL) {
                return 0; 
            }
            char topo = pilha->caracter;
            if ((simb == ')' && topo != '(') ||
                (simb == '}' && topo != '{') ||
                (simb == ']' && topo != '[')) {
                return 0; 
            }
            pilha = Desempilha(pilha);
        }
    }
    return pilha == NULL ? 1 : 0; 
}