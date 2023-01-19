#include <stdio.h>

int soma()
{
  int n1, n2, resultado;
  printf("Digite um número: ");
  scanf("%d", &n1);
  printf("Digite outro número: ");
  scanf("%d", &n2);
  resultado = n1 + n2;
  printf("A soma entre %d e %d é %d", n1, n2, resultado);
  return 0; 
}

int ola()
{
  char nome[20];
  printf("Digite seu nome: ");
  fgets(nome, 20, stdin);
  /* fgets(string, tamanho, entrada) */
  printf("Ola, %s", nome);
  return 0;
}

int fibonacci()
{
  int anterior, atual, prox;
  anterior = 0;
  atual = 1;

  int n, proximo, contador;
  printf("Digite quantos numeros da sequencia devem ser impressos: ");
  scanf("%d", &n);

  printf(anterior);
  printf(atual);

  for(contador = 0; contador < 5; contador++)
    {
      proximo = anterior + atual;
      anterior = atual;
      atual = proximo;

      printf(proximo);
    }
  
  return 0;
}

int main() 
{
  fibonacci();
  return 0;
}

/* 
%d -> &int
%f -> &float
%c -> &char
%s -> &string
%% -> %
stdin -> dispositivo de entrada padrão (teclado)
*/