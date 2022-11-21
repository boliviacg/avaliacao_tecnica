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
    int media;          
    
    p1.insere("Fabiana Araujo",33);     
    p2.insere("Gabriel Gomes",25);     
    p3.insere("Fernando Henrique",17);     
    p4.insere("Ana Luiza",2);    
    p5.insere("Geralda do Nascimento",93);     
    p6.insere("Miguel Souza",70);     
    p7.insere("Antonio Miguel",69); 
    
    media= (p1.idade+p2.idade+p3.idade+p4.idade+p5.idade+p6.idade+p7.idade)/7;
    cout << media << endl;
    
    return 0;
    
}