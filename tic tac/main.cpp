//
//  main.cpp
//  tic tac
//
//  Created by motas david on 22.12.2016.
//  Copyright © 2016 motas david. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int count = 0 ,i ,j;
    char matrix[3][3], jucator1[30], jucator2[30],q;
    
    char castig = 'r';
    system( "color A");
    cout<<"jucatorul 1";
    cin >> jucator1;
    system("cls");
    cout<<"jucatorul 2";
    cin>>jucator2;
    system("cls");
    matrix[0][0]= '1';
     matrix[0][1]= '2';
     matrix[0][2]= '3';
     matrix[1][0]= '4';
     matrix[1][1]= '5';
     matrix[1][2]= '6';
     matrix[2][0]= '7';
     matrix[2][1]= '8';
     matrix[2][2]= '9';
    while ((count <= 9) && (castig == 'r'))
    {
        cout<<" Intoduceti un numar:"<<endl;
        cout<<matrix[0][0]<<" "<<matrix[0][1]<<" "<< matrix[0][2]<<endl;
        cout<<matrix[1][0]<<" "<<matrix[1][1]<<" "<< matrix[1][2]<<endl;
        cout<<matrix[2][0]<<" "<<matrix[2][1]<<" "<<matrix[2][2]<<endl;
        cout<<jucator1<<":";
        cin>>q;
        for(i = 0; i <= 2; i++)
            for(j =0; j <=2; j++)
                if(q == matrix[i][j])
                    matrix[i][j] = 'X';
        count++;
        if((matrix[0][0] == matrix[0][1]) && (matrix[0][1] == matrix[0][2]))
            castig = matrix[0][0];
        if((matrix[0][0] == matrix[2][0] )&& (matrix[2][0] == matrix[1][0]))
            castig = matrix[0][0];
        if((matrix[1][0] == matrix[1][1]) && (matrix[1][1] == matrix[1][2]))
            castig = matrix[1][0];
        if((matrix[2][0] == matrix[2][1]) && (matrix[2][1] == matrix[2][2]))
            castig = matrix[2][0];
        if((matrix[0][1] == matrix[1][1]) && (matrix[1][1] == matrix[2][1]))
            castig = matrix[0][1];
        
        if( (matrix[0][2] == matrix[1][2]) && (matrix[1][2] == matrix[2][2]) )
            castig = matrix[0][2];
        if( (matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2]) )
            castig = matrix[0][0];
        if( (matrix[0][2] == matrix[1][1]) && (matrix[1][1] == matrix[2][0]))
            castig = matrix[0][0];
        system ("cls");
    }
    return 0;
}
