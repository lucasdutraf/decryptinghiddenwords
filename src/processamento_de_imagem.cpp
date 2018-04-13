#include "processamento_de_imagem.hpp"
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


void ProcessamentoDeImagem::leitorImg(){
    //this->ArmazenamentoImg = ArmazenamentoImg;
    string id, CripStart, CripLenght, Cipher, LarguraImg, AlturaImg, TonsImg;
    char comentario;
    int ContadorCrip;

    ifstream ImageIn;
    ImageIn.open(getPathIn());

    getline(ImageIn, id, '\n');
    ImageIn.get(comentario);
    getline(ImageIn, CripStart, ' ');
    getline(ImageIn, CripLenght, ' ');
    getline(ImageIn, Cipher, '\n');
    getline(ImageIn, LarguraImg, ' ');
    getline(ImageIn, AlturaImg, '\n');
    getline(ImageIn, TonsImg, '\n');

    int CripStart_int = stoi (CripStart);
    int CripLenght_int = stoi (CripLenght);
    int Cipher_int = stoi(Cipher);

    vector<char> imgVector;

    char conteudo;

    if (ImageIn.is_open()){
        while(!ImageIn.eof()){
            ImageIn.get(conteudo);
            imgVector.push_back(conteudo);
        }
    }
    else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    ofstream Crip;
    Crip.open("criptografia.txt");
    for(contador = CripStart_int; contador <= CripStart_int + CripLenght_int; contador++){
          Crip << imgVector[contador];
    }

    

    ImageIn.close();
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