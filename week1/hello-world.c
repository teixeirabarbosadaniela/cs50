//cabeçalho que torna disponível/adiciona funções da biblioteca;
//biblioteca é um conjunto de códigos que outro programador criou e podemos utilizar;
//o pré-processador "#include" copia e cola o conteúdo do header file (.h) naquele ponto do código antes da compilação;
//".h" é a extensão que contém as declarações (função, variáveis, definições de tipo, etc);

#include <stdio.h> //"stdio"(standard input/output) chama a biblioteca padrão da linguagem C; 
// versão mais amigável da Documentação tradicional C (https://manual.cs50.io/#stdio.h);


//"int" (inteiro) indica o tipo de valor que a função vai devolver;
//todo programa em C precisa retornar um número inteiro ao SO.
//"main" é a função principal, o ponto de entrada do programa. Quando executar o arquivo compilado, o sistema vai procurar exatamente por main;
//"void" indica que a função não recebe argumentos, ou seja, o programa não espera informações vindas da linha de comando;
int main(void) 
{
    printf ("hello, world\n"); //"\n" significa newline, só pra próxima linha não sair grudada;

};

//Ctrl + F5 "run"