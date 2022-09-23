#include <iostream>

// Agora imagine que queremos fazer o mesmo com cinco cachorros
// Podemos facilmente fazer isso com :

int cachorro1_idade = 2;
char cachorro1_nome[5] = "Toby";

int cachorro2_idade = 5;
char cachorro2_nome[5] = "Toto";

int cachorro3_idade = 1;
char cachorro3_nome[5] = "Tony";

int cachorro4_idade = 5;
char cachorro4_nome[5] = "Todd";

int cachorro5_idade = 7;
char cachorro5_nome[5] = "Tora";

int main()
{
    std::cout << "nome: " <<  cachorro1_nome << std::endl;
    std::cout << "  idade: " <<  cachorro1_idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro2_nome << std::endl;
    std::cout << "  idade: " <<  cachorro2_idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro3_nome << std::endl;
    std::cout << "  idade: " <<  cachorro3_idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro4_nome << std::endl;
    std::cout << "  idade: " <<  cachorro5_idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro5_nome << std::endl;
    std::cout << "  idade: " <<  cachorro5_idade << std::endl << std::endl;

    // O código cresce rapidamente conforme o número de cachorros aumenta
}