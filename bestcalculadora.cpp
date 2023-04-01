#include <iostream>
using namespace std;

float a, b;

float Soma() {
    float Resultado;
    Resultado = a + b;
    return Resultado;}
    
float Subt() {
    float Resultado;
    Resultado = a - b;
    return Resultado;}
    
float Mult() {
    float Resultado;
    Resultado = a * b;
    return Resultado;}
    
float Divi() {
    float Resultado;
    Resultado = a / b;
    return Resultado;}
    
    int main(){

    cout << "Digite dois números positivos: " << endl;
    cin >> a >> b;
    
    cout << "Soma = " << Soma() << endl;
    cout << "Subtração = " <<  Subt() << endl;
    cout << "Multiplicação = " <<  Mult() << endl;
    cout << "Divisão = " <<  Divi() << endl;
    

}
