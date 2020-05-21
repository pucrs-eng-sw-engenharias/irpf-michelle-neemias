
#ifndef DADOS_H
#define DADOS_H
#include "IRPF.h"
#include <vector>
#include <iostream>
using namespace std;


class Dados
{
    public:
        Dados();
        int adicionar(IRPF etodo);
        IRPF ler(string ecpf);

    protected:
    private:
        std::vector<IRPF> todos;
};

#endif // DADOS_H
