#include <iostream>

using namespace std;

/* A funcao converteTempo recebe um inteiro tempo, que representa um tempo em segundos e deve converter esse tempo para horas, minutos e segundos.
	Devera ser armazenado o valor das horas na variavel horas, minutos na minutos e segundos na segundos.

*/

void converteTempo(int tempo, int &horas, int &minutos, int &segundos){


}


int main(){

	int tempo, horas, minutos, segundos;

	cin >> tempo; // realiza a leitura do tempo total em segundos

	converteTempo(tempo, horas, minutos, segundos);

	cout << horas << ":" << minutos << ":" << segundos << "\n";

	return 0;
}
