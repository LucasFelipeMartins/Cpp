#include <iostream>

	using namespace std;
	
	void preencherMatriz(int **matriz, int colunas, int linhas){
		
		int valores[6][6] = {
        {1, 3, 3, 5, 6, 7},
        {2, 1, 2, 5, 7, 9},
        {2, 4, 5, 9, 2, 15},
        {5, 8, 8, 2, 13, 12},
        {5, 6, 5, 8, 14, 16},
        {5, 5, 7, 12, 14, 15}
		};
		
    	for (int i = 0; i < linhas; i++) {
        	for (int j = 0; j < colunas; j++) {
            	matriz[i][j] = valores[i][j];
            	
        	}
    	}
	
	}
	void imprimirMatriz(int **matriz, int colunas, int linhas){
		
		for(int i = 0; i < linhas; i++){
			
			for (int j = 0; j < colunas; j++){
				
				cout << matriz[i][j] << "\t";
				
			}
		cout << endl;	
			
		}	
		
		cout << "--------------------------------------------------------------" << endl;
	
	}
	
	int aplanaterreno(int **matriz, int colunas, int linhas){
		
		int terra = 0;
	
			for(int i = 2; i < linhas; i++){
			
				for (int j = 3; j < colunas; j++){
				
					if (matriz[i][j] > 10){
						
						terra = terra + matriz[i][j] - 10;
					
						matriz[i][j] = 10;
	
					}
					
				}
				
			}
			
		cout << "O total de terra que deve ser retirada do terreno e: " << terra << endl;
		cout << "--------------------------------------------------------------" << endl;
		
		return terra;
	}
	
	void aterramento(int **matriz, int colunas, int linhas, int terra){
		
		int terra01 = 0;
		
		for(int i = 2; i < linhas; i++){
			
				for (int j = 3; j < colunas; j++){
				
					if (matriz[i][j] < 10){
						
						terra01 = terra - (10 - matriz[i][j]);
						
						cout << terra << endl;
						
						matriz[i][j] = 10;
	
					}
					
				}
				
			}	
	
	terra = terra - terra01;
	cout << "A quantidade de terra gasta para aterrar os terremos abaixo de 10 metros: " << terra01 << endl;
	
	}
	
	
	void imprimirNovaMatriz(int **matriz, int colunas, int linhas){
		
		for(int i = 2; i < linhas; i++){
			
			for (int j = 3; j < colunas; j++){
				
				cout << matriz[i][j] << "\t";
				
			}
		cout << endl;	
			
		}	
			
	}
				
			
	
	
	
int main(){
	
	int linhas = 6;
	int colunas = 6;
	
	int **matriz = new int *[linhas];
	
	for(int i = 0; i < linhas; i++){
		
		matriz[i] = new int[colunas]; 
	
	}
	
	preencherMatriz(matriz, colunas, linhas);
	
	imprimirMatriz(matriz, colunas, linhas);
	
	int terra = aplanaterreno(matriz, colunas, linhas);
	
	aterramento(matriz, colunas, linhas, terra);
		
	imprimirNovaMatriz(matriz, colunas, linhas);
	
	
	return 0;
}