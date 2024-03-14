#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    int N, M;
    cin >> N >> M;

    int nPosicoes[N], sequenciaPosicoes[M];

    vector<int> repeticoes;

    for(int i = 0; i < N; i++){
        cin >> nPosicoes[i];
    }

    for(int i = 0; i < M; i++){
        cin >> sequenciaPosicoes[i];
    }

    int posicao, ultimaPosicao = 0;
    repeticoes.push_back(nPosicoes[0]);
    for(int i = 0; i < M; i++){
        posicao = sequenciaPosicoes[i]-1;
        if(posicao > ultimaPosicao){
            cout << "\n";
            for(int j = ultimaPosicao+1; j <= posicao; j++){
                repeticoes.push_back(nPosicoes[j]);
            }
        }else{
            cout << "\n";
            for(int j = ultimaPosicao-1; j >= posicao; j--){
                repeticoes.push_back(nPosicoes[j]);
            }
        }
        ultimaPosicao = posicao;


    }

    /*for (int i = 0; i < repeticoes.size(); i++) {
        cout << repeticoes[i] << " ";
    }*/

    map<int, int> repeticoesDeCadaNumero;
    for(const auto &element : repeticoes){
        repeticoesDeCadaNumero[element]++;
    }

    for (int i = 0; i < 10; i++){
        cout << repeticoesDeCadaNumero[i] << " ";
    }

    return 0;
}