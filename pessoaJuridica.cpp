#include <string>
#include <iostream>
#include "pessoaJuridica.hpp"

using namespace std;

void PessoaJuridica::setCNPJ(string CNPJ){
        this-> CNPJ = CNPJ;
}

string PessoaFisica::getCNPJ(){
        return CNPJ;
}

void PessoaJuridica::setRazaoSocial(string razaoSocial){
        this-> razaoSocial = razaoSocial;
}
string PessoaJuridica::getRazaoSocial(){
        return razaoSocial;
}

void PessoaJuridica::setSituacaoCadastral(string situacaoCadastral){
        this-> situacaoCadastral = situacaoCadastral;
}

string PessoaJuridica::getSituacaoCadastral(){
        return situacaoCadastral;
}


