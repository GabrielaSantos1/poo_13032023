#include <iostream>
#include <string>
using namespace std;

int main() {
    // 4 variaveis do tipo double separadas por ,
    double n1, n2, n3, n4;
    
    //imprime pro user digitar a nota
    cout << "Digite sua 1º nota do semestre e dê ENTER: ";
    //coloca o valor digitado na variavel n1
    cin >> n1;
    
    //imprime pro user digitar a nota
    cout << "Digite sua 2º nota do semestre e dê ENTER: ";
    //coloca o valor digitado na variavel n2
    cin >> n2;
    
    //imprime pro user digitar a nota
    cout << "Digite sua 3º nota do semestre e dê ENTER: ";
    //coloca o valor digitado na variavel n3
    cin >> n3;
    
    //imprime pro user digitar a nota
    cout << "Digite sua 4º nota do semestre e dê ENTER: ";
    //coloca o valor digitado na variavel n4
    cin >> n4;
    
    //cria uma variavel tipo double de soma onde ela soma todas as notas    
    double soma = (n1 + n2 + n3 + n4);
    // divide a soma pela quantidade de notas q é 4
    soma = (soma / 4);
    
    //imprime pro user a média com o valor de soma
    cout << "A sua média no semestre é " << soma << endl;
    
    //se soma for maior ou igual a 7
    if (soma >=7){
        //imprime pro user que ele foi aprovado
        cout << "Parabéns! Você foi aprovado!" << endl;
    // se não
    }else{
        // imprime que ele foi reprovado
        cout << "Eita! Você foi reprovado :c" << endl;
    }
    
    return 0;
    
}
