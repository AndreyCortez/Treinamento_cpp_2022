#include <iostream>

// Podemos dimiuir ainda mais criando uma função para imprimir os dados do cachorro

typedef struct {
    int idade;
    char nome[5];
} cachorro;

void imprimir_dados(cachorro cachorro1)
{
    std::cout << "nome: " <<  cachorro1.nome << std::endl;
    std::cout << "  idade: " <<  cachorro1.idade << std::endl << std::endl;
}

cachorro cachorro1 = {2, "Toby"};
cachorro cachorro2 = {5, "Toto"};
cachorro cachorro3 = {1, "Tony"};
cachorro cachorro4 = {5, "Todd"};
cachorro cachorro5 = {7, "Tora"};

int main()
{
    imprimir_dados(cachorro1);
    imprimir_dados(cachorro2);
    imprimir_dados(cachorro3);
    imprimir_dados(cachorro4);
    imprimir_dados(cachorro5);

    // Neste exemplo conseguimos ver de maneira rudimentar o surgimento dos 
    // principios básicos de funcionamento de uma classe

    // Membros 
    // Métodos
    // Inicializadores
}