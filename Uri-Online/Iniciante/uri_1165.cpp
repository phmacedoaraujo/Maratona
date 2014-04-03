#include <iostream>

using namespace std;


/* Funcao verificaPrimo recebe um inteiro e deve retornar 1 se o numero for primo ou,
	 0 se o numero nao for primo
*/
int verificaPrimo(int numero){


	return 0;
}


int main(){

	int n, numero;

	cin >> n;

	for (int i = 0; i < n; i++){

		cin >> numero;

		int primo = verificaPrimo(numero);

		if(primo == 0)
			cout << numero << " nao eh primo\n";

		else cout << numero << " eh primo\n";
	}


	return 0;	
}
