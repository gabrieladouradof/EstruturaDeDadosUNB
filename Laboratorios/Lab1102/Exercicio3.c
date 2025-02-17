//Estrutura dos registros do dataset de pessoas
typedef struct {
    char name[100];
    int age;
} TPessoa;

// Estrutura do nó da árvore ABP:
//Esta ABP tem valores menores à esquerda da raíz e valores maiores à direita da raiz.  
typedef struct TABPNo {
int age;
int index; // Posição no dataset de pessoas
struct TABPNo *left;
struct TABPNo *right;
} TABPNo;

int main() {
TABPNo* No, root;
int Idade, QtNosDesalocados;
char FonteDados;
 //Definição de qual fonte de dados será testada. Veja nos exemplos de entrada de dados:
scanf("%c", &FonteDados); 
//Aloca vários nós contendo idade e posição do dataset (veja tipo TABPNo) à árvore ABP :
root = Fill(FonteDados); 
scanf("%d", &Idade);  //Idade usada no teste de busca. Veja nos exemplos de entrada de dados.
PrintRelatorio(root); //Imprime um relatório por ordem de Idade. Veja nos exemplos de saída.
No = Busca(root, Idade); //Função de busca de uma idade na ABP
QtNosDesalocados = DesalocaABP(root); //Função para desalocar ABP e retornar a qt de nós desalocados
return 0;
}