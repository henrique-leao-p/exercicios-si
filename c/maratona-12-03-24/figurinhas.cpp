#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> splitStringToInt(const string& input) {
    vector<int> result;
    istringstream ss(input);
    string token;

    while (getline(ss, token, ' ')) {
        result.push_back(stoi(token));
    }

    return result;
}

int main() {
    int N, C, M;
    cin >> N >> C >> M;

    cin.ignore(); // Ignora a quebra de linha anterior

    string carimbadasInput;
    getline(cin, carimbadasInput);
    vector<int> carimbadas = splitStringToInt(carimbadasInput);

    string compradasInput;
    getline(cin, compradasInput);
    vector<int> compradas = splitStringToInt(compradasInput);

    int faltam = C;
    //auto deduz o tipo, cont garante que o valor não seja alterado
    for (const auto& figurinha : compradas) {
        //it é o indice do elemento figurinha contido em carimbadas
        auto it = find(carimbadas.begin(), carimbadas.end(), figurinha);
        //carimbadas.end é o retorno caso o elemento figurinhas não esteja contido
        cout << (it != carimbadas.end());
        if (it != carimbadas.end()) {
            /*carimbadas.erase(it);*/
            faltam--;
        }
    }

    cout << faltam << endl;

    return 0;
}