#include <iostream>

    using namespace std;
    
    int calculaFatorial(int valor){
        
        int fatorial = 1;
        
        if(valor < 0 || valor >= 12){
            
            return 0;
        }else{
            
        for(int i = 1; i <= valor; i++){
            
            fatorial = fatorial * i;
            
        }
    
        return fatorial;
        }
    }
    
    void preencherVetor(int *vetor, int num){
        
        for(int i = 0; i < num; i++){
            
            cout << "Digite o valor do vetor[" << i << "]: ";
            cin >> vetor[i];
            
            vetor[i] = calculaFatorial(vetor[i]);
        
        }
    }
    
    void imprimirVetor(int *vetor, int num){
        
        for(int i = 0; i < num; i++){
            
            cout << "vetor [" << i << "]: " << vetor[i] << endl;
        
        }
        
        cout << "--------------------" << endl;
        
        int soma = 0;
        
        for(int i = 0; i < num; i ++){
            
            if(i == 1){
                
                soma = soma + vetor[i];
            }    
            
            if(i + 2 == num){
                
                soma = soma + vetor[i];
                
            }
        
     
        }
       
       cout << "A soma e: " << soma;
    }
    
    
    

int main(){
    
    int tamanho = 0;
    
    do{
        if(tamanho <= 5){
            
            cout << "O numero deve ser maior que 5" << endl;
            
        }
        
        cout << "Informe o tamanho do vetor: ";
        cin >> tamanho;
        
    }while(tamanho <= 5);
    
    int *vetor = new int[tamanho];
    
    preencherVetor(vetor, tamanho);
    
    imprimirVetor(vetor, tamanho);
    
    
    return 0;
}