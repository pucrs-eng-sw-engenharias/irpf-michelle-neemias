#include<string>
#include<string.h>
#ifndef IRPF_H
#define IRPF_H
using namespace std;


class IRPF
{


    public:
        IRPF(string enome, string ecpf, double econtribuicao, double erendimentos);
        IRPF(string enome, string ecpf, double econtribuicao, double erendimentos, int enascimento, int edependentes);
        string Getcpf() { return cpf; }
        string Getnome() {return nome;}
        int idade();


    private:
        string nome;
        string cpf;
        int ano_nascimento;
        int dependentes;
        float contribuicao;
        float rendimentos;

};

#endif // IRPF_H
