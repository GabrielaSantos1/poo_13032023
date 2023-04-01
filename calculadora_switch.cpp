#include <iostream>
using namespace std;

int main() {
    
    //cria variavel tipo char
    char op;
    //cria 2 variaveis tipo float
    float num1, num2;
    
    //mostra para o user o texto
    cout << "ENTRE COM O OPERADOR: +, -, *, / ";
    //coloca a resposta do user como valor da variavel op
    cin >> op;
    
    //mostra para o user o texto
    cout << "ENTRE COM DOIS VALORES: ";
    //coloca a resposta do user como valor das variaveis num1 e num2
    cin >> num1 >> num2;

    //casos da variavel op
    switch(op) {
            
        //caso o user tenha colocado +
        case '+':
        //mostra para o user num1 mais num2 mais o resultado
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        //termina o caso
        break;
        
        //caso o user tenha colocado -
        case '-':
        //mostra para o user num1 menos num2 mais o resultado
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        //termina o caso
        break;
        
        //caso o user tenha colocado *
        case '*':
        //mostra para o user num1 vezes num2 mais o resultado
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        //termina o caso
        break;
        
        //caso o user tenha colocado /
        case '/':
        //mostra para o user num1 dividido por num2 mais o resultado
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        //termina o caso
        break;
        
        //caso diferente do esperado
        default:
            //mostra pro user
            cout << "OPERADOR ERRADO, POR FAVOR INSIRA O OPERADOR CORRETO";
            //termina o caso
            break;
    }
    return 0;
}
