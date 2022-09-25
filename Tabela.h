#ifndef TABELA_H
#define TABELA_H

#include "Equipe.h"
#include "Modalidade.h"

#include <iostream>
#include <stdexcept>

using namespace std;

class Tabela {
public:
    Tabela(Equipe** participantes, int quantidade);
    virtual ~Tabela();

    virtual int getPosicao (Equipe* participante)= 0;
    virtual Equipe** getEquipesEmOrdem() = 0;
    virtual int getQuantidadeDeEquipes();
    void imprimir();

protected:
    int quantidade;
    Equipe* participante;
    Equipe** participantes;
    //Equipe** pontuacao;nao foi declarado nesse escopo
    Equipe** ordem;

};


#endif // TABELA_H_INCLUDED
