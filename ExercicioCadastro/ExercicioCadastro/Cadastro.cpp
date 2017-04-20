#include "Cadastro.h"

Cadastro::Cadastro()
{
}

void Cadastro::cadastrar(char nome[])
{
	players.push_back(Player(players.size(), nome));
	std::cout << "Usuario " << nome << " foi cadastrado com o ID: " << players.size() << "." << std::endl;

}

void Cadastro::buscar(int id)
{
	if (id < 0 || id > players.size())
	{
		cout << "ID não encontrado." << endl;
	} 
	else
	{
		cout << endl << "///////////////////" << endl;
		cout << "ID: " << id << endl;
		cout << "Nome:" << players.at(id).nome << endl;
		cout << "Score:" << players.at(id).getScore() << endl;
		cout << "///////////////////" << endl;
	}
}

void Cadastro::listar()
{
	for (int i = 0; i < players.size(); i++)
	{
		cout << endl << "///////////////////" << endl;
		cout << "ID: " << i << endl;
		cout << "Nome:" << players.at(i).nome << endl;
		cout << "Score:" << players.at(i).getScore() << endl;
		cout << "///////////////////" << endl;
	}
}

void Cadastro::alterarScore(int id, int score)
{
	if (id < 0 || id > players.size())
	{
		cout << "ID não encontrado." << endl;
	}
	else
	{
		players.at(id).setScore(score);
	}
}

void Cadastro::excluir(int id)
{
	if (id < 0 || id > players.size())
	{
		cout << "ID não encontrado." << endl;
	}
	else
	{
		players.erase(players.begin() + id);
	}
}
