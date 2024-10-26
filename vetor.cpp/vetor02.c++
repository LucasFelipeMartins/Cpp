#include <iostream>

    using namespace std;
    
    void preencherVetor(int *vetor, int tam){
        
        for (int i = 0; i < tam; i++){
            
            cout << "Informe o valor do vetor " << i << ": ";
            cin >> vetor[i];
        
        }
        
    }
    
    void analizaVetor(int *vetor, int procurado, int tam, int *novoVetor){
        
        int contador = 0;
    
        for(int i = 0; i < tam; i++){
            
            if(procurado == vetor[i]){
                
                contador ++;
            
            }
        }
    
    
        novoVetor = new int[tam - contador];
    
    }
    
    void preencherVetorNovo(int *vetor, int *novoVetor, int tam, int procurado){
        
        int j = 0;
        for(int i = 0; i < tam; i++){
            
            if(vetor[i] != procurado){
                
                novoVetor[j] = vetor[i];
    
                j++;
            }
            
        }
        
        for(int i = 0; i < j; i++){
            
            cout << novoVetor[i] << ", ";
            
            
        }
    
    }
    

int main(){
    
    int tam = 0;
    
    cout << "Informe o tamanho do vetor: ";
    cin >> tam;
    
    int *vetor = new int[tam];
    int *novoVetor = new int;

    preencherVetor(vetor, tam);
    
    int procurado = 0;
    cout << "informe um novo valor: ";
    cin >> procurado;
    
    analizaVetor(vetor, procurado, tam, novoVetor);
    
    preencherVetorNovo(vetor, novoVetor, tam, procurado);
    
    
    
    return 0;
}