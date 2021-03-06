#include "processamento_de_imagem.hpp"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <string>


using namespace std;

//Contrutores e destrutores ------------------------------------------------

ProcessamentoDeImagem::ProcessamentoDeImagem(){
    string caminhoEntrada = " ";
}
ProcessamentoDeImagem::~ProcessamentoDeImagem(){
}

// Getters e Setters -------------------------------------------------------

void ProcessamentoDeImagem::setId(string id){
    this->id = id;
}
string ProcessamentoDeImagem::getId(){
    return id;
}

void ProcessamentoDeImagem::setCripStart(string CripStart){
    this->CripStart = CripStart;
}
string ProcessamentoDeImagem::getCripStart(){
    return CripStart;
}

void ProcessamentoDeImagem::setCripLenght(string CripLenght){
    this->CripLenght = CripLenght;
}
string ProcessamentoDeImagem::getCripLenght(){
    return CripLenght;
}

void ProcessamentoDeImagem::setCipher(string Cipher){
    this->Cipher = Cipher;
}
string ProcessamentoDeImagem::getCipher(){
    return Cipher;
}

void ProcessamentoDeImagem::setLarguraImg(string LarguraImg){
    this->LarguraImg = LarguraImg;
}
string ProcessamentoDeImagem::getLarguraImg(){
    return LarguraImg;
}

void ProcessamentoDeImagem::setAlturaImg(string AlturaImg){
    this->AlturaImg = AlturaImg;
}
string ProcessamentoDeImagem::getAlturaImg(){
    return AlturaImg;
}

void ProcessamentoDeImagem::setTonsImg(string TonsImg){
    this->TonsImg = TonsImg;
}
string ProcessamentoDeImagem::getTonsImg(){
    return TonsImg;
}

void ProcessamentoDeImagem::setPathIn(string caminhoEntrada){
    this->caminhoEntrada = caminhoEntrada;
}
string ProcessamentoDeImagem::getPathIn(){
    return caminhoEntrada;
}

// Outras funções -----------------------------------------------------------------------

void ProcessamentoDeImagem::leitorImg(){
}

void ProcessamentoDeImagem::UncripMsg(){
    
}
int ProcessamentoDeImagem::getCipherInt(){
    int Cipher_int = atoi(Cipher.c_str());
    return Cipher_int;
}
int ProcessamentoDeImagem::getCripLenghtInt(){
    int CripLenght_int = atoi(CripLenght.c_str());
    return CripLenght_int;
}
int ProcessamentoDeImagem::getCripStartInt(){
    int CripStart_int = atoi(CripStart.c_str());
    return CripStart_int;
}