#include <iostream>

using namespace std;

struct Pessoas{
    string nome;
    int idade;
    
    void insere(string stnome, int stidade){
        nome=stnome;
        idade=stidade;
    }
    
    void mostra(){
        cout << "Nome.: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << endl;
    }
};

int main(){
    
    Pessoas p1, p2, p3, p4, p5, p6, p7;
    
    p1.insere("Fabiana Araujo",33);
    p2.insere("Gabriel Gomes",25);
    p3.insere("Fernando Henrique",17);
    p4.insere("Ana Luiza",2);
    p5.insere("Geralda do Nascimento",93);
    p6.insere("Miguel Souza",70);
    p7.insere("Antonio Miguel",69);
    
    p1.mostra();
    p2.mostra();
    p3.mostra();
    p4.mostra();
    p5.mostra();
    p6.mostra();
    p7.mostra();
    
    return 0;
}