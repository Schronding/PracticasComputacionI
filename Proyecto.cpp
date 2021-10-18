#include <iostream>
#include <string>
#include <array>
#include "vector"
#include "Finanzas.h"
using namespace std;

int main() {
    /// Inicializacion de las variables

    double DineroTotal = 0;
    vector<double, 1> envelopes;
    char decision;
    double saving = 0, invest = 0;
    int i = 0;
    char answer[5] = "yon"; // Es yes or no
    vector < string, 7 > investsFunds = {"fund"};
    vector < string, 5 > savingsFunds = {"fund"};


    /// Inicio de las lineas de codigo


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

    if (decision == 'Y'){}

    // Si el usuario quiere invertir entonces va a la parte de Elena


                    /// Barrera Codigo Bryan a Codigo Elena ///



    //preguntamos al usuario que quiere hacer
    cout << "Would you like to invest? (Y for Yes, N for no)" << endl;
    cin >> decision;
    cout << "Write the percentage you want to use to investing" << endl;
    cin >> invest;
    while (invest > 100){
        cout << "This is not a valid percentage, pls try again."
    }
    if (strcmp(answer,"yes") == 0){
        cin.ignore(10000, '\n'); //esta función es para eliminar el enter y se pueda usar correctamente la función getline()

    //si el usuario desea invertir, entonces:
    // que es strcmp?? string comparison


        //El 50% del dinero destinado primero al ahorro, se destina a la inversión
        invest *= DineroTotal;
        //primero se le pide al usuario ingresar sus fondos de inversión
        cout << "You have $ " << invest << " to invest" << endl; // Muy buena idea
        cout << "What would you like to invest in? Insert up to 7 investment funds. Type the name of the fund followed it value." << endl;
        cout << "When you finish press 'f'" << endl;
        for (int i = 0; i < 7; i++){
            cout << "fund " << i << ":";
            getline(cin, investsFunds[i]);
            if (investsFunds[i] == "f"){
                break;
            }
        }

        //Luego, se le pide al usuario ingresar sus fondos de ahorro
        cout << "Do you want to save? (Y for yes, N for no)\n";
        cin >> decision;
        cout << "You have $ " << DineroTotal << " to saving. Insert up to 5 savings investsFunds. Type the name of the found followed it value." << endl;
        cout << "When you finish press 'f'" << endl;
        for (int i = 0; i < 5; i++){
            cout << "fund " << i << ":";
            // Ahora lo unico que falta es quitar dinero
            getline(cin, savingsFunds[i]);
            if (savingsFunds[i] == "f"){
                savingsFunds.erase()
                break;
            }
        }

        // Se le muestra al usuario tanto sus fondos de inversión como sus fondos de ahorro
        cout << "Your invest funds are:" << endl;
        for (int i = 0; i < 7; i++){
            cout << investsFunds[i] << endl;
        }
        cout << "Your savings funds< are:" << endl;
        for (int i = 0; i < 7; i++){
            cout << savingsFunds[i] << endl;
        }
    }


    //Si al usuario solo le interesa tener fondos de ahorro, entonces:
    //
    if (strcmp(answer, "no") == 0){
        cin.ignore(10000, '\n');

        //se le pide al usuario ingresar sus fondos de ahorro
        cout << "You have $ " << saving << " to saving. Insert up to 5 savings investsFunds. Type the name of the found followed it value." << endl;
        cout << "When you finish press 'f'" << endl;
        for (int i = 0; i < 5; i++){
            cout << "fund " << i << ":";
            getline(cin, savingsFunds[i]);
            if (savingsFunds[i] == "f"){
                // poner para eliminar ultimo indice
                break;
            }
        }

        //sele muestra al usuario cuales son sus fondos de ahorro actuales
        cout << "Your savings funds are:" << endl;
        for (int i = 0; i < 5; i++){
            cout << savingsFunds[i] << endl;
        }
    }

    return 0;
}

