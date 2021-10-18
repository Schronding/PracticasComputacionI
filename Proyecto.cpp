#include <iostream>
using namespace std;
#include "vector"

void LlenarSobre(vector){
    vector<double, 1> envelopes;
    vector<char, 1> enve_names;
    char a, decision;
    double b, DineroTotal;
    int i = 0;

    cout << "Enter the name of your envelope\n";
    cin >> a;
    enve_names.push_back(a)
    cout << "Do you want to create a new envelope? (Y for yes, N for no)" << endl;
    cin >> decision;
    cout << "Enter the total sum you want to add to this envelope\n";
    cin >> b;
    DineroTotal -= envelopes[i];
    envelopes.push_back(b)
    if (DineroTotal > envelopes[i]){
        if (decision == "Y"){i += 1; LlenarSobre();}
    }
    else {cout << "Sorry, for the moment you do not have enough money\n";}
}

int main() {
    double DineroTotal = 0;
    vector<double, 1> envelopes;
    char decision;

    cout << "Welcome to the RaBraLena finances app" << endl;
    cout << "Please enter the total money you have\n";
    cin >> DineroTotal;
    // 1st part envelopes
    cout << "Do you want to create a new envelope? (Y for yes, N for no)" << endl;
    cout << "You currently have " << envelopes.size() << " envelopes \n";
    if (decision == "Y"){LlenarSobre();}
    cout << "Do you want to invest? (Y for yes, N for no)\n";
    cin >> decision;
    // Si el usuario quiere invertir va entonces a la parte de Elena
    cout << "Do you want to save? (Y for yes, N for no)\n";
    cin >> decision;
    // Si el usuario quiere invertir entonces va a la parte de Elena
    return 0;
}

