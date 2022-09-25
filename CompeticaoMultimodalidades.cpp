#include "CompeticaoMultimodalidades.h"

CompeticaoMultimodalidades::CompeticaoMultimodalidades(string nome, Equipe** equipes, int quantidade) : Competicao(nome, equipes, quantidade){
    pontos = new vector <int> ({13, 10, 8, 7, 5, 4, 3, 2, 1});//?????
    modalidades = new list <Modalidade*>* modalidades();//só fiz igual a ultima aula
}

CompeticaoMultimodalidades::~CompeticaoMultimodalidades(){
}

void CompeticaoMultimodalidades::adicionar(Modalidade* m){
    modalidades->push_back (m);
}

list<Modalidade*>* CompeticaoMultimodalidades::getModalidades(){
    return this->modalidades;
}

void CompeticaoMultimodalidades::setPontuacao(vector<int>* pontos){
    if (this->pontos->size() < 3) throw new invalid_argument ("vetor não tem mínimo 3 elementos");
    /*Para definir a pontuação por posição da Equipe na Competicao criou-se o método setPontuacao.
    Esse método é estático, ou seja, ao alterar a pontuação, todas as CompeticoesMultimodalidades devem ter o critério de pontos por posição alterado.
    O método recebe como parâmetro um vector, da biblioteca padrão, com a pontuação por posição.
    A posição 0 do vector representa a pontuação do 1º colocado, a da posição 1 representa a do 2º colocado e assim por diante.*/

}

int CompeticaoMultimodalidades::getPontoPorPosicao(int posicao){
    if ((this->posicao <= 0) || (posicao == NULL)) return 0;
    if (this->posicao < 10) return pontos->at(posicao-1);
    else return 0;
}
Tabela* CompeticaoMultimodalidades::getTabela(){

    for (unsigned int i = 0; i < this->quantidade; i++)

    for (int j = 0; j < this->modalidades[i]->getQuantidadeDeEquipes();j++){
        //somar pontuacao anterior com a colocacao atual ...
    }

    /* No EP1 fizemos assim:
    for(int i = 0; i < quantidadeDeModalidades; i++) {

       for(int j = 0; j < this->modalidades[i]->getQuantidadeDeEquipes(); j++) {
            if (modalidades[i]->setResultado() != NULL){//else Modalidades sem resultado não devem ser contabilizadas (devendo ser ignoradas

                pos = modalidades[i]->getPosicao(this->equipes[j]);

                if (pos == 1)
                    r->pontuar(this->equipes[j],13);
                if (pos == 2)
                    r->pontuar(this->equipes[j],10);
                if (pos == 3)
                    r->pontuar(this->equipes[j],8);
                if (pos == 4)
                    r->pontuar(this->equipes[j],7);
                if (pos == 5)
                    r->pontuar(this->equipes[j],5);
                if (pos == 6)
                    r->pontuar(this->equipes[j],4);
                if (pos == 7)
                    r->pontuar(this->equipes[j],3);
                if (pos == 8)
                    r->pontuar(this->equipes[j],2);
                if (pos == 9)
                    r->pontuar(this->equipes[j],1);
            //para posicoes maiores ou iguais a 10, a pontuacao somada = 0.
            }
       }
   }*/
}
