#include <iostream>

// Imagine agora que a situação é outra
// Queremos categorizar não apenas cachorrinhos, mas elefantes também
// nos cachorrod além da idade e do nome, queremos sua comida preferida
// nos elefantes além da idade e do nome, queremos o tamanho da tromba em metros

// podemos fazer

class cachorro
{
public:
    int idade;
    char* nome;
    char* comida_preferida;

    cachorro(int _idade, char* _nome, char* _comida_preferida)
    {
        idade = _idade;
        nome = _nome;
        comida_preferida = _comida_preferida;
    }

    void imprimir_dados()
    {
        std::cout << "nome: " <<  nome << std::endl;
        std::cout << "  idade: " <<  idade << std::endl;
        std::cout << "  comida_preferida: " <<  comida_preferida << std::endl << std::endl;
    }

};

class elefante
{
public:
    int idade;
    char* nome;
    float tamanho_da_tromba;

    elefante(int _idade, char* _nome, float _tamanho_da_tromba)
    {
        idade = _idade;
        nome = _nome;
        tamanho_da_tromba = _tamanho_da_tromba;
    }

    void imprimir_dados()
    {
        std::cout << "nome: " <<  nome << std::endl;
        std::cout << "  idade: " <<  idade << std::endl;
        std::cout << "  tamanho_da_tromba: " <<  tamanho_da_tromba << std::endl << std::endl;
    }

};


cachorro cachorro1(2, "Toby", "Terra");
elefante elefante1(5, "Dumbo", 1.34);

int main()
{
    cachorro1.imprimir_dados();
    elefante1.imprimir_dados();

    // Percebe-se que muito do código entre essas duas classes é compartilhado
    // E se houvesse uma maneira de reaproveitar o código de um no outro?
}