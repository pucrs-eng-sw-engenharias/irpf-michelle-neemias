string primeiromenu(){
    cout << "Calculo Imposto de Renda"<<endl<<endl;
    cout << "Digite seu CPF:";
    std::string cpfdigitado;
    do{
    cin >> cpfdigitado;
    }while(cpfdigitado.length()!=11);
    return cpfdigitado;
}

int cadastro(Dados* banco, string cpfuser){
    cout << "Insira seus dados. Opcoes com * são obrigatorias"<<endl;
    cout << "*Nome Completo:";
    string nome;
    do{
    cin >> nome;
    }while(nome.length()<4);

    cout << "*Contribuicao:";
    float contribuicao;
    do{
    cin >> contribuicao;
    }while(contribuicao<0);

    cout << "*Rendimento:";
    float rendimento;
    do{
    cin >> rendimento;
    }while(rendimento<0);

    cout << "Ano de Nascimento(use 0 para não informar):";
    int nascimento;
    cin >>nascimento;
    if(nascimento > 1900){
             cout << "*Numero de Dependentes:";
             int dependentes;
             do{
                cin >> dependentes;
             }while(dependentes<0);
            return banco->adicionar(IRPF(nome,cpfuser,contribuicao,rendimento,nascimento,dependentes));

    }else{
        return banco->adicionar(IRPF(nome,cpfuser,contribuicao,rendimento));
    }
    return 0;
}

int qualimposto(Dados* entrada, string cpfusuario){
                cout << "Deseja Consultar Imposto (1) Simples ou (2) Completo?";
                char decisao;
                do{
                    cin >> decisao;
                }while(decisao!='1' && decisao!='2');

                if(decisao=='1'){
                    if(entrada->ler(cpfusuario).imposto_simples()>-1){
                            cout << entrada->ler(cpfusuario).imposto_simples();
                            return 1;
                    }
                    else cout << "Alguma coisa deu errada."<<endl;
                        return 0;
                }else{
                    if(decisao=='2'){
                    if(entrada->ler(cpfusuario).imposto_completo()>-1){
                        cout << entrada->ler(cpfusuario).imposto_completo()<<endl;
                        return 1;
                    }else cout << "Dados insuficientes."<<endl;
                        return 0;
                    }else{
                        return 0;
                    }
                }

}
int menu(Dados* entrada){
    string cpfusuario = primeiromenu();
    if(entrada->ler(cpfusuario).Getcpf()!="0000"){
        cout << "Localizado no banco de Dados!" <<endl;
        qualimposto(entrada, cpfusuario);
    }else{
        cout << "Usuario Não localizado. Deseja cadastrar? (Y/N) ";
        char decisao;
        do{
            cin >> decisao;
        }while(decisao!='Y' && decisao!='N');
        if(decisao=='Y'){
            if (cadastro(entrada, cpfusuario)){
                cout << "Cadastro Realizado com Sucesso."<<endl<<endl;
                qualimposto(entrada, cpfusuario);
        }else return 0;

        }else{
            return 0;
        }
}
}







