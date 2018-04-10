#include "inc/processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>

using namespace std;


void ProcessamentoDeImagem::setPathIn(string caminhoEntrada){
    this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagem::getPathIn(){
    return caminhoEntrada;
}

void ProcessamentoDeImagem::setPathOut(string caminhoSaida){
    this->caminhoSaida = caminhoSaida;
}
string ProcessamentoDeImagem::getPathOut(){
    return caminhoSaida;
}

void ProcessamentoDeImagem::leitorImg(string ArmazenamentoImg){
    this->ArmazenamentoImg = ArmazenamentoImg;
    ifstream ImageIn;
    ImageIn.open(getPathIn());
    if (ImageIn.is_open()){
        vector<char> imgVector;
        char conteudo;
        while(ImageIn.get(conteudo)){
            imgVector.push_back(conteudo);
        }

    }
    else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }
    int imgVector_int = atoi(imgVector);
    ImageIn.close();
    
    ofstream ImageOut;
    ImageOut.open(getPathOut());
    ImageOut << imgVector_int;
    ImageOut.close();


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