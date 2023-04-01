#include <iostream>
#include <string>
using namespace std;

int main() {
    //cria variaveis do tipo double
    double ac1, ac2, af;
    
    //mostra pro user uma frase com espaço pra ele ter onde responder
    cout << "Digite a nota da sua AC1 e dê ENTER: ";
    //pega a resposta e coloca como valor da variavel ac1
    cin >> ac1;
    
    //mostra pro user uma frase com espaço pra ele ter onde responder
    cout << "Digite a nota da sua AC2 e dê ENTER: ";
    //pega a resposta e coloca como valor da variavel ac2
    cin >> ac2;
    
    //mostra pro user uma frase com espaço pra ele ter onde responder
    cout << "Digite a nota da sua AF e dê ENTER: ";
    //pega a resposta e coloca como valor da variavel af
    cin >> af;
    
    //variavel ac1 é igual a ela mesma vezes 0,15
    ac1 = ac1 * 0.15;
    
    //variavel ac2 é igual a ela mesma vezes 0,35
    ac2 = ac2 * 0.35;
    
    //variavel af é igual a ela mesma vezes 0,5
    af = af * 0.5;
    
    //cria variavel tipo double chamada soma e já coloca ela pra ser igual a soma de ac1 ac2 e af
    double soma = (ac1 + ac2 + af);
    
    //mostra para o user o texto com o valor de soma que é a média dele
    cout << "A sua média no semestre é " << soma << endl;
    //mostra para o user o texto com o valor de cada peso das notas
    cout << "AC1 = " << ac1 << "; AC2 = " << ac2 << "; AF = " << af << ";" << endl;
    
    //se o valor de soma for maior ou igual a 5
    if (soma >=5){
        //mostra pro user o texto que foi aprovado
        cout << "Parabéns! Você foi aprovado!" << endl;
    //se não
    }else{
        //mostra pro user o texto que foi reprovado
        cout << "Eita! Você foi reprovado :c" << endl;
    }
    
    return 0;
    
}
