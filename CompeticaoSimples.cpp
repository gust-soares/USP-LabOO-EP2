#include "CompeticaoSimples.h"

CompeticaoSimples::CompeticaoSimples(string nome, Equipe** equipes, int quantidade, Modalidade* m): Competicao(nome, equipes, quantidade, m){

}

CompeticaoSimples::~CompeticaoSimples(){
}

Modalidade* CompeticaoSimples::getModalidade(){
    return this->m;
}
