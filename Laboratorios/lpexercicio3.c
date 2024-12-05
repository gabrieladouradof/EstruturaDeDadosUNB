
int ChecaParenteses(char *expr, int count){

    // caso base: condicao padrao para a recursividade, pega o final da string
    if (*expr == '\0') {
        return count == 0 ? 0 : -1; // retorna 0 se balanceado, -1 se ainda tem parênteses abertos
    }

    // condicao que incrementa o contador se encontrar '('
    if (*expr == '(') {
        return ChecaParenteses(expr + 1, count + 1);
    }

    // condicao que decrementa o contador se encontrar ')'
    if (*expr == ')') {
        //essa serve se o count ja for 0, mas tiver )
        //retorna 1
        if (count == 0) {
            return 1;
        }
        return ChecaParenteses(expr + 1, count - 1);
    }

    //  VAI PRO PROXIMO caractere se nao abranger as outras condicionais que trabalham com os parenteses
    return ChecaParenteses(expr + 1, count);
}

    
int main() {
    char *expression1 = "((1 + 2) * (3 + 4))";  
    char *expression2 = "((1 + 2) * (3 + 4)";   
    char *expression3 = "((1 + 2)) * (3 + 4))"; 
    printf("Resultado para expressão 1: %d\n", ChecaParenteses(expression1, 0)); // Deve retornar 0
    printf("Resultado para expressão 2: %d\n", ChecaParenteses(expression2, 0)); // Deve retornar -1
    printf("Resultado para expressão 3: %d\n", ChecaParenteses(expression3, 0)); // Deve retornar 1
    return 0;
}