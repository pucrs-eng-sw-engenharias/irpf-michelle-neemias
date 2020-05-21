#include<iostream>

#include"IRPF.h"
#include "Dados.h"

int main(){

    Dados teste;

    teste.adicionar(IRPF("michelle guedes perez", "1234",100,200));
    teste.adicionar(IRPF("neemias abner", "1235",100,2000));


    cout << teste.ler("1235").Getnome() << endl << teste.ler("1235").imposto_completo() ;

}
