#include "Tabela.h"

Tabela::Tabela(Equipe** participantes, int quantidade): participantes(participantes), quantidade(quantidade) {
    if (quantidade < 2) throw new invalid_argument("Numero de equipes invalido");
}

Tabela::~Tabela() {
}

int Tabela::getQuantidadeDeEquipes() {
    return this->quantidade;
}

int Tabela::getPosicao(Equipe* participante) {
    int j=0, posicao=1;
    for(int i = 0; i < quantidade; i++) {
        j = i;
        if(participante == this->participantes[i])
            i = quantidade;
        else{
            if(i == (quantidade-1)) //se na ultima casa do vetor, o participante ainda nao estiver, ele dá o erro
                throw new invalid_argument ("Equipe nao eh perticipante");
        }
    }
    if (this->pontuacao == NULL) //nenhuma Equipe tenha pontos (no caso de TabelaComPontos) ou caso ainda não se tenha definido o resultado
        throw new logic_error ("Sem resultado definido");
    for (int i = 0; i < quantidade; i++) {
        if (this->pontuacao[j] < this->pontuacao[i])
            posicao++;
    }
    return posicao;
}

void Tabela::imprimir() {
    if (this->pontuacao == NULL){
        for(int i = 0; i < quantidade; i++){
            cout << this->participantes[i]->getNome() << endl;
        }
    }
    else{
        //parametro com tabela com ordem
        TabelaComOrdem->imprimir();
        //parametro com tabela com pontos
        TabelaComPontos->imprimir();
      }
}

Equipe** Tabela::getEquipesEmOrdem(){
    int j=0, i=0, posicao=0;
    if (this->pontuacao == NULL) throw new logic_error ("Sem resultado definido");

        return TabelaComOrdem->getEquipesEmOrdem();
    for (i = 0; i < quantidade; i++) {
        for ( j=0; i < quantidade; j++){
            if (this->pontuacao[j] > this->pontuacao[i])
                posicao++;
        }
        if (this->ordem[i] != 0)
            posicao++;
        this->ordem[posicao] = this->participantes[i];
    }//percorre o vetor pontuacao procurando para ver se ha algum maior, e adiciona no vetor ordem de acordo com a posicao
    return this->ordem;
}





