#include <iostream>
#include <math.h>
// Inclui a biblioteca
using namespace std;

int main() {
    //                   Teorema de Pitágoras
    
    
    
    // cria as variáveis float separando por vírgula
    float c2, a, b, c;
    
    // Printa pra o usuário digitar o valor de b e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite a base do seu triângulo retângulo e dê ENTER: ";
    // ajusta o valor da base para o valor digitado pelo user
    cin >> b;
    
    
    // Printa pra o usuário digitar o valor de a e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite a altura do seu triângulo retângulo e dê ENTER: ";
    // ajusta o valor da altura para o valor digitado pelo user
    cin >> a;
    
    
    // o valor de c é a² + b²
    c = (a * a) + (b * b);
    //codigo da biblioteca adicionada para raiz
    c = sqrt(c);
    
    // printa para o user que a hipotenusa do retângulo com o valor de c e finaliza a linha de interação.
    cout << "A hipotenusa do seu Triângulo Retângulo é " << c << endl;
    
    return 0;
}