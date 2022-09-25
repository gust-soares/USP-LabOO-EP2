#ifndef COMPETICAOMULTIMODALIDADES_H
#define COMPETICAOMULTIMODALIDADES_H

#include "Competicao.h"

#include <algorithm
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class CompeticaoMultimodalidades : public Competicao{
    public:
        CompeticaoMultimodalidades(string nome, Equipe** equipes, int quantidade);
        virtual ~CompeticaoMultimodalidades();

        void adicionar(Modalidade* m);
        list<Modalidade*>* getModalidades();

        static void setPontuacao(vector<int>* pontos);
        static int getPontoPorPosicao(int posicao);
        Tabela* getTabela();

    private:
        string nome;
        Equipe** equipes;
        int quantidade;
        Modalidade* m;
        vector<int>* pontos;
        int posicao;
};

#endif // COMPETICAOMULTIMODALIDADES_H
