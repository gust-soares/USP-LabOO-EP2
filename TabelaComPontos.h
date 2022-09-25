#ifndef TABELACOMPONTOS_H
#define TABELACOMPONTOS_H

#include "Tabela.h"
#include <stdexcept>


class TabelaComPontos : public Tabela {
    public:
        TabelaComPontos(Equipe** participantes, int quantidade);
        virtual ~TabelaComPontos();

        void pontuar(Equipe* participante, int pontos);
        int getPontos(Equipe* participante);

        int getPosicao (Equipe* participante);
        Equipe** getEquipesEmOrdem();

        void imprimir();

    private:
    int *pontosParticipantes;
    Equipe** ordem;


};

#endif // TABELACOMPONTOS_H
