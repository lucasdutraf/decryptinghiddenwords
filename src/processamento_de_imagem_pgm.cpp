#include "processamento_de_imagem_pgm.hpp"
#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>

using namespace std;

ProcessamentoDeImagemPGM::ProcessamentoDeImagemPGM(){
    cout << "Classe criada" << endl;
}
ProcessamentoDeImagemPGM::~ProcessamentoDeImagemPGM(){
    cout << "Término da classe Processamento de imagem PGM" << endl;
}
int ProcessamentoDeImagemPGM::getCipherInt(){
    int Cipher_int = atoi(Cipher.c_str());
    return Cipher_int;
}
int ProcessamentoDeImagemPGM::getCripLenghtInt(){
    int CripLenght_int = atoi(CripLenght.c_str());
    return CripLenght_int;
}
int ProcessamentoDeImagemPGM::getCripStartInt(){
    int CripStart_int = atoi(CripStart.c_str());
    return CripStart_int;
}

void ProcessamentoDeImagemPGM::leitorImg(){
    
    char comentario;
    vector<char> imgVector;
    char conteudo;


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


    /*int CripStart_int = atoi(CripStart.c_str());
    int CripLenght_int = atoi(CripLenght.c_str());
    int Cipher_int = atoi(Cipher.c_str());*/


    if (ImageIn.is_open()){

        while(!ImageIn.eof()){
            ImageIn.get(conteudo);
            imgVector.push_back(conteudo);
        }

        ofstream Crip;
        Crip.open("criptografia.txt", ios::out);

        for(int contador = getCripStartInt(); contador <= getCripStartInt() + getCripLenghtInt(); contador++){
            Crip << imgVector[contador];
        }
        Crip.close();
    }

    else{
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    ImageIn.close();
}

void ProcessamentoDeImagemPGM::UncripMsg(){
    ifstream Crip;
    int contador_crip;
    int WithoutCrip = 0;
    char letras_criptografadas;

    Crip.open("criptografia.txt", ios::in);
    if(Crip.is_open()){

        ofstream DesCrip;
        DesCrip.open("mensagem.txt");
        if(DesCrip.is_open()){
            while(contador_crip < getCripLenghtInt()){
                Crip.get(letras_criptografadas);

                if(letras_criptografadas == '.' || letras_criptografadas == '-' || letras_criptografadas == ' ' ){
                    WithoutCrip = (int)letras_criptografadas;
                }
                else{
                    if(islower(letras_criptografadas)){
                        if(((int)letras_criptografadas - getCipherInt()) < 97){
                            WithoutCrip = ((int)letras_criptografadas - getCipherInt() ) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - getCipherInt();
                        }
                    }
                    else{
                        if(((int)letras_criptografadas - getCipherInt()) < 65){
                            WithoutCrip = ((int)letras_criptografadas - getCipherInt()) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - getCipherInt();
                        }
                    }
                }
                cout << (char)WithoutCrip;
                WithoutCrip = 0;
                contador_crip++;
            }
        DesCrip.close();
        }
        else{
            cout << "Falha no arquivo de abertura da mensagem não criptografada" << endl;
        }
        Crip.close();

    }
    else{
        cout << "Arquivo de criptografia inacessível" << endl;
    }
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