#include <set>
using std::set;

#include "print_elem.h"

int main() {
    set<int> numeros;
    numeros.insert(3);
    numeros.insert(1);
    numeros.insert(4);
    numeros.insert(1);
    numeros.insert(2);
    numeros.insert(5);
    print_elements(numeros, "Set: ");
    print_elements(numeros, "CSV Set: ", ';');
    return 0;
}