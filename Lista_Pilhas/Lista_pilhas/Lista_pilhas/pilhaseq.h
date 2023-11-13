#define MAX 10

// Definição da estrutura pilha sequencial
typedef struct pilha {
  int elementos[MAX]; // vetor que vai armazenar os elementos da pilha
  int topo;           // variável usada para controlar o topo da pilha
} Pilha;

//************** Interface de uso do TAD Pilha Sequencial **************//

/* Criar uma pilha vazia */
void criarPilha(Pilha *p);

/* Verificar se a pilha está vazia ou não */
int pilhaVazia(Pilha *p);

/* Verificar se a pilha está cheia */
int pilhaCheia(Pilha *p);

/* Consultar o elemento que está topo da pilha (sem retirá-lo) */
/* O topo deve ser retornado na variavel dado*/
int topo(Pilha *p, int *dado);

int inverterpilha(Pilha *p);

/* Empilhar um elemento */
int empilhar(Pilha *p, int elemento);

/* Desempilhar um elemento */
/* O elemento desempilhado deve ser retornado
na variavel dado*/
int desempilhar(Pilha *p);

int esvaziar(Pilha *p);

void desempilhanvezes(Pilha *p, int n);

int tamanho(Pilha *p);

int pilhasiguais(Pilha *p1, Pilha *p2);

/* Exibir todos os elementos da pilha */
void imprimirpilha(Pilha *p);
