#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using std::string;
using std::cout;
using std::endl;
using std::stringstream;

#include <stack>
using std::stack;

int main(int argc, char* argv[]) {
    stack<int> rpn;
    if(argc < 2) {
        cout << "Sem formula para processar" << endl;
        return 0;
    }
    //stringstream formula("2 3 + 5 * \n");
    stringstream formula;
    formula << argv[1];
    formula << " \n";
    string lido = "";
    getline(formula, lido, ' ');
    while(lido != "\n") {
        if(lido == "\n")
            break;
        else if(lido == "+") {
            int val = rpn.top();
            rpn.pop();
            val = rpn.top() + val;
            rpn.pop();
            rpn.push(val);
        } else if(lido == "-") {
            int val = rpn.top();
            rpn.pop();
            val = rpn.top() - val;
            rpn.pop();
            rpn.push(val);
        } else if(lido == "*") {
            int val = rpn.top();
            rpn.pop();
            val = rpn.top() * val;
            rpn.pop();
            rpn.push(val);
        } else if(lido == "/") {
            int val = rpn.top();
            rpn.pop();
            val = rpn.top() / val;
            rpn.pop();
            rpn.push(val);
        } else {
            int op = stoi(lido);
            rpn.push(op);
        }
        getline(formula, lido, ' ');
    }
    if(!rpn.empty())
        cout << "Resultado: " << rpn.top() << endl;
    return 0;
}