#include "Dados.h"


Dados::Dados()
{



}


 int Dados::adicionar(IRPF etodo){
    for (int i=0;i<todos.size();i++){
            if(todos.at(i).Getcpf()==etodo.Getcpf()){
                todos[i]=etodo;
                return 0;}
    }
    todos.push_back(etodo);
    return 1;
}

IRPF Dados::ler(string ecpf){
        for (int i=0;i<todos.size();i++){
            if(todos.at(i).Getcpf()==ecpf)
                return todos.at(i);
        }

    return IRPF("Nao encontrado", "0000",0,0);
}
