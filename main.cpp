#include <iostream>
#include "matriz.hpp"
#include "servicos.hpp"
#include "visao.hpp"
#include "validacao.hpp"

using namespace std;
int main(){
	Matriz minhaMatriz ;
	
	
	cout << "Linha: " << minhaMatriz.getLinhas() << endl;
	cout << "Coluna: " << minhaMatriz.getColunas() << endl;
	cout << "Dados: " << minhaMatriz.getDados() << endl;
	switch ( Validacao::validaMenu(Visao::menu()) )
	{
		case 1:
			Visao::teoria();
			break;
		case 2:
			//Servicos::escolherDimensao();
			break;
		case 3:
			//Servicos::alterarMatriz( float *dados[i][j])();
			break;
		case 4:
			//Servicos::gerarMatrizL();
			break;
		case 5:
			//Servicos::gerarMatrizU();
			break;
		default:
			;
			//Servicos::alterarMatrizB();
	}
	
	
	//meuMenu->Servicos::determinarY(int linhas, int colunas);
	//meuMenu->Servicos::determinarY(int linhas, int colunas,int Y[MAX]);
}
