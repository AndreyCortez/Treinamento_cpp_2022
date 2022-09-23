#include <iostream>

// Agora imagine que queremos fazer o mesmo com dois cachorros
// Podemos facilmente fazer isso com :

int cachorro1_idade = 2;
char cachorro1_nome[5] = "Toby";

int cachorro2_idade = 5;
char cachorro2_nome[5] = "Toto";

int main()
{
    std::cout << "nome: " <<  cachorro1_nome << std::endl;
    std::cout << "  idade: " <<  cachorro1_idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro2_nome << std::endl;
    std::cout << "  idade: " <<  cachorro2_idade << std::endl << std::endl;
}