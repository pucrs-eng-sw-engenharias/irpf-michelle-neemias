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

double IRPF::imposto_simples(){
    double base = rendimentos-contribuicao;
    base=base*0.95;
    if(base<=12000) return 0;
    if(base<24000) return (base-12000)*0.15;
    if(base>= 24000) return ((base-12000)*0.15 + (base-24000)*0.275);

    return -1;

}

double IRPF::imposto_completo(){
    double base = rendimentos-contribuicao;
    if(idade()<=1){
    return -1;
    }else{

    if(idade()<65){
        if(dependentes<=2){
            base=base*0.98;
        }else{
            if(dependentes<=5){
                base=base*0.965;
            }else{
                base=base*0.95;
            }
        }
    }

    if(base<=12000) return 0;
    if(base<24000) return (base-12000)*0.15;
    if(base>= 24000) return ((base-12000)*0.15 + (base-24000)*0.275);

    return -1;
    }
}

