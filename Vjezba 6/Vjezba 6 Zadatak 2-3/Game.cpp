#include "Game.h"
#include <chrono>
#include <thread>

Game::Game(HumanPlayer hpl, ComputerPlayer cpl, int target)
{
	using namespace std;
	int sum, temphand, hpoints, cpoints;
	string parnepar;
	hpoints = 0;
	cpoints = 0;
	while (hpl.getpoints() < target && cpl.getpoints() < target)
	{
		cout << "Unesite broj od 1 do 5: ";
		cin >> temphand;
		if (temphand <= 5 && temphand >= 1)
			hpl.sethand(temphand);
		else
		{
			cout << "Neispravan unos!" << endl;
			hpl.sethand(1);
		}
		cout << endl;
		cout << "Unesite par ili nepar: ";
		cin >> parnepar;
		if (parnepar == "par")
			hpl.setcall(0);
		else if (parnepar == "nepar")
			hpl.setcall(1);
		else
		{
			cout << "Neispravan unos!" << endl;
			hpl.setcall(0);
		}
		srand(time(NULL));
		cpl.sethand(rand() % 5 + 1);
		if (hpl.getcall())
			cpl.setcall(0);
		else
			cpl.setcall(1);
		sum = hpl.gethand() + cpl.gethand();
		cout << cpl.getname() << endl;
		cout << "Broj: " << cpl.gethand() << endl;
		if (cpl.getcall())
			cout << "Par/Nepar: Nepar" << endl;
		else
			cout << "Par/Nepar: Par" << endl;
		cout << "Bodovi: " << cpl.getpoints() << endl;
		cout << endl;
		cout << endl;
		cout << hpl.getname() << endl;
		cout << "Broj: " << hpl.gethand() << endl;
		if (hpl.getcall())
			cout << "Par/Nepar: Nepar" << endl;
		else
			cout << "Par/Nepar: Par" << endl;
		cout << "Bodovi: " << hpl.getpoints() << endl;
		cout << endl;
		cout << endl;
		if (sum % 2)
		{
			if (hpl.getcall())
			{
				cout << "Igrac je pobjednik" << endl;
				hpoints++;
				hpl.setpoints(hpoints);
			}
			else
			{
				cout << "Racunalo je pobjednik" << endl;
				cpoints++;
				cpl.setpoints(cpoints);
			}
		}
		else
		{
			if (hpl.getcall())
			{
				cout << "Racunalo je pobjednik" << endl;
				cpoints++;
				cpl.setpoints(cpoints);
			}
			else
			{
				cout << "Igrac je pobjednik" << endl;
				hpoints++;
				hpl.setpoints(hpoints);
			}
		}
		cout << endl;
		if (hpl.getpoints() > cpl.getpoints())
		{
			for (int i = 0; i < hpl.getpoints(); i++)
				cout << "\\";
		}
		else
		{
			for (int i = 0; i < cpl.getpoints(); i++)
				cout << "\\";
		}
		cout << endl;
		cout << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	if (hpl.getpoints() > cpl.getpoints())
	{
		cout << endl;
		cout << "Igrac je konacni pobjednik s " << hpl.getpoints() << " bodova!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Racunalo je konacni pobjednik s " << cpl.getpoints() << " bodova!" << endl;
		cout << endl;
	}
}

Game::Game(ComputerPlayer cpl1, ComputerPlayer cpl2, int target)
{
	using namespace std;
	
	int sum, temphand, hpoints, cpoints;
	string parnepar;
	hpoints = 0;
	cpoints = 0;
	cpl1.setname("Racunalo 1");
	cpl2.setname("Racunalo 2");
	while (cpl1.getpoints() < target && cpl2.getpoints() < target)
	{
		srand(time(NULL));
		cpl1.setcall(rand() % 2);
		cpl1.sethand(rand() % 5 + 1);
		cpl2.sethand(rand() % 5 + 1);
		if (cpl1.getcall())
			cpl2.setcall(0);
		else
			cpl2.setcall(1);
		sum = cpl1.gethand() + cpl2.gethand();
		cout << cpl1.getname() << endl;
		cout << "Broj: " << cpl1.gethand() << endl;
		if (cpl1.getcall())
			cout << "Par/Nepar: Nepar" << endl;
		else
			cout << "Par/Nepar: Par" << endl;
		cout << "Bodovi: " << cpl1.getpoints() << endl;
		cout << endl;
		cout << cpl2.getname() << endl;
		cout << "Broj: " << cpl2.gethand() << endl;
		if (cpl2.getcall())
			cout << "Par/Nepar: Nepar" << endl;
		else
			cout << "Par/Nepar: Par" << endl;
		cout << "Bodovi: " << cpl2.getpoints() << endl;
		cout << endl;
		if (sum % 2)
		{
			if (cpl1.getcall())
			{
				cout << "Racunalo 1 je pobjednik" << endl;
				hpoints++;
				cpl1.setpoints(hpoints);
			}
			else
			{
				cout << "Racunalo 2 je pobjednik" << endl;
				cpoints++;
				cpl2.setpoints(cpoints);
			}
		}
		else
		{
			if (cpl1.getcall())
			{
				cout << "Racunalo 2 je pobjednik" << endl;
				cpoints++;
				cpl2.setpoints(cpoints);
			}
			else
			{
				cout << "Racunalo 1 je pobjednik" << endl;
				hpoints++;
				cpl1.setpoints(hpoints);
			}
		}
		cout << endl;
		if (cpl1.getpoints() > cpl2.getpoints())
		{
			for (int i = 0; i < cpl1.getpoints(); i++)
				cout << "\\";
		}
		else
		{
			for (int i = 0; i < cpl2.getpoints(); i++)
				cout << "\\";
		}
		cout << endl;
		cout << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
	if (cpl1.getpoints() > cpl2.getpoints())
	{
		cout << endl;
		cout << "Racunalo 1 je konacni pobjednik s " << cpl1.getpoints() << " bodova!" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Racunalo 2 je konacni pobjednik s " << cpl2.getpoints() << " bodova!" << endl;
		cout << endl;
	}
}

Game::~Game()
{

}