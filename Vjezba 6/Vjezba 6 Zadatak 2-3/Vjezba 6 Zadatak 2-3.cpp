#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Game.h"
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"
using namespace std;
int main()
{
    string versus;
    int target;
    cout << "Zelite li PvC (Igrac protiv Racunala) ili CvC (Racunalo protiv Racunala)?" << endl << "Unesite PvC ili CvC: ";
    cin >> versus;
    cout << endl;
    cout << "Do koliko bodova se igra?" << endl << "Unesite broj bodova: ";
    cin >> target;
    if (versus == "CvC")
    {
        ComputerPlayer cpl1, cpl2;
        Game gm(cpl1, cpl2, target);
    }
    else
    {
        HumanPlayer hpl;
        ComputerPlayer cpl;
        Game gm(hpl,cpl,target);
    }
    /*cout << hpl.getname() << endl;
    cout << hpl.gethand() << endl;
    cout << hpl.getcall() << endl;*/
    //
    
   /* cout << cpl.getname() << endl;
    cout << cpl.gethand() << endl;
    cout << cpl.getcall() << endl;*/
    
    
    cout << "It just works\n";
}