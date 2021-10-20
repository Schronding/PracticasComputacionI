#include <iostream>
#include <string>
#include "vector"
#include <stdlib.h>
using namespace std;

void LlenarSobre();
void Ahorros();
void Inversion();

double DineroTotal = 0;
vector<double> envelopes;
char decision = 'Y';

vector <string> investsFundsN(7);
vector < double > investsFundsV(7);

vector <string> savingsFundsN(5);
vector < double > savingsFundsV(5);
int iter = 0;

int main() {
    /// Inicializacion de las variables



    /// Inicio de las lineas de codigo


    cout << "Welcome to the RaBraLena finances app" << endl;
    cout << "Please enter the total money you have\n";
    cin >> DineroTotal;
    // 1st part envelopes
    cout << "Do you want to create a new envelope? (Y for yes, N for no)" << endl;
    cout << "You currently have " << envelopes.size() << " envelopes \n";
    cin >> decision;
    if (decision == 'Y'){LlenarSobre();}

    /// Poner que si no quieren sobre tambien puedan agregar inversiones y ahorros ///

    // cout << "Do you want to invest? (Y for yes, N for no)\n";
    // cin >> decision;
    // Si el usuario quiere invertir va entonces a la parte de Elena
    // cout << "Do you want to save? (Y for yes, N for no)\n";
    // cin >> decision;

    // if (decision == 'Y'){}

    // Si el usuario quiere invertir entonces va a la parte de Elena


    /// Barrera Codigo Bryan a Codigo Elena ///


    //Si al usuario solo le interesa tener fondos de ahorro, entonces:
    //


    return 0;
}


void LlenarSobre(){
    vector<string> enve_names;
    char decision;
    string a;
    double b;

    cout << "Enter the name of your envelope\n";
    cin >> a;
    enve_names.push_back(a);
    cout << "Enter the total sum you want to add to this envelope\n";
    cin >> b;
    envelopes.push_back(b);
    DineroTotal -= envelopes[iter];

    cout << "Do you want to create a new envelope? (Y for yes, N for no)" << endl;
    cin >> decision;
    if (decision == 'Y' && DineroTotal > envelopes[iter]){
        iter++;
        LlenarSobre();
    }
    if (decision == 'N'){
        Inversion();
    }
    else {cout << "Sorry, for the moment you do not have enough money\n";}
}

void Ahorros(){
    //Luego, se le pide al usuario ingresar sus fondos de ahorro
    cout << "Do you want to save? (Y for yes, N for no)\n";
    cin >> decision;
    if (decision == 'N'){
        EXIT_SUCCESS; // Terminar el programa
    }
    if (decision == 'Y'){
    cout << "You have $ " << DineroTotal << " to saving. Type the name of the found, you can insert up to 5 savings funds." << endl;
    cout << "When you finish press 'f'" << endl;
    cin.ignore(10000, '\n'); //esta función es para eliminar el enter y se pueda usar correctamente la función getline()
    for (int i = 0; i < 5 ; i++){
        cout << "fund " << i << ":";
        // Ahora lo unico que falta es quitar dinero
        getline(cin, savingsFundsN[i]);
        if (savingsFundsN[i] == "f"){
            savingsFundsN.pop_back();
            break;
        }
    }

    cout << "Now, you enter the corresponding value for each fund. When you finish press '0'" << endl;
    for (int i = 0; i < 5; i++){
        cout << "valueFund " << i << ":";
        cin >> savingsFundsV [i];
        DineroTotal -= savingsFundsV [i];
        if (savingsFundsV[i] == 0){
            savingsFundsV.pop_back();
            break;
        }
    }

    cout << "Your savings funds are:" << endl;
    for (int i = 0; i < 5; i++){
        cout << savingsFundsN[i] << " $" << savingsFundsV [i] << endl;}
    }
}


void Inversion() {
    //preguntamos al usuario que quiere hacer
    // cout << "Would you like to invest? (Y for Yes, N for no)" << endl;
    // cin >> decision;
    // cout << "Write the percentage you want to use to investing" << endl;
    // cin >> invest;
    //while (invest > 100){
    //    cout << "This is not a valid percentage, pls try again.";
    //} //*

    cout << "Would you like to invest? (Y for yes, N for no)" << endl;
    cin >> decision;

    // if (strcmp(decision,"yes") == 0){
    // cin.ignore(10000, '\n'); //esta función es para eliminar el enter y se pueda usar correctamente la función getline()

    //si el usuario desea invertir, entonces:
    // que es strcmp?? string comparison


    //El 50% del dinero destinado primero al ahorro, se destina a la inversión
    if (decision == 'N') {
        Ahorros();
    }
    //primero se le pide al usuario ingresar sus fondos de inversión
    cout << "You have $ " << DineroTotal << " to invest" << endl; // Muy buena idea
    cout << "What would you like to invest in? Type the name of the fund, you can insert up to 7 investment funds."
         << endl;
    cout << "When you finish press 'f'" << endl;
    cin.ignore(10000, '\n'); //esta función es para eliminar el enter y se pueda usar correctamente la función getline()
    for (int i = 0; i < 7; i++) {
        cout << "fund " << i << ":";
        getline(cin, investsFundsN[i]);
        if (investsFundsN[i] == "f") {
            investsFundsN.pop_back();
            break;
        }
    }

    cout << "Now, you enter the corresponding value for each fund. When you finish press '0'" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "valueFund " << i << ":";
        cin >> investsFundsV[i];
        DineroTotal -= investsFundsV[i];
        if (investsFundsV[i] == 0) {
            investsFundsV.pop_back();
            break;
        }
    }

    cout << "Your invests funds are:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << investsFundsN[i] << " $" << investsFundsV[i] << endl;
        Ahorros();


    }
}
