#include <stdio.h>
#include <cs50.h> //contém algumas novidades de autoria dos programadores cs50(https://manual.cs50.io/#cs50.h;

int main (void)
{

//"string awnser" Declara a variável.
//"string" é o tipo de dado (fornecido pela biblioteca) "texto" que a variável vai receber;
//"answer" é, neste caso, o nome da variável (convencionado que seja em letra minúscula, sem espaço);
//em C "nu e cru" não existe string. No CS50, string é como um apelido para "char".
    string awnser = get_string("como você se chama? ");
    printf("olá, %s\n",awnser); //"%s" é um "place holder" pra string; a segunda virgula (ou mais) é um delimitador importante pra linguagem C;
    
     
}

/* Ajudinha da llm:

1️⃣ Sempre que criar um novo arquivo .c usando funções da biblioteca CS50 (ex: get_string):
    - O VSCode F5 (automático) pode não funcionar.
    - Isso acontece porque precisamos linkar explicitamente à biblioteca CS50.

2️⃣ Para compilar manualmente no terminal embutido:
    gcc nome_do_arquivo.c -lcs50 -o nome_do_arquivo (gcc linguagemc.c -lcs50 -o linguagemc)
    - "-lcs50" conecta a biblioteca CS50.
    - "-o nome_do_arquivo" define o nome do executável.

3️⃣ Para executar o programa:
    ./nome_do_arquivo
    - Certifique-se de estar na mesma pasta do executável ou use o caminho completo.

4️⃣ Sempre cheque para confirmar que o executável foi criado com:
    ls.

    - Uma vez compilado com sucesso, F5 ou tasks do VSCode podem funcionar se o build estiver configurado com "-lcs50".
*/

//compilar: gcc intro2_linguagemc.c -lcs50 -o intro2_linguagemc