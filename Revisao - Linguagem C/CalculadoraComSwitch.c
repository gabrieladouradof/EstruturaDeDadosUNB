

#include <stdio.h>

int main()

{
    int valor1, valor2, resultado;
    char operador;
    
     printf("Digite a operação:\n");
    scanf("%c", &operador);
    
    printf("Digite o primeiro e o segundo valor:\n");
    scanf("%d %d", &valor1, &valor2);
    

    
    switch(operador)
    {
        case '+':
            resultado = valor1 + valor2;
            printf("Voce escolheu soma. Seu resultado é \n");
            printf("%d", resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("Voce escolheu subtração. Seu resultadO é:  \n");
            printf("%d", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("Voce escolheu multiplicacao. Seu resultadO é:  \n");
            printf("%d", resultado);
            break;
        case '/':
            resultado = valor1 / valor2;
            printf("Voce escolheu divisao. Seu resultadO é:  \n");
            printf("%d", resultado);
            break;
      
    }
    return 0;
} 
    