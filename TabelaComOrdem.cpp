#include "TabelaComOrdem.h"

TabelaComOrdem::TabelaComOrdem(Equipe** participantes, int quantidade): Tabela(participantes, quantidade) {
    if (quantidade < 2) throw new invalid_argument("Quantidade de equipes menor que 2");
    //for(int i = 0; i < quantidade; i++) {)
}

TabelaComOrdem::~TabelaComOrdem() {
}

void TabelaComOrdem::setResultado(Equipe** ordem) {
    this->ordem = ordem;
}

Equipe** TabelaComOrdem::getEquipesEmOrdem() {
    return this->ordem;
}

int TabelaComOrdem::getPosicao(Equipe* participante) {
    int j=0, posicao=1;
    for(int i = 0; i < quantidade; i++) {
        j = i;
        if(participante == this->participantes[i])
            i = quantidade;
    }
    for (int i = 0; i < quantidade; i++) {
        if (this->pontuacao[j] < this->pontuacao[i])
            posicao++;
    }
    return posicao;
}
void TabelaComOrdem::imprimir(){
    for(int i = 0; i < quantidade; i++)
            cout << i+1 << "o " << this->ordem[i]->getNome(); << endl;
}
