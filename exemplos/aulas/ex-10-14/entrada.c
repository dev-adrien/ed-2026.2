#include <stdio.h>
#include <string.h>

int main(void) {

  int numeros[] = {5, 3, 10, 4};

  // Inicialização de strings
  // A string é um vetor de caracteres terminado com '\0'
  char nome[] = {'L', 'u', 'c', 'a', 's', '\0'};

  // Inicialização de strings com aspas duplas
  // O compilador adiciona o '\0' automaticamente
  char sobrenome[] = "Mendes";

  // Para declarar um vetor sem inicializá-lo, é necessário informar o seu tamanho
  char cidade[50];

  printf("Digite o nome da cidade: ");

  // fgets lê uma linha de entrada do stdin e armazena na variável informada
  // O tamanho do vetor é informado para evitar estouro de memória
  fgets(cidade, sizeof(cidade), stdin);

  // A função strcspn é utilizada para encontrar o índice de um caractere específico em uma string
  // No caso, estamos procurando o índice do caractere '\n' na string cidade
  // Se o caractere '\n' for encontrado, ele será substituído por '\0'
  // Essa função é disponibilizada na biblioteca string.h
  cidade[strcspn(cidade, "\n")] = '\0';

  printf("Nome: %s\n", nome);
  printf("Sobrenome: %s\n", sobrenome);
  printf("Cidade: %s\n", cidade);

  int idade;
  printf("Digite a idade: ");
  scanf("%d", &idade);

  // Limpa o buffer do teclado para evitar problemas com a leitura de strings 
  // após a leitura de números.
  // O scanf não consome o caractere de nova linha '\n' que é gerado ao pressionar Enter, 
  // então precisamos limpar o buffer.
  getchar(); 

  // Em algumas situações, é necessário limpar todo o buffer do teclado para evitar 
  // problemas com a leitura de strings após a leitura de números.
  // Por exemplo, se o usuário digitar '25a' para um inteiro, 
  // o scanf lerá apenas o '25' e deixará o 'a' no buffer, além do '\n'.
  // O código abaixo consome todos os caracteres restantes no buffer até encontrar o '\n',
  // descartando-os.
  /*
  * while (getchar() != '\n');
  */

  char estado[3];

  printf("Digite a sigla do estado: ");

  // Sem limpeza do buffer, a função fgets leria o '\n' deixado pelo scanf, 
  // resultando em uma string vazia.
  fgets(estado, sizeof(estado), stdin);
  estado[strcspn(estado, "\n")] = '\0';

  printf("Idade: %d\n", idade);
  printf("Estado: %s\n", estado);

  return 0;
}
