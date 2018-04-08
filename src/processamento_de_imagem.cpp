#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void ProcessamentoDeImagem::leArquivo(){
    ifstream arquivo;
    arquivo.open(getPath());
    if (arquivo.is_open()){
        while(arquivo,){

        }
    }


    arquivo.close();
     
}

void ProcessamentoDeImagem::setPath(string caminho){
    this->caminho = caminho;
}
string ProcessamentoDeImagem::getPath(){
    return caminho;
}



//ofstream -> saida sistema e entrada no arquivo
/*  ofstream arquivo;
    arquivo.open("caminho_do_arquivo.pgm");
    arquivo.open("conteudo", ios::app); -> não sobrescreve conteúdo
    arquivo << "O que se deseja armazenar no arquivo"; -> sobrescrevendo
    arquivo.close(); ->limpa o espaço de memoria*/



//ifstream -> saindo do arquivo e entrando no programa
/*  ifstream arquivo;
    string linha; -> mostar linha na tela
    arquivo.open("caminho_do_arquivo.*");
    if (arquivo.is_open()){
        while(getline(arquivo, string)){
            cout << linha << endl;
        }
        arquivo.close();
    } -> verifica se o arquivo está aberto, retorna true se sim

*/
//fstream -> entrada ou saída
//sempre fechar o arquivo