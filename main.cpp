#include<iostream>

#include "IRPF.h"
#include "Dados.h"
#include "Interface.h"




int main(){
    Dados teste;
    teste.adicionar(IRPF("Michelle Guedes Perez", "1235",2000,20000));
    teste.adicionar(IRPF("Neemias Abner dos Reis Pereira", "1234",1000,15000));

    menu(&teste);

}
