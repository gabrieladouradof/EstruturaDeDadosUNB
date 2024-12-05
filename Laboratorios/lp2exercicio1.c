

// #include <stdio.h>
// #include <string.h>

// void IntercalaVetores(char *V1, char *V2, char *V3) {

// }

// int main() {
//     char V1 = "abc" , V2 = "ABCDE" ;  
//     char V3[sizeof(V1) + sizeof(V2) - 1]; 

//     IntercalaVetores(V1, V2, V3);  
//     printf("Intercalacao: %s\n", V3); 
//     return 0;
// }

#include <stdio.h>
#include <string.h>

//RECURSIVA DESSA VEZ, da outra nao chamei 

void IntercalaVetores(char *V1, char *V2, char *V3) {
    
    //caso base antes
    
    if (*V1 == '\0' && *V2 == '\0')
    {
        *V3 = '\0'; //terminador
        //precisa retornar
        return;
    }        
    
    
    if (*V1 != '\0')
        {
            //avanca o ponteiro para caractere e posicao
            *V3 = *V1;
            V1++; V3++;
        }
        
    if (*V2 != '\0')
        {
            //mesma coisa
            *V3 = *V2;
            V2++; V3++;
    }
    IntercalaVetores(V1, V2, V3);
}


int main() {
    char V1[] = "ABCDE";
    char V2[] = "123";
    char V3[sizeof(V1) + sizeof(V2) - 1];  // Aloca espaço para V3

    IntercalaVetores(V1, V2, V3);
    printf("Intercalacao: %s\n", V3);

    return 0;
}

