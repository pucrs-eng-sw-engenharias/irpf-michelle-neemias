#include<iostream>

#include"IRPF.h"
#include "Dados.h"

int main(){

    Dados teste;

    teste.adicionar(IRPF("michelle guedes perez", "1234",100,200));
<<<<<<< HEAD
    teste.adicionar(IRPF("neemias abner", "1235",100,2000));

    cout << teste.ler("1235").Getnome() << endl << teste.ler("1235").imposto_completo() ;
=======
    teste.adicionar(IRPF("neemias abner", "1235",100,200));


    cout << teste.ler("1232").Getnome();
>>>>>>> 3ccedb56bdf9168eb4e299b9aad3d20e041b5774

}
