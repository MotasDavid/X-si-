//
//  main.cpp
//  tic tac
//
//  Created by motas david on 22.12.2016.
//  Copyright © 2016 motas david. All rights reserved.
//

#include <iostream>

#include <conio.h>

#include <windows.h>

#include <stdio.h>

#include <time.h>

using namespace std;


int verificaCastig(char[]);
int computerhard(char[]);
void tabla(char[]);
char nume[20];
char nume1[20];



char meniu();

int main()
{
    fflush(stdin);
    char matrice[10] = {'o', '1', '2','3', '4', '5','6','7','8','9'};
    int jucator =1, i ,alegere;
    
    system("color c");
    
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
                        alegere = computerhard(matrice);
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
                {
                    cout<< "A fost un joc bun! \nRemiza";
                    cout<<"|           :::::::::       :::::::::           :::          :::       :::           |"<<endl;
                    cout<<"|           :+:    :+:      :+:    :+:        :+: :+:        :+:       :+:           |"<<endl;
                    cout<<"|           +:+    +:+      +:+    +:+       +:+   +:+       +:+       +:+           |"<<endl;
                    cout<<"|           +#+    +:+      +#++:++#:       +#++:++#++:      +#+  +:+  +#+           |"<<endl;
                    cout<<"|           +#+    +#+      +#+    +#+      +#+     +#+      +#+ +#+#+ +#+           |"<<endl;
                    cout<<"|           #+#    #+#      #+#    #+#      #+#     #+#       #+#+# #+#+#            |"<<endl;
                    cout<<"|           #########       ###    ###      ###     ###        ###   ###             |"<<endl;
                }
                fflush(stdin);
                
                _getche();
                for ( int i = 1; i <= 9; i++ )
                    matrice[i] = i + '0';
                break;
                case'P':
                
                
                cout<<"\n\nJucatorul 1: Introdu numele tau pentru a incepe jocul:"<<endl;
                cin>>nume;
                cout<<"\n\nJucatorul 2: Introdu numele tau pentru a incepe jocul:"<<endl;
                cin>>nume1;
                
                system("cls");
                do
                {
                    tabla(matrice);
                    jucator = ( jucator % 2) ? 1 : 2;
                    cout<<" Jucatorul" << " "<<  jucator << " Introdu un numar pentru a face mutarea :";
                    cin >> alegere;
                    semn = (jucator == 1) ? 'X' : 'O';
                    if( alegere == 1 && matrice[1] == '1')
                        matrice[1] = semn;
                    else
                        if( alegere == 2 && matrice [2] == '2')
                            matrice[2] = semn;
                    else
                        if( alegere == 3 && matrice[3] == '3')
                            matrice[3] = semn;
                    else
                        if( alegere == 4 && matrice[4] == '4')
                            matrice[4] = semn;
                    else
                        if( alegere == 5 && matrice[5] == '5')
                            matrice[5] = semn;
                    else
                        if( alegere == 6 && matrice[6] == '6')
                            matrice[6] = semn;
                    else
                        if(alegere == 7 && matrice[7] == '7')
                            matrice[7] = semn;
                    else
                        if( alegere == 8 && matrice[8] == '8')
                            matrice[8] = semn;
                    else
                        if( alegere == 9 && matrice[9] == '9')
                            matrice[9] = semn;
                    else
                    {
                        cout<< "Alegerea este gresita !";
                        jucator--;
                        _getch();
                    }
                    i= verificaCastig(matrice);
                    jucator++;
                }while(i == -1);
                tabla(matrice);
                if( i == -1)
                    tabla(matrice);
                if( i == 1)
                    cout<< " ==>\ajucatorul " << --jucator << " a castigat!";
                else
                    cout<< " ==>\a A fost un joc bun! \nRemiza";
                _getche();
                for( int i = 1; i <= 9; i++)
                    matrice[i] = i+ '0';
                break;
                
                case 'I':
                cout<< "\n\n\n\tX si O  este un joc pentru doi jucatori, X respectiv 0,\n care marcheaza pe rand cate o casuta dintr-un tabel cu 3 linii si 3 coloane.\n Jucatorul care reuseste primul sa marcheze 3 casute adiacente pe orizontala,\n verticala sau diagonala castiga jocul. Have fun! :D";
                break;
                
                case 'E':
                exit(0);
                
            default: cout<< "Ai introdus ceva gresit!";
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

int computerhard(char Board[])
{   int ok=0, compmove ;
    if (Board[8] == '8') if(Board[5] == 'X' && Board[9] == 'X' && Board[1] == 'O')
    {
        compmove=8;
        ok=1;
    }
    
    if (Board[8] == '8') if((Board[1] == Board[9] && Board[1]=='X') || (Board[3] == Board[7] && Board[3] == 'X'))
    {
        compmove=8;
        ok=1;
    }
    if (Board[7]=='7')
        if((Board[1] == Board[4]&&Board[4] == 'X')||(Board[8] == Board[9]&&Board[9] == 'X') || (Board[5] == Board[3]&& Board[3] == 'X'))
        {
        compmove=7;
            ok=1;
        }
    if (Board[1] == '1')
        if((Board[7] == Board[4] && Board[4] == 'X')||(Board[2] == Board[3] && Board[3] == 'X') || (Board[5]==Board[9]&&Board[9]=='X'))
        {
            compmove=1;
            ok=1;
        }
    if (Board[9] == '9')
        if((Board[7] == Board[8] && Board[8]== 'X' ) || (Board[6] == Board[3] && Board[3] == 'X') || (Board[1] == Board[5] && Board[5] == 'X'))
        {
            compmove=9;
            ok=1;
        }
    if (Board[3] == '3')
        if((Board[1] == Board[2] && Board[1] == 'X') || (Board[9] == Board[6] && Board[6] == 'X') || (Board[7] == Board[5] && Board[5] == 'X'))
        {
            compmove = 3;
            ok = 1;
        }
    if (Board[5] == '5')
        if((Board[7] == Board[3] && Board[3] == 'X') || (Board[1] == Board[9] && Board[9 ]== 'X') || (Board[4] == Board[6] && Board[6] == 'X') || (Board[2] == Board[8] && Board[8] == 'X'))
        {
            compmove = 5;
            ok = 1;
        }
    if (Board[8]=='8')
        if((Board[7] == Board[9] && Board[9] == 'X') || (Board[5] == Board[2] && Board[5] == 'X'))
        {
            compmove = 8;
            ok = 1;
        }
    if (Board[4]=='4')
        if((Board[7] == Board[1] && Board[1] == 'X') || (Board[5] == Board[6] && Board[5] == 'X'))
        {
            compmove = 4;
            ok = 1;
        }
    if (Board[2]=='2')
        if((Board[1] == Board[3]  && Board[3] == 'X') || (Board[8] == Board[5] && Board[5] == 'X'))
        {
            compmove = 2;
            ok = 1;
        }
    if (Board[6] == '6')
        if((Board[3] == Board[9] && Board[9] == 'X') || (Board[4] == Board[5] && Board[5] == 'X'))
    {
        compmove = 6;
        ok = 1;
    }
    
    if (Board[8] == '8')
        if((Board[1] == Board[9] && Board[1 ]== 'O') || (Board[3] == Board[7] && Board[3] == 'O'))
    {
        compmove = 8;
        ok = 1;
     }
    if (Board[7] == '7')
        if((Board[1] == Board[4] && Board[4] == 'O') || (Board[8] == Board[9] && Board[9] == 'O') || (Board[5] == Board[3] && Board[3] == 'O'))
        {
            compmove = 7;
            ok = 1;
        }
    if (Board[1] == '1')
        if((Board[7] == Board[4] && Board[4] == 'O') || (Board[2] == Board[3] && Board[3] == 'O') || (Board[5] == Board[9] && Board[9] == 'O'))
        {
            compmove = 1;
            ok = 1;
        }
    if (Board[9] == '9')
        if((Board[7] == Board[8] && Board[8] == 'O') || (Board[6] == Board[3] && Board[3] == 'O') || (Board[1] == Board[5] && Board[5] == 'O')) {
            {
                
            compmove = 9;
            ok = 1;
            }
    if (Board[3] == '3')
        if((Board[1] == Board[2] && Board[1] == 'O') || (Board[9] == Board[6] && Board[6] == 'O')|| (Board[7] == Board[5] && Board[5] == 'O'))
        {
            compmove = 3;
            ok = 1;
        }
    if (Board[5] == '5')
        if((Board[7] == Board[3]&&Board[3] == 'O') || (Board[1] == Board[9] && Board[9] == 'O') || (Board[4] == Board[6] && Board[6] == 'O')||(Board[2] == Board[8] && Board[8] =='O'))
    {
        compmove = 5;
        ok = 1;
    }
    if (Board[8] == '8')
        if((Board[7 ]== Board[9] && Board[9] == 'O') || (Board[5] == Board[2] && Board[5] == 'O'))
        {
            compmove = 8;
            ok = 1;
        }
    if (Board[4] == '4')
        if((Board[7] == Board[1] && Board[1] == 'O') || (Board[5] == Board[6] && Board[5] == 'O'))
        {
            compmove=4;
            ok=1;
        }
    if (Board[2] == '2')
        if((Board[1] == Board[3] && Board[3] =='O') || (Board[8] == Board[5] && Board[5] == 'O'))
        {
            compmove=2;
            ok=1;
        }
    if (Board[6] == '6')
        if((Board[3] == Board[9] && Board[9] == 'O') || (Board[4] == Board[5] && Board[5] == 'O'))
        {
            compmove=6;
            ok=1;
        }
    
    if (ok == 0)
    {
        srand(time(NULL));
        compmove = rand() % 10;
    }
    else
        for (int i = 1; i < 10; i++)
        if(Board[i]=='i')
            compmove=i;
}
    return compmove;
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
