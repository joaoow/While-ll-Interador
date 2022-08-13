#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
   int x = 0;
   int valDigitado = 0;

   // Pedimos a usuários quantas vezes ele quer executar esta ação
   // Essa quantidade é guardada dentro da variavel valDigitado
   printf("Informe a quantidade de X que vc deseja repetir a instrucao:\n ");
   scanf("%i", &valDigitado);

   //Enquanto x for menor que o valor digitado
   //Execute o que está dentro das chaves,dentro da instrução
   // E imprimir o valor da multi de x por 10, o x vai entrar como zero
   // E vai fazer 0 * 10 depois ele vai passar e ser 1 entao 1 * 10 é 10
   while(x < valDigitado){
    printf("%i\n", x * 10);
    x = x + 1;
   }


    return 0;
}
