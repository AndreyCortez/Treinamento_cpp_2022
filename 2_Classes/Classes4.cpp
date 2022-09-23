#include <iostream>

// Podemos remediar um pouco do problema do item anterior usando structs

typedef struct {
    int idade;
    char nome[5];
} cachorro;

cachorro cachorro1 = {2, "Toby"};
cachorro cachorro2 = {5, "Toto"};
cachorro cachorro3 = {1, "Tony"};
cachorro cachorro4 = {5, "Todd"};
cachorro cachorro5 = {7, "Tora"};

int main()
{
    std::cout << "nome: " <<  cachorro1.nome << std::endl;
    std::cout << "  idade: " <<  cachorro1.idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro2.nome << std::endl;
    std::cout << "  idade: " <<  cachorro2.idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro3.nome << std::endl;
    std::cout << "  idade: " <<  cachorro3.idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro4.nome << std::endl;
    std::cout << "  idade: " <<  cachorro5.idade << std::endl << std::endl;

    std::cout << "nome: " <<  cachorro5.nome << std::endl;
    std::cout << "  idade: " <<  cachorro5.idade << std::endl << std::endl;

    // O código diminuiu de tamanho, mas ainda está relativamente grande
}