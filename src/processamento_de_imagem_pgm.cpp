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
    
}
ProcessamentoDeImagemPGM::~ProcessamentoDeImagemPGM(){
    cout << "Término da classe Processamento de imagem PGM" << endl;
}

void ProcessamentoDeImagemPGM::leitorImg(){
    //this->ArmazenamentoImg = ArmazenamentoImg;
    
    char comentario, letras_criptografadas;
    int ContadorCrip;
    int contador;
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


    int CripStart_int = atoi(CripStart.c_str());
    int CripLenght_int = atoi(CripLenght.c_str());
    int Cipher_int = atoi(Cipher.c_str());


    if (ImageIn.is_open()){

        while(!ImageIn.eof()){
            ImageIn.get(conteudo);
            imgVector.push_back(conteudo);
        }

        ofstream Crip;
        Crip.open("criptografia.txt", ios::out);

        for(contador = CripStart_int; contador <= CripStart_int + CripLenght_int; contador++){
            Crip << imgVector[contador];
        }
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
            while(contador_crip < CripLenght){
                Descrip.get(letras_criptografadas);

                if(letras_criptografadas == '.' || letras_criptografadas == '-' || letras_criptografadas == ' ' ){
                    WithoutCrip = (int)letras_criptografadas;
                }
                else{
                    if(is_lower(letras_criptografadas)){
                        if(((int)letras_criptografadas - Cipher_int) < 97){
                            WithoutCrip = ((int)letras_criptografadas - Cipher_int ) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - Cipher_int;
                        }
                    }
                    else{
                        if(((int)letras_criptografadas - Cipher_int) < 65){
                            WithoutCrip = ((int)letras_criptografadas - Cipher_int) + 26;
                        }
                        else {
                            WithoutCrip = (int)letras_criptografadas - Cipher_int;
                        }
                    }
                }
                cout << (char)WithoutCrip;
                WithoutCrip = 0;
                contador_crip++;
            }
        }
        else{
            cout << "Falha no arquivo de abertura da mensagem não criptografada" << endl;
        }
    }
    else{
        cout << "Arquivo de criptografia inacessível" << endl;
    }
    Crip.close();
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