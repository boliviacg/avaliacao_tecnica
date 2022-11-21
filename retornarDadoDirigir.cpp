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
    int idadeDirigir = 18;          
    
    p1.insere("Fabiana Araujo",33);     
    p2.insere("Gabriel Gomes",25);     
    p3.insere("Fernando Henrique",17);     
    p4.insere("Ana Luiza",2);    
    p5.insere("Geralda do Nascimento",93);     
    p6.insere("Miguel Souza",70);     
    p7.insere("Antonio Miguel",69);          
                
    cout << "Podem dirigir: " << endl;          
        if(p1.idade >= idadeDirigir){         
            p1.mostra();     
                    
        }     
        if(p2.idade >= idadeDirigir){         
            p2.mostra();     
                    
        }     
        if(p3.idade >= idadeDirigir){         
            p3.mostra();     
                    
        }     
        if(p4.idade >= idadeDirigir){         
            p4.mostra();     
                    
        }     
        if(p5.idade >= idadeDirigir){         
            p5.mostra();     
                    
        }     
        if(p6.idade >= idadeDirigir){         
            p6.mostra();     
                    
        }     
            if(p7.idade >= idadeDirigir){         
        p7.mostra();     
                    
        }          
        return 0; 
    
}