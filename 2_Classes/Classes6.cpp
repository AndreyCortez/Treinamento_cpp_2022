#include <iostream>

// Podemos dimiuir ainda mais criando uma função para imprimir os dados do cachorro

class cachorro
{
public:
    // Declaração dos membros de uma classe
    int idade;
    char* nome;

    // Declaração do inicializador da classe
    cachorro(int _idade, char* _nome)
    {
        idade = _idade;
        nome = _nome;
    }

    // Declaração dos métodos da classe
    void imprimir_dados()
    {
        std::cout << "nome: " <<  nome << std::endl;
        std::cout << "  idade: " <<  idade << std::endl << std::endl;
    }

};

// Utilização dos inicializadores para setar as condições iniciais dos cachorros
cachorro cachorro1(2, "Toby");
cachorro cachorro2(5, "Toto");
cachorro cachorro3(1, "Tony");
cachorro cachorro4(5, "Todd");
cachorro cachorro5(7, "Tora");

int main()
{
    // Utilização dos métodos de uma classe
    cachorro1.imprimir_dados();
    cachorro2.imprimir_dados();
    cachorro3.imprimir_dados();
    cachorro4.imprimir_dados();
    cachorro5.imprimir_dados();

    // A classe pega tudo que fizemos nos itens passados e os engloba em uma só sintaxe
    // Mesmo assim o número de linhas de código aumentou em relação ao exemplo anterior 
    // E até mesmo em relação ao exemplo 3
    // Sendo assim qual a vantagem de ter classes no código?
}