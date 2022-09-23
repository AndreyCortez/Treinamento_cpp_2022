#include <iostream>

// Outro conceito interessante de classes são as sobrecargas de operador
// Imagine que queremos criar uma classe de vetores

class vetor 
{
public:
    float x;
    float y;

    vetor(float _x, float _y)
    {
        x = _x;
        y = _y;
    }
};

// agora queremos criar funções para a soma e multiplicação por escalar

vetor soma (vetor vetor1, vetor vetor2)
{
    vetor resultado(0,0);
    resultado.x = vetor1.x + vetor2.x;
    resultado.y = vetor1.y + vetor2.y;

    return resultado;
}

vetor multiplicacao (vetor vetor1, float escalar)
{
    vetor resultado(0,0);
    resultado.x = vetor1.x * escalar;
    resultado.y = vetor1.y * escalar;

    return resultado;
}

int main()
{
    vetor vetor1(1, 2);
    vetor vetor2(3, 2);

    std::cout << "(" << soma(vetor1, vetor2).x << "," << soma(vetor1, vetor2).y << ")" << std::endl;
    std::cout << "(" << multiplicacao(vetor1, 4).x << "," << multiplicacao(vetor1, 4).y << ")" << std::endl;
    
    // Código bom, mas poderia ficar mais simples com a sobrecarga de operadores
}