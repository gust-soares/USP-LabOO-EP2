#ifndef TABELACOMORDEM_H
#define TABELACOMORDEM_H

#include "Tabela.h"

#include <stdexcept>

class TabelaComOrdem : public Tabela {
    public:
        TabelaComOrdem(Equipe** participantes, int quantidade);
        virtual ~TabelaComOrdem();

        void setResultado(Equipe** ordem);
        int getPosicao (Equipe* participante);
        Equipe** getEquipesEmOrdem();

        void imprimir();

    private:
        Equipe** ordem;
        Equipe** participantes;
        int quantidade;
        Equipe* participante;

};

#endif // TABELACOMORDEM_H
