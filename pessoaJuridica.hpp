#ifndef PESSOAJURIDICA_HPP
#define PESSOAJURIDICA_HPP

#include <string>
#include <iostream>
#include "pessoa.hpp"

class PessoaJuridica:public Pessoa{

protected:
	string CNPJ
	string razaoSocial
	string situacaoCadastral

public:
	void PessoaJuridica::setCNPJ(string CNPJ);
	string PessoaJuridica::getCNPJ();
	void PessoaJuridica::setRazaoSocial(string razaoSocial);
	string PessoaJuridica::getRazaoSocial();
	void PessoaJuridica::setSituacaoCadastral(string situacaoCadastral);
	string PessoaJuridica::getSituacaoCadastral();

}

#endif
