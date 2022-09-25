#include "Modalidade.h"

Modalidade::Modalidade(string nome, Equipe** participantes, int quantidade): nome (nome), participantes(participantes), quantidade (quantidade) {
    this->ordem = NULL;
    if(quantidade < 2) throw new invalid_argument("Quantidade de equipes menor que 2");
    tabelaModalidade = new TabelaComOrdem(participantes, getQuantidadeDeEquipes());
}

Modalidade::~Modalidade() {
}

string Modalidade::getNome() {
    return this->nome;
}


Equipe** Modalidade::getEquipes() {
    return this->participantes;
}

int Modalidade::getQuantidadeDeEquipes() {
    return this->quantidade;
}

void Modalidade::setResultado(Equipe** ordem) {
    this->ordem = ordem;
}

bool Modalidade::temResultado() {
    if(this->setResultado(Equipe** ordem) == NULL) {
        return false;
    }
    else
        return true;
}

TabelaComOrdem* Modalidade::getTabela() {
    return this->tabelaModalidade;
}
// o metodo imprimir eh a chamada do metodo imprimir de Tabela, so que com a ordem

void Modalidade::imprimir() {
    cout << "Modalidade: " << this->nome << endl;
    this->tabelaModalidade->imprimir();
}
