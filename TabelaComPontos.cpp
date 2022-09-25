#include "TabelaComPontos.h"

TabelaComPontos::TabelaComPontos(Equipe** participantes, int quantidade): Tabela(participantes, quantidade) {
    if(quantidade < 2) throw new invalid_argument("Menos de 2 participantes");
    this->pontosParticipantes = new int[quantidade];
    for(int i = 0; i < quantidade; i++) {
        pontosParticipantes[i] = 0;
    }
}

TabelaComPontos::~TabelaComPontos() {
    //dtor
}

void TabelaComPontos::pontuar(Equipe* participante, int pontos) {
    for(int i = 0; i< quantidade; i++) {
        if(participantes[i] == participante) {
            pontosParticipantes[i] = pontosParticipantes[i] + pontos;
        }
    }
    throw new invalid_argument("A equipe nao eh participante");
}

int TabelaComPontos::getPontos(Equipe* participante) {
    bool result = false;
    for(int i = 0; i < quantidade; i++) {
       if(participantes[i] == participante) {
            return pontosParticipantes[i];
            result = true;
       }
    }
    if(result == false) throw new invalid_argument("A equipe nao eh participante");
}

int TabelaComPontos::getPosicao(Equipe* participante) {
    int j=0, posicao=1;
    for(int i = 0; i < quantidade; i++) {
        j = i;
        if(participante == this->participantes[i])
            i = quantidade;
    }
    for (int i = 0; i < quantidade; i++) {
        if (this->pontosParticipantes[j] < this->pontosParticipantes[i])
            posicao++;
    }
    return posicao;
}

Equipe** TabelaComPontos::getEquipesEmOrdem() {
    int j=0, i=0, posicao=0;
    for (i = 0; i < quantidade; i++) {
        posicao = this->getPosicao(participantes[i]);
        if (this->ordem[posicao] != 0) posicao++;
        this->ordem[posicao] = this->participantes[i];
    }
    return this->ordem;
}

void TabelaComPontos::imprimir(){
    for(int i = 0; i < quantidade; i++)
        cout << i+1 << "o " << this->ordem[i]->getNome() << " (" << this->getPontos(ordem[i]) << " pontos)" << endl;
}

