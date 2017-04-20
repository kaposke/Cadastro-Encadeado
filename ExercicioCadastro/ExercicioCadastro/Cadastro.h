#pragma once
#include "Player.h"
#include <iostream>
#include <vector>
#define TAM 10

using namespace std;

class Cadastro
{
private:
	vector<Player> players;
	int cadastros = 0;
public:
	Cadastro();

	void cadastrar(char nome[]);

	void buscar(int id);

	void listar();

	void alterarScore(int id, int score);

	void excluir(int id);
};