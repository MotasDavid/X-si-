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

int main()
{
    fflush(stdin);
    char matrice[10] = {'o', '1', '2','3', '4', '5','6','7','8','9'};
    int jucator =1, i ,alegere;
    
    system("color a");
    
    while(1)
    {
        system("cls");
        switch(meniu())
        {
                case 'S':
                fflush(stdin);
                
                cout<< " \n\nIntrodu numele tau pentru a incepe jocul:"<<endl;
                cin>>nume;
                cout<<"\n\nIntrodu un nume pentru computer:"<<endl;
                cin>>nume1;
                char poz, semn;
                
                do{
                    tabla(matrice);
                    if(jucator % 2 == 1)
                        jucator = 1;
                    else
                        jucator = 2;
                    //jucatorul2
                    if(jucator == 2)
                    {
                        cout<< " E randul computerului ";
                        cout<<"\nApasa ENTER pentru mutarea computerului"<<endl;
                        alegere =rand() % 9;
                        semn= 'O';
                        
                        int pozitie = 0;
                        while( pozitie == 0)
                        {
                            if(alegere ==1 && matrice[1] == '1')
                            {
                                matrice[1] = semn;
                                pozitie = 1;
                            }
                            else if(alegere ==2 && matrice[2] == '2')
                            {
                                matrice[2] = semn;
                                pozitie = 1;
                            }
                            else if( alegere == 3 && matrice[3] == '3')
                            {
                                matrice[3] = semn;
                                pozitie =1;
                            }
                            else if( alegere == 4 && matrice[4] == '4')
                            {
                                matrice[4] = semn;
                                pozitie =1;
                            }
                            else if( alegere == 5 && matrice[5] == '5')
                            {
                                matrice[5] = semn;
                                pozitie =1;
                            }
                            else if ( alegere == 6 && matrice[6] == '6')
                            {
                                matrice[6] = semn;
                                pozitie =1;
                            }
                            else if( alegere == 7 && matrice[7] == '7')
                            {
                                matrice[7] = semn;
                                pozitie = 1;
                            }
                            else if ( alegere == 8 && matrice[8] == '8')
                            {
                                matrice[8] = semn;
                                pozitie = 1;
                            }
                            else if ( alegere == 9 && matrice[9] == '9')
                            {
                                matrice[9] = semn;
                                pozitie = 1;
                            }
                            else{
                                alegere = rand() % 9;
                            }
                        }
                        i = verificaCastig(matrice);
                        jucator++;
                        _getche();
                        tabla(matrice);
                    }
                    //jucator 1
                    
                    else if(jucator == 1)
                    {
                        cout<< " Este randul tau "<< nume << " :\nIntrodu un numar unde vei plasa X: ";
                        cin >> alegere;
                        semn = 'X';
                        if( alegere == 1 && matrice[1] == '1' )
                            matrice[1] = semn;
                        else
                            if( alegere == 2 && matrice[2] == '2')
                                matrice[2] = semn;
                        else
                            if( alegere == 3 && matrice[3] == '3')
                                matrice[3] = semn;
                        else
                            if( alegere == 4 && matrice [4] == '4')
                                matrice[4] = semn;
                        else
                            if( alegere == 5 && matrice[5] == '5')
                                matrice[5] = semn;
                        else
                            if( alegere == 6 && matrice[6] == '6')
                                matrice[6] = semn;
                        else
                            if( alegere == 7 && matrice[7] == '7')
                                matrice[7] = semn;
                        else
                            if( alegere == 8 && matrice[8] == '8')
                                matrice[8] = semn;
                        else
                            if( alegere == 9 && matrice[9] == '9')
                                matrice[9] = semn;
                        else
                        {
                            cout << "Mutarea este gresita!!!";
                            jucator--;
                            _getche();
                        }
                        i = verificaCastig(matrice);
                        jucator++;
                    }
                }while ( i == -1);
                tabla(matrice);
                if( i == 1)
                    cout<< " Felicitari! \njucatorul "<< --jucator << " a castigat";
                else
                    cout<< "A fost un joc bun! \nRemiza";
                fflush(stdin);
                
                _getche();
                for ( int i = 1; i <= 9; i++ )
                    matrice[i] = i + '0';
                break;
        }
        
        _getch();
    }
    return 0;
}

void tabla(char matrice[])
{
    fflush(stdin);
    system("cls");
    cout << "\n\n\t********  Joc X si 0 by Motas David ********\n\n";
    
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
