#include <iostream>
#include <string>
using namespace std;

int main() {

char continuar;
    
do{
    double ac1, ac2, af;
    
    cout << "Digite a nota da sua AC1 e dê ENTER: ";
    cin >> ac1;
    
    cout << "Digite a nota da sua AC2 e dê ENTER: ";
    cin >> ac2;
    
    cout << "Digite a nota da sua AF e dê ENTER: ";
    cin >> af;
    
    ac1 = ac1 * 0.15;
    
    ac2 = ac2 * 0.35;
    
    af = af * 0.5;
    
   
    double soma = (ac1 + ac2 + af);
    
    cout << "A sua média no semestre é " << soma << endl;
    cout << "AC1 = " << ac1 << "; AC2 = " << ac2 << "; AF = " << af << ";" << endl;
    
    if (soma >=5){
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{
        cout << "Eita! Você foi reprovado :c" << endl;
    }
    cout << "Deseja continuar? s/n: ";
    cin >> continuar;
    
}while(continuar=='s' || continuar=='S');
    
    
return 0;
    
}
