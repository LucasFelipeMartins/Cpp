#include <iostream>

	using namespace std;
	
	void preencherVetor(float *vetor, int tamanho){
		
		for(int i = 0; i < tamanho; i++){
				
			cout << "informe o faturamento do mes "<< i + 1<< ": ";
			cin >> vetor[i];
			
		}
	
	}
	
	void calculaMaiorMenor(float *vetor, int tamanho){
		
		float maior = 0;
		float menor = 9999999;
		
		for(int i = 0; i < tamanho; i++){
			
			if(vetor[i] > maior){
				
				maior = vetor[i];
				
			}
			if(vetor[i] < menor){
				
				menor = vetor[i];
				
			}
		
		}
		
		cout << "O maior faturamento e: " << maior << endl;
		cout << "O menor faturamento e: " << menor << endl;
		
	}
	
	float calculaMedia(float *vetor, int tamanho){
		
		float media = 0.0;
		
		for(int i = 0; i < tamanho; i++){
			
			media = media + vetor[i];
	
		}
		
		media = media / tamanho;
		
		cout << "A media anual e de RS " << media << endl;
		
		return media;
	
	}
	
	void calculaMesesComMediaMenor(float *vetor, int tamanho, float media){
	
	int contador = 0;
	
		for (int i = 0; i < tamanho; i++){
			
			if(vetor[i] < media){
				
				cout << "Mes " << i << " esta abaixo da media" << endl;	
				contador++;
	
			}
			
		}
		cout << "--------------------------" << endl;
		cout << "quantidade de meses a baixo da media: "<< contador;
		
	}
	
int main(){
	
	int tamanho = 12;
	
float *vetor = new float[tamanho];		
	
	preencherVetor(vetor, tamanho);
	
	calculaMaiorMenor(vetor, tamanho);
	
	float media = calculaMedia(vetor, tamanho);
	
	calculaMesesComMediaMenor(vetor, tamanho, media);
	
	return 0;
}