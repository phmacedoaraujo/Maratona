#include <iostream>

using namespace std;

/*Funcao somaImpar recebe 2 inteiros 'x'  e 'y' e
 deve retornar a soma dos  y numeros impares consecutivos a partir de x (inclusive x, se ele for impar) 
*/

int somaImpar(int numero, int qtd_impar){


	return 0;
}


int main(){

	int n, numero, qtd_impar, soma;

	cin >> n;

	for (int i = 0; i < n; i++){
		
		cin >> numero >> qtd_impar;

		soma = somaImpar(numero,qtd_impar);

		cout << soma << "\n";
	}
}
