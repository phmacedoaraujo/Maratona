#include <iostream>

using namespace std;


/* Funcao calculitros recebe um inteiro tempo, que representa o tempo percorrido
e um inteiro velocidadeMedia, que representa a velocidade media do veiculo no intervalo de tempo "tempo"
. A fucao deve retornar um numero de ponto flutuante que representa a quantidade em litros gasto.

*/

double calculaLitros(int tempo, int velocidadeMedia){




	return 0.0;
}


int main(){

	int tempo, velocidadeMedia;
	double litros;

	cin >> tempo >> velocidadeMedia;

	litros = calculaLitros(tempo,velocidadeMedia);

	cout.precision(3);
	cout << fixed << litros << "\n";

	return 0;
}
