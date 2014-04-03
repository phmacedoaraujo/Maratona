#include <iostream>

using namespace std;


 /* Funcao calculaTotal recebe dois vetores, sendo um de inteiros e o outro de caracteres. Cada posicao do vetor representa
 	respectivamente o total de cobaias e o tipo de cobaia de cada experimento realizado. 
 	O total de sapos, coelhos e ratos deve ser armazenado em total_sapos, total_coelhos e total_ratos.
 	e o total geral de cobaias deve ser amaznado em total_cobaias
 */

void calculaTotal(char tipo_cobaia[], int qtd_cobaias[], int numero_experimentos, int &total_sapos, int &total_coelhos, int &total_ratos, int &total_cobaias){



}


/* A funcao calculaPorcentagem recebe 4 numeros inteiros que representam o total de sapos, coelhos , ratos e o total de cobaias respectivamente,
	e deve armazenar as porcentagens de sapo, coelho e ratos em per_sapos, per_coelhos e per_ratos.
*/
void calculaPorcentagens(int total_sapos, int total_coelhos, int total_ratos, int total_cobaias, double &per_sapos, double &per_coelhos, double &per_ratos){

	

}


int main(){

	int numero_experimentos;
	int total_sapos, total_coelhos, total_ratos, total_cobaias;
	double per_sapos, per_coelhos, per_ratos;    // O percentual de cada tipo de cobaia

	cin >> numero_experimentos;

	char tipo_cobaia[numero_experimentos];
	int qtd_cobaias[numero_experimentos];

	for (int i = 0; i < numero_experimentos; i++)
		
		cin >> qtd_cobaias[i] >> tipo_cobaia[i];

	

	calculaTotal( tipo_cobaia, qtd_cobaias, numero_experimentos, total_sapos, total_coelhos, total_ratos, total_cobaias);
	calculaPorcentagens( total_sapos, total_coelhos, total_ratos, total_cobaias, per_sapos, per_coelhos, per_ratos );

	cout << "Total: " << total_cobaias << " cobaias\n";
	cout << "Total de coelhos: " << total_coelhos << "\n";
	cout << "Total de ratos: " << total_ratos << "\n";
	cout << "Total de sapos: " << total_sapos << "\n";

	cout.precision(2);

	cout << fixed << "Percentual de coelhos: " << per_coelhos << " %\n";
	cout << fixed << "Percentual de ratos: " << per_ratos << " %\n";
	cout << fixed << "Percentual de sapos: " << per_sapos << " %\n";
	

	return 0;
}
