#ifndef CLOSEST_H
#define CLOSEST_H

#include <vector>
using std::vector;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last) {
    InputIterator it; 
    InputIterator retorno = last;
    int media = 0, tamanho = 0, closest;

    for(it = first; it != last; ++it) {
        tamanho++;
        media += *it;
    }
    media /= tamanho;
    cout << media << endl;

    closest = abs(*first - media);
    for(it = first; it != last; ++it) {
        if(abs(*it - media) < closest) {
            closest = abs(*it - media);
            retorno = it;
        }
    }
    return retorno;
}

#endif