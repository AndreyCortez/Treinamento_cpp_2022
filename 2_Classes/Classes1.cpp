#include <iostream>

// Imagine que temos um cachorro e queremos imprimir sua idade e seu nome
// Podemos facilmente fazer isso com :

int cachorro_idade = 2;
char cachorro_nome[5] = "Toby";

int main()
{
    std::cout << "nome: " <<  cachorro_nome << std::endl;
    std::cout << "  idade: " <<  cachorro_idade << std::endl << std::endl;
}