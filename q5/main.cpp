#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::back_inserter;

#include <vector>
using std::vector;

#include <algorithm>
using std::transform;

int square(int val) {
    return val * val;
}

int main(int argc, char* argv[]) {
    //Define dois vetores de inteiros
    vector<int> col;
    vector<int> col2;

    //Insere os números de 1 a 9 no vetor 'col'
    for (int i = 1; i <= 9; ++i) {
        col.push_back(i);
    }

    //Eleva todos os números individualmente ao quadrado
    //e insere no vetor 'col2'
    transform(col.begin(), col.end(), back_inserter(col2), square);

    //Imprime todos os elementos de 'col2'
    for (vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
        cout << (*it) << " ";
    }

    //Inicia uma nova linha
    cout << endl;

    //Encerra o programa
    return 0;
}