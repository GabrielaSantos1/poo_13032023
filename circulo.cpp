#include <iostream>
// Inclui a biblioteca
using namespace std;

int main() {
    //                      Cálculo Circulo
    
    
    float raio, area;
    // cria a variável de raio e de área separando por vírgula
    
    const float PI = 3.14159;
    // cria a consta o valor da variável do PI para seu valor
    
    
    cout << "Digite o raio do Círculo e dê ENTER: ";
    // Printa pra o usuário digitar e dar enter pra enviar com espaço antes do " para ter onde o user digitar
    
    cin >> raio;
    // ajusta o valor de raio para o valor digitado pelo user
    
    area = PI * raio * raio;
    // coloca q a área é PI vezes raio²
    
    cout << "A Área do Círculo é: " << area << endl;
    // c-out printa para o user o texto mais o valor da área e finaliza a interação com o user
    
    
    return 0;
}