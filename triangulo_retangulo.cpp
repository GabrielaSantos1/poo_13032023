#include <iostream>
// Inclui a biblioteca
using namespace std;

int main() {
    //                   Triângulo Retângulo
    
    
    
    // cria as variáveis float separando por vírgula
    float base, altura, area;
    
    // Printa pra o usuário digitar o valor da base e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite a base do seu triângulo retângulo e dê ENTER: ";
    // ajusta o valor da base para o valor digitado pelo user
    cin >> base;
    
    
    // Printa pra o usuário digitar o valor da altura e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite a altura do seu triângulo retângulo e dê ENTER: ";
    // ajusta o valor da altura para o valor digitado pelo user
    cin >> altura;
    
    
    // o valor da área do triangulo retangulo é igual ao valor dado pelo user da base * altura depois dividido por 2, está entre parenteses para que a multiplicação seja feita antes da divisão
    area = (base * altura) / 2;
    
    // printa para o user que a área do retângulo é o valor da área e finaliza a linha de interação.
    cout << "A área do seu Triângulo Retângulo é " << area << endl;
    
    return 0;
}