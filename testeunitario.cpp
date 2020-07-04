#define CATCH_CONFIG_MAIN
#include<iostream>

#include "catch.hpp"
#include "IRPF.h"
#include "Dados.h"
#include "Interface.h"


TEST_CASE( "Usuarios", "[usuarios]" ) {
    IRPF usuario = new IRPF("Primeiro Usuario", "12345678900",2000,20000,1990,3));
    REQUIRES(usuario.Getcpf()=="12345678900");
    REQUIRES(usuario.Getnome()=="Primeiro Usuario");
    REQUIRES(usuario.idade()==30);
    REQUIRES(usuario.imposto_simples() = 765);
    REQUIRES(usuario.imposto_completo() = 805.5);
}


TEST_CASE( "BancoDados", "[dados]" ) {
    Dados BancoDados;

    REQUIRE(BancoDados.ler() == IRPF("Nao encontrado", "0000",0,0));
    BancoDados.adicionar(IRPF("Primeiro Usuario", "12345678900",2000,20000));
    REQUIRE(BancoDados.ler("12345678900") == IRPF("Primeiro Usuario", "12345678900",2000,20000));
}

