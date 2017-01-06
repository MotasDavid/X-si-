//
//  main.cpp
//  tic tac
//
//  Created by motas david on 22.12.2016.
//  Copyright © 2016 motas david. All rights reserved.
//

#include <iostream>

#include <conio.h>

using namespace std;


int verificaCastig(char[]);
void tabla(char[]);
char nume[20];
char nume1[20];

char meniu();



void tabla(char matrice[])
{
    fflush(stdin);
    system("cls");
    cout << "\n\n\t********  Joc X si 0  ********\n\n";
    
    cout << "" << nume << " (X) -   " << nume1 << " (O)";
    cout << endl;
    
    cout << "     |     |     " << endl;
    cout << "  " << matrice[1] << "  |  " << matrice[2] << "  |  " << matrice[3] << endl;
    
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
    cout << "  " << matrice[4] << "  |  " << matrice[5] << "  |  " << matrice[6] << endl;
    
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    
    cout << "  " << matrice[7] << "  |  " << matrice[8] << "  |  " << matrice[9] << endl;
    
    cout << "     |     |     " << endl << endl;
}
int verificaCastig(char matrice[])
{
    if (matrice[1] == matrice[2] && matrice[2] == matrice[3])
        
        return 1;
    else if (matrice[4] == matrice[5] && matrice[5] == matrice[6])
        
        return 1;
    else if (matrice[7] == matrice[8] && matrice[8] == matrice[9])
        
        return 1;
    else if (matrice[1] == matrice[4] && matrice[4] == matrice[7])
        
        return 1;
    else if (matrice[2] == matrice[5] && matrice[5] == matrice[8])
        
        return 1;
    else if (matrice[3] == matrice[6] && matrice[6] == matrice[9])
        
        return 1;
    else if (matrice[1] == matrice[5] && matrice[5] == matrice[9])
        
        return 1;
    else if (matrice[3] == matrice[5] && matrice[5] == matrice[7])
        
        return 1;
    else if (matrice[1] != '1' && matrice[2] != '2' && matrice[3] != '3'
             && matrice[4] != '4' && matrice[5] != '5' && matrice[6] != '6'
             && matrice[7] != '7' && matrice[8] != '8' && matrice[9] != '9')
        
        
        
        return 0;
    else
        return -1;
}



char meniu()
{
    cout << "S.Joc cu calculatorul\n";
    cout << "P.Joc in 2\n";
    cout << "I.Info joc\n";
    cout << "E.Exit";
    cout << "\n\n\nPrecizeaza optiunea:";
    fflush(stdin);
    
    return toupper(_getche());
}
