
// float MediaDig(int Numero, unsigned int Tamanho, float Soma){

// }

// int main(){
//     printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));
//     printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0));
//     printf("Media dos digitos: %.2f\n", MediaDig(0, 0, 0));
//     return 0;
// }
#include <stdio.h>

float MediaDig(int Numero, unsigned int Tamanho, float Soma) {
    if (Numero == 0) {
        // Caso base: Retorna a média ( serve para verificar se o tamanho é 0, para evitar divisão por zero)
        return Tamanho == 0 ? 0.0 : Soma / Tamanho;
    }

    //aqui ela se chama ja com os novos valores
    return MediaDig(Numero / 10, Tamanho + 1, Soma + (Numero % 10));
}

int main() {
    printf("Media dos digitos: %.2f\n", MediaDig(1234, 0, 0));
    printf("Media dos digitos: %.2f\n", MediaDig(12345, 0, 0));
   
    return 0;
}

#include <stdio.h>

float MediaDig(int Numero, unsigned int Tamanho, float Soma) {
    if (Numero == 0) {
        // Caso base: Retorna a média ( serve para verificar se o tamanho é 0, para evitar divisão por zero)
        return Tamanho == 0 ? 0.0 : Soma / Tamanho;
    }

    //aqui ela se chama ja com os novos valores
    return MediaDig(Numero / 10, Tamanho + 1, Soma + (Numero % 10));
}