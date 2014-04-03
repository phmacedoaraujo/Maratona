#include <iostream>

using namespace std;

/* Funcao recebe um inteiro "valor", que represneta o valor em dinheiro e deve calcular o menor número de notas possíveis, 
 armazenando a quantidade de notas de 100 em nota_100 , a quantidade de notas de 50 em nota_50 e assim por diante.

 */

void calculaNotas(int valor, int &nota_100, int &nota_50, int &nota_20, int &nota_10, int &nota_05, int &nota_02, int &nota_01){

	

}


int main(){

	int valor;
	int nota_100, nota_50, nota_20, nota_10, nota_05, nota_02, nota_01;

	cin >> valor; // realiza a leitura do valor total

	calculaNotas( valor, nota_100, nota_50, nota_20, nota_10, nota_05, nota_02, nota_01 );

	cout << valor << "\n";
	cout << nota_100 << " nota(s) de R$ 100,00\n";
	cout << nota_50 << " nota(s) de R$ 50,00\n";
	cout << nota_20 << " nota(s) de R$ 20,00\n";
	cout << nota_10 << " nota(s) de R$ 10,00\n";
	cout << nota_05 << " nota(s) de R$ 5,00\n";
	cout << nota_02 << " nota(s) de R$ 2,00\n";
	cout << nota_01 << " nota(s) de R$ 1,00\n";


	return 0;
}
