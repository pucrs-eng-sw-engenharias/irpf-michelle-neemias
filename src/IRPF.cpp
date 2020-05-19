#include "IRPF.h"
#include <time.h>


IRPF::IRPF(string enome, string ecpf, double econtribuicao, double erendimentos)
{
nome=enome;
cpf=ecpf;
contribuicao=econtribuicao;
rendimentos=erendimentos;
}

IRPF::IRPF(string enome, string ecpf, double econtribuicao, double erendimentos, int enascimento, int edependentes)
{
nome=enome;
cpf=ecpf;
ano_nascimento=enascimento;
dependentes=edependentes;
contribuicao=econtribuicao;
rendimentos=erendimentos;
}

int IRPF::idade(){

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    return (tm.tm_year + 1900-ano_nascimento);

}
