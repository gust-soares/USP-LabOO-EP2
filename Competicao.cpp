#include "Competicao.h"

Competicao::Competicao(string nome, Equipe** equipes, int quantidade): nome(nome),equipes(equipes),quantidade(quantidade){
    /*quantidadeDeModalidades = 0;
    this->modalidades = new Modalidade*[maximoDeModalidades];*/
    if(quantidade < 2) throw new invalid_argument ("Quantidade de equipes menor que 2");
}
Competicao::~Competicao() {

}
string Competicao::getNome() {
    return this->nome;
}
Equipe** Competicao::getEquipes() {
    return this->equipes;
}
int Competicao::getQuantidadeDeEquipes() {
    return this->quantidade;
}

Tabela* Competicao::getTabela() {
    Tabela* r = new Tabela(this->getEquipes(),this->getQuantidadeDeEquipes());
    int pos;
    //Caso seja uma competição simples
        return Modalidade->getTabela();
    //Caso seja uma competição multimodalidades
    if (modalidades == NULL) throw new invalid_argument ("Nenhuma modalidade adicionada");

   return r;
}

void Competicao::imprimir() {
    cout << this->nome << endl;
     Tabela* r = this->getTabela();

     r->imprimir();
}

/*
bool Competicao::adicionar(Modalidade* m) {

    if(quantidadeDeModalidades >= maximoDeModalidades)
        return false;

    for(int i = 0; i < quantidadeDeModalidades; i++) {
        if(m->getNome() == this->modalidades[i]->getNome())
            return false;
    }

    this->modalidades[quantidadeDeModalidades] = m;
    quantidadeDeModalidades++;
    return true;


Modalidade** Competicao::getModalidades() {
    return this->modalidades;

}

int Competicao::getQuantidadeDeModalidades() {
    return this->quantidadeDeModalidades;
}*/
