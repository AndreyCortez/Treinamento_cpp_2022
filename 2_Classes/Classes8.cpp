#include <iostream>

// Para isso podemos usar algo que chamamos de herança

// Primeiro declaramos uma classe mestre com todos os membros em comum
class animal
{
public:
    int idade;
    char* nome;

    animal(int _idade, char* _nome)
    {
        idade = _idade;
        nome = _nome;
    }

    void imprimir_dados_base()
    {
        std::cout << "nome: " <<  nome << std::endl;
        std::cout << "  idade: " <<  idade << std::endl;
    }

};


// Depois declaramos classes descendentes com membros próorios
class elefante : public animal
{
public:
    float tamanho_da_tromba;

    elefante(int _idade, char* _nome, float _tamanho_da_tromba)
    : animal{_idade, _nome}
    {
        tamanho_da_tromba = _tamanho_da_tromba;
    }

    void imprimir_dados()
    {
        imprimir_dados_base();
        std::cout << "  tamanho_da_tromba: " <<  tamanho_da_tromba << std::endl << std::endl;
    }

};


// Depois declaramos classes descendentes com membros próorios
class cachorro : public animal
{
public:
    char* comida_preferida;

    cachorro(int _idade, char* _nome, char* _comida_preferida)
    : animal{_idade, _nome}
    {
        comida_preferida = _comida_preferida;
    }

    void imprimir_dados()
    {
        imprimir_dados_base();
        std::cout << "  comida_preferida: " <<  comida_preferida << std::endl << std::endl;
    }

};

cachorro cachorro1(2, "Toby", "Terra");
elefante elefante1(5, "Dumbo", 1.34);

int main()
{
    cachorro1.imprimir_dados();
    elefante1.imprimir_dados();

    // Esse exemplo não mostra muita melhora em relação ao outro porque herança é um conceito que só 
    // começa a valer a pena em bases de código muito grandes,
    // mas mesmo assim é importante saber
}