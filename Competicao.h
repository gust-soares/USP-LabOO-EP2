#ifndef COMPETICAO_H
#define COMPETICAO_H

#include "Equipe.h"
#include "Modalidade.h"
#include "Tabela.h"

#include <iostream>
#include <string>

using namespace std;

class Competicao {
public:
    Competicao(string nome, Equipe** equipes, int quantidade);
    virtual ~Competicao();

    string getNome();
    virtual Equipe** getEquipes() = 0;
    virtual int getQuantidadeDeEquipes() = 0;

    Tabela* getTabela();
    void imprimir();

protected:
    Equipe** equipes;
    int quantidadeDeModalidades;
    Modalidade** modalidades;
    int maximoDeModalidades;
    int quantidade;
    string nome;
};


#endif
