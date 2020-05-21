#include "Dados.h"


Dados::Dados()
{



}


 int Dados::adicionar(IRPF etodo){

    todos.push_back(etodo);

}

IRPF Dados::ler(string ecpf){
        for (int i=0;i<todos.size();i++){
            if(todos.at(i).Getcpf()==ecpf)
                return todos.at(i);
        }

    return IRPF("Nao encontrado", "0000000000",0,0);
}
