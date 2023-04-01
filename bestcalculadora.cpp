#include <iostream>
using namespace std;

//cria duas variaveis do tipo float
float a, b;

//dentro da função float soma
float Soma() {
    //cria uma variavel tipo float
    float Resultado;
    //coloca que o valor de resultado é a soma das variaveis a e b
    Resultado = a + b;
    return Resultado;}

//dentro da função float subt
float Subt() {
    //cria uma variavel tipo float
    float Resultado;
    //coloca que o valor de resultado é a subtração das variaveis a e b
    Resultado = a - b;
    return Resultado;}

//dentro da função float mult
float Mult() {
    //cria uma variavel tipo float
    float Resultado;
    //coloca que o valor de resultado é a multiplicação das variaveis a e b
    Resultado = a * b;
    return Resultado;}

//dentro da função float divi
float Divi() {
    //cria uma variavel tipo float
    float Resultado;
    //coloca que o valor de resultado é a divisão das variaveis a e b
    Resultado = a / b;
    return Resultado;}
    
    //cria a função pricipal
    int main(){

    //mostra pro user 
    cout << "Digite dois números positivos: " << endl;
    //coloca a resposta do user nos valores das variáveis a e b
    cin >> a >> b;
    
    //mostra pro user o texto mais o valor de cada função anteriormente calculada
    cout << "Soma = " << Soma() << endl;
    cout << "Subtração = " <<  Subt() << endl;
    cout << "Multiplicação = " <<  Mult() << endl;
    cout << "Divisão = " <<  Divi() << endl;
    

}
