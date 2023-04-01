#include <iostream>
#include <string>
using namespace std;

int main() {
    //cria variavel inteira
    int life;
    //cria variavel energia que pode ser valor quebrado
    float energy;
    //cria variavel verdadeiro ou falso pra status
    bool status;
    //cria variavel de texto para o personagem
    string character;
    
    //coloca valor nas variáveis
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Dean Dravio";
    
    //imprime pro user texto + o valor do personagem + texto + o valor de vida + texto mais o valor de energia + . pra ficar bonitinho e finaliza
    cout << "Olá! Bem-vindo(a), " << character << ". Atualmente sua Vida é " << life << " e sua Energia é " << energy << "." << endl;
    
    //cout<<life<<endl;
    //cout<<energy<<endl;
    //cout<<status<<endl;
    //cout<<character<<endl;
    
    
    return 0;
    
}