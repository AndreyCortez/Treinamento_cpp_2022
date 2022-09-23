#include <iostream>

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

    vetor operator + (vetor vetor1)
    {
        vetor resultado(0,0);
        resultado.x = x + vetor1.x;
        resultado.y = y + vetor1.y;

        return resultado;
    }

    vetor operator * (float escalar)
    {
        vetor resultado(0,0);
        resultado.x = x * escalar;
        resultado.y = y * escalar;

        return resultado;
    }

    friend std::ostream &operator<<( std::ostream &output, const vetor &v ) { 
        output << "(" << v.x << ","  << v.y << ")";
        return output;            
    }
};



int main()
{
    vetor vetor1(1, 2);
    vetor vetor2(3, 2);

    std::cout << vetor1 + vetor2 << std::endl;
    std::cout << vetor1 * 2 << std::endl;
}