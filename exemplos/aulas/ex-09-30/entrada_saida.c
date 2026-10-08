#include <stdio.h>

int main(void) {

  int idade;
  char nome[50];

  // Solicitando ao usuário que insira sua idade
  printf("Digite sua idade: ");
  // Lendo um inteiro (idade) do usuário e armazenando na variável 'idade'
  // O '&' é usado para passar o endereço da variável 'idade' para a função scanf
  // O especificador de formato %d é usado para ler um valor inteiro
  scanf("%d", &idade);

  // Solicitando ao usuário que insira seu nome
  printf("Digite seu nome: ");
  // Lendo uma string do usuário e armazenando no vetor 'nome'
  // O especificador de formato %s é usado para ler uma string (sequência de caracteres)
  // Aqui não usamos o '&' porque 'nome' já quarda o endereço inicial do vetor 'nome'
  scanf("%s", nome);

  // Imprimindo a idade e o nome do usuário usando printf
  // O '/n' no final da string indica uma nova linha
  printf("Idade: %d\n", idade);
  printf("Nome: %s\n", nome);

  // Ou, podemos imprimir tudo em uma única linha
  printf("Idade: %d, Nome: %s\n", idade, nome);

  return 0;
}