#include "CompeticaoMultimodalidades.h"

CompeticaoMultimodalidades::CompeticaoMultimodalidades(string nome, Equipe** equipes, int quantidade) : Competicao(nome, equipes, quantidade){
    pontos = new vector <int> ({13, 10, 8, 7, 5, 4, 3, 2, 1});//?????
    modalidades = new list <Modalidade*>* modalidades();//s� fiz igual a ultima aula
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
    if (this->pontos->size() < 3) throw new invalid_argument ("vetor n�o tem m�nimo 3 elementos");
    /*Para definir a pontua��o por posi��o da Equipe na Competicao criou-se o m�todo setPontuacao.
    Esse m�todo � est�tico, ou seja, ao alterar a pontua��o, todas as CompeticoesMultimodalidades devem ter o crit�rio de pontos por posi��o alterado.
    O m�todo recebe como par�metro um vector, da biblioteca padr�o, com a pontua��o por posi��o.
    A posi��o 0 do vector representa a pontua��o do 1� colocado, a da posi��o 1 representa a do 2� colocado e assim por diante.*/

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
            if (modalidades[i]->setResultado() != NULL){//else Modalidades sem resultado n�o devem ser contabilizadas (devendo ser ignoradas

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
