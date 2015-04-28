#include "servicos.hpp"
#include <iostream>
#include <cstdlib>
#define MAX 50

using namespace std;

int Servicos::lerMatriz(int linhas, int colunas, int *dados){
	ifstream arquivo;
	string s;

	arquivo.open(matriz.data());
	if (!arquivo.is_open()){ 
		return 0;
	}
	else {
		cout<< Erro ao ler a matriz !<< endl;
	}
	
	/* Alocando memória para a imagem //
		dados = (float *)malloc(linhas * sizeof(float)); 
		for (int i = 0; i < linhas; ++i)
			dados[i] = (float *)malloc(colunas * sizeof(float)); 
			
	// Lendo a matriz	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			dados[i][j] = arquivo.get();
		}
	}
	
	/* Atualizando objeto de imagem */
		(*imagem).setLinhas(linhas);	
		(*imagem).setColunas(colunas);
		(*imagem).setDados(dados);
	
		arquivo.close();
		return 1;
}

		
void Servicos::escolherDimensao(){
	int quantidadeLinhas,quantidadeColunas;
	
	cout<<"Informe a quantidade de linhas da matriz: \t"<<endl;
	cin>>quantidadeLinhas;
	cout<<endl;
	
	cout<<"Informe a quantidade de colunas da matriz: \t"<<endl;
	cin>>quantidadeColunas;
	cout<<endl;
}

void Servicos::alterarMatriz( float *dados){
	int i,j,linha_alterada,coluna_alterada,quantidadeAlteracoes;
	float *valor_alterado;
	
	cout << Informe a quantas posicoes deseja alterar:    <<endl;
	cin>>quantidadeAlteracoes;
	cout<<endl;
	if(quantidadeAlteracoes!=0){
		for(i=0;i<quantidadeAlteracoes;i++){
			cout << Informe a linha a qual deseja alterar:    <<endl;
			cin<<linha_alterada;
			cout<<endl;
	
			cout << Informe a coluna a qual deseja alterar:    <<endl;
			cin>>coluna_alterada;
			cout<<endl;
		
			cout << Informe o valor alterado nessa posicao:    <<endl;
			cin<<*valor_alterado;
			cout<<endl;
			
			dados[linha_alterada][coluna_alterada]=*valor_alterado;
			
		}
	}
}
	
int Servicos::gerarMatrizL(int colunas, int linhas, float matriz[][MAX]){
	int i,j, matrizL;
	for(i=0;i<colunas;i++){
		for(j=0;j<linhas;j++){
			if(i<j || i==j){
				return 0;
			}
			else if(i>j){
				matriz[i][j]=0;
			}
			matrizL[i][j]=matriz[i][j];
		}
	}
}

int Servicos::gerarMatrizU(int colunas, int linhas,float matriz[MAX][MAX]){
	int i,j;
	for(i=0;i<colunas;i++){
		for(j=0;j<linhas;j++){
			if(i>j || i==j){
				return 0;
			}
			else if(i<j){
				matriz[i][j]=0;
				return 1;
			}
		matrizU[i][j]=matriz[i][j];
		}
	}
}
	
void Servicos::alterarMatrizB(int quantidadeLinhas){
	int i;
	double valorPosicaoB;
	
	for(i=0;i<quantidadeLinhas;i++){
		cout << "Informe o valor da matriz B na posicao "<< i+1<<endl;
		cin>>valorPosicaoB;
		cout<<endl;
		matriz[i][i+quantidadeLinhas]=valorPosicaoB;
		}
	}

//L * y =b  -> vamos achar o y
void Servicos::determinarY(int linhas, int colunas, int quantidadeColunas,int matrizL[MAX][MAX]){
	int i,j;
	int Y[MAX];
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			Y[i]=matriz[j][quantidadeColunas]/matrizL[i][j];
		}
	}	
}

//U * x =y  -> vamos achar o x

void Servicos::determinarX(int linhas, int colunas,int Y[MAX]){
	int i,j,X[MAX][MAX];
		
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			X[i]=Y[i]/matrizU[i][j];
		}
	}	
}

//pivotando
/*void pivotandoMatriz(int linhas, int colunas){
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			while(i==j ){
				
			}
				}
}*/
