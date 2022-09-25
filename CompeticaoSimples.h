#ifndef COMPETICAOSIMPLES_H
#define COMPETICAOSIMPLES_H
#include "Competicao.h"

#include <iostream>
#include <string>

using namespace std;


class CompeticaoSimples: public Competicao {
    public:
        CompeticaoSimples(string nome, Equipe** equipes, int quantidade, Modalidade* m);
        virtual ~CompeticaoSimples();

        Modalidade* getModalidade();

    private:
        string nome;
        Equipe** equipes;
        int quantidade;
        Modalidade* m;
};

#endif // COMPETICAOSIMPLES_H
