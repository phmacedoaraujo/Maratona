#include <iostream>

using namespace std;


/* A funcao calculaTempo deve calcular o tempo de duracao do jogo.
	tempo_horas deve receber o tempo total em horas do jogo e,
	tempo_minutos deve receber o tempo total em minutos do jogo.
*/

void calculaTempo(int hora_inicial, int minuto_inicial, int hora_final, int minuto_final, int &tempo_horas, int &tempo_minutos){



}

int main(){

	int hora_inicial, minuto_inicial, hora_final, minuto_final;
	int tempo_horas, tempo_minutos;

	cin >> hora_inicial >> minuto_inicial; // realiza a leitura da hora inicial e minuto inicial do jogo
	cin >> hora_final >> minuto_final;  // realiza a leitura da hora final e minuto final do jogo.

	calculaTempo(hora_inicial, minuto_inicial, hora_final, minuto_final, tempo_horas, tempo_minutos);

	cout << "O JOGO DUROU " << tempo_horas << " HORA(S) E " << tempo_minutos << " MINUTO(S)\n";


return 0;
}
