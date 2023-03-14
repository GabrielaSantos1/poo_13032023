#include <iostream>
#include <cmath>
// Inclui a biblioteca e a de matemática
using namespace std;

int main() {
    //                         Bhaskara
    
    
    
    // cria as variáveis float separando por vírgula
    float a, b, c, x1, x2, delta;
    
    // Printa pra o usuário digitar o valor de a e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite o valor de 'a' e dê ENTER: ";
    // ajusta o valor de a para o valor digitado pelo user
    cin >> a;
    
    
    // Printa pra o usuário digitar o valor de b e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite o valor de 'b' e dê ENTER: ";
    // ajusta o valor de b para o valor digitado pelo user
    cin >> b;
    
    
    // Printa pra o usuário digitar o valor de c e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    cout << "Digite o valor de 'c' e dê ENTER: ";
    // ajusta o valor de c para o valor digitado pelo user
    cin >> c;
    
    //delta = b ao quadrado - 4 vezes o valor de a vezes o valor de c
    delta =pow(b, 2) - 4 * a * c;
    
    //se o valor der positivo ele calcula o x1 -b + a raiz de delta dividido por 2 * o valor de a
    if (delta >=0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        // ele calcula x2 - b - a raiz de delta dividido por 2 vezes o valor de a
        x2 = (-b - sqrt(delta)) / (2 * a);
    
    
    
    // printa para o user o valor de x1 e depois o x2 separando o texto com << e finaliza a linha de interação com endl
    cout << "Os valores de x1 e x2 são respectivamente: " << x1 << " e " << x2 << endl;
    
    } 
    // se o valor de delta for negativo a conta é impossível portanto é explicado isso com o cout 
    else {
    
    cout << "A equação não tem raízes reais." << endl;
}
    
    return 0;
}