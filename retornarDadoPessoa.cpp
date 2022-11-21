#include <iostream>

#include<string.h>

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
    string nomep;
    
    p1.insere("Fabiana Araujo",33);
    p2.insere("Gabriel Gomes",25);
    p3.insere("Fernando Henrique",17);
    p4.insere("Ana Luiza",2);
    p5.insere("Geralda do Nascimento",93);
    p6.insere("Miguel Souza",70);
    p7.insere("Antonio Miguel",69);
    
    cout << "Insira um nome: " << endl;
    getline(cin,nomep);
    cout << endl;
    
    if(nomep==p1.nome){
        p1.mostra();
    }
    else if(nomep==p2.nome){
        p2.mostra();
    }
    else if(nomep==p3.nome){
        p3.mostra();
    }
    else if(nomep==p4.nome){
        p4.mostra();
    }
    else if(nomep==p5.nome){
        p5.mostra();
    }
    else if(nomep==p6.nome){
        p6.mostra();
    }
    else if(nomep==p7.nome){
        p7.mostra();
    }
    
    return 0;
}