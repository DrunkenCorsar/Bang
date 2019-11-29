#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream> 
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <functional>
#include <memory>
#include <ctime>
const int MAX = 1234567890;
using namespace std;
class ConsolePrint
{
public:

	ConsolePrint()
	{
	}

	void Print_Spusob_Skusenosti(int cislo)
	{
		if (cislo == 0 || cislo == 5 || cislo == 12)
			cout << "Pro spusteni skusenosti stisknete '-1' behem sveho tahu." << endl;
		else
			cout << "Schopnost se pouziva automaticky." << endl;
	}

	void PrintPostava(int cislo)
	{
		switch (cislo)
		{
		case 0:
		{
			cout << "         Jesse Jones (4 zivoty)          " << endl;
			cout << "   Schopnost: Prvni kartu si muze vzit   " << endl;
			cout << "        z ruky nektereho hrace.          " << endl;
		}
		break;
		case 1:
		{

			cout << "       Slab The Killer (4 zivoty)        " << endl;
			cout << "   Schopnost: Hrac potrebuje dve karty   " << endl;
			cout << "    'Vedle!' proti jeho karte 'BANG!'    " << endl;
		}
		break;
		case 2:
		{
			cout << "        Willy The Kid (4 zivoty)         " << endl;
			cout << "   Schopnost: Muze zahrat libovolny      " << endl;
			cout << "           pocet karet 'BANG!'           " << endl;
		}
		break;
		case 3:
		{
			cout << "       Suzy Lafayette (4 zivoty)         " << endl;
			cout << "  Schopnost: Jakmile nema zadnou kartu   " << endl;
			cout << "        v ruce, jednu si vezme.          " << endl;
		}
		break;
		case 4:
		{
			cout << "         Jourdonnais (4 zivoty)          " << endl;
			cout << " Schopnost: Kdykoli je zasazen vystrelem " << endl;
			cout << "  karty 'BANG!', muze si liznout: pokud  " << endl;
			cout << "   je karta srdcova, vystrel ho minul.   " << endl;
		}
		break;
		case 5:
		{
			cout << "         Sid Ketchum (4 zivoty)          " << endl;
			cout << "   Schopnost: Za dve odhozene karty si   " << endl;
			cout << "        muze vratit jeden zivot.         " << endl;
		}
		break;
		case 6:
		{
			cout << "         Vulture Sam (4 zivoty)          " << endl;
			cout << "    Schopnost: Vidi vsechny hrace na     " << endl;
			cout << "         vzdalenost o jedna mensi.       " << endl;
		}
		break;
		case 7:
		{
			cout << "         Bart Cassidy (4 zivoty)         " << endl;
			cout << "     Schopnost: Kdykoli je zasazen       " << endl;
			cout << "             lizne si kartu.             " << endl;
		}
		break;
		case 8:
		{
			cout << "          Black Jack (4 zivoty)          " << endl;
			cout << "  Schopnost: Ukaze druhou kartu, kterou  " << endl;
			cout << "  si lize. Pokud je srdcova nebo karova, " << endl;
			cout << "       bere si jeste jednu kartu.        " << endl;
		}
		break;
		case 9:
		{
			cout << "         Paul Regret (3 zivoty)          " << endl;
			cout << "   Schopnost: Jeho vzdalenost od vsech   " << endl;
			cout << "         hracu je o jedna vetsi.         " << endl;
		}
		break;
		case 10:
		{
			cout << "       Calamity Janet (4 zivoty)         " << endl;
			cout << "   Schopnost: Muze hrat kartu 'BANG!'    " << endl;
			cout << "    misto karty 'Vedle!' a obracene.     " << endl;
		}
		break;
		case 11:
		{
			cout << "         Rose Doolan (4 zivoty)          " << endl;
			cout << "    Schopnost: Vidi vsechny hrace na     " << endl;
			cout << "         vzdalenost o jedna mensi.       " << endl;
		}
		break;
		case 12:
		{
			cout << "        Pedro Ramirez (4 zivoty)         " << endl;
			cout << "   Schopnost: Prvni kartu si muze vzit   " << endl;
			cout << "         z odhozovaciho balicku.         " << endl;
		}
		break;
		case 13:
		{
			cout << "          Lucky Duke (4 zivoty)          " << endl;
			cout << "  Schopnost: Pokazde, kdyz si lize kartu," << endl;
			cout << "      vezme si vrchni dve a vybere       " << endl;
			cout << "             si z nich jednu.            " << endl;
		}
		break;
		case 14:
		{
			cout << "          Kit Carlson (4 zivoty)         " << endl;
			cout << "    Schopnost: Vidi vsechny hrace na     " << endl;
			cout << "         vzdalenost o jedna mensi.       " << endl;
		}
		break;
		case 15:
		{
			cout << "           El Gringo (3 zivoty)          " << endl;
			cout << "   Schopnost: Pokazde kdyz je zasazen    " << endl;
			cout << "      hracem, vezme si jednu kartu       " << endl;
			cout << "          z ruky tohoto hrace.           " << endl;
		}
		break;
		}
	}

	void PrintMainMenu()
	{
		cout << "     THE BANG GAME     " << endl;
		cout << " 1. Nova hra           " << endl;
		cout << " 2. Nahrat hru         " << endl;
		cout << " 3. Instrukce          " << endl;
		cout << " 4. Odhlasit se        " << endl;
		cout << endl;
	};
};
const int Max_Cards = 50, Count_Postava = 16, Cards_In_Balik = 80;
int REAL_balik[Cards_In_Balik];
int REAL_Cards_In_Balik = Cards_In_Balik;

//  ----------------------
//  |  MAPA TYPU KARET:  |
//  ----------------------
//  |  0 = BANG!         |
//  |  1 = Vedle!        |
//  |  2 = Scofild (2)   |
//  |  3 = Volcanic (1)  |
//  |  4 = Remington (3) |
//  |  5 = Carabin (4)   |
//  |  6 = Vincester (5) |
//  |  7 = Moustang      |
//  |  8 = Mirivo        |
//  |  9 = Pivo          |
//  | 10 = Saloon        |
//  | 11 = Kraska        |
//  | 12 = Panika        |
//  | 13 = Barel         |
//  | 14 = Dostavnik     |
//  | 15 = Wells Fargo   |
//  ----------------------

//  ----------------------
//  |  MAPA TYPU ZBRANE: |
//  ----------------------
//  |  0 = Colt 45       |
//  |  1 = Volcanic      |
//  |  2 = Scofold       |
//  |  3 = Remington     |
//  |  4 = Carabin       |
//  |  5 = Vincester     |
//  ----------------------

//  ----------------------
//  |   MAPA TYPU ROLE:  |
//  ----------------------
//  |  0 = Serif         |
//  |  1 = Odpadlik      |
//  |  2 = Bandita       |
//  |  3 = Pomocnik      |
//  ----------------------

class Card
{
public:

	int Get_Type()
	{
		return type;
	}

	void Set_Card(int cislo)
	{
		type = cislo;
		switch (cislo)
		{
		case 0:
		{
			jmeno = "  BANG! ";
			popis = " Karty 'BANG!' jsou zakladnim prostredkem \n Karty 'BANG!' jsou zakladnim prostredkem \n   pro strelbu a znizovani poctu zivotu   \n ostatnich hracu. Chcete-li zahrat kartu  \n 'BANG!', tedy vystrelit na jineho hrace, \n musite si overit:                        \n a) jaka je vzdalenost mezi Vami a cilem; \n b) jste-li schopni svou aktualni zbrani  \n na tuto vzdalenost dostrelit.            ";
		}
		break;
		case 1:
		{
			jmeno = " Vedle! ";
			popis = "    Hrac zasazeny vystrelem karty BANG, muze    \nokamzite zahrat kartu 'Vedle!', aby vystrel uhnul";
		}
		break;
		case 2:
		{
			jmeno = "Scofield";
			popis = " ";
		}
		break;
		case 3:
		{
			jmeno = "Volcanic";
			popis = " ";
		}
		break;
		case 4:
		{
			jmeno = "Remingto";
			popis = " ";
		}
		break;
		case 5:
		{
			jmeno = "Carbine ";
			popis = " ";
		}
		break;
		case 6:
		{
			jmeno = "Winchest";
			popis = " ";
		}
		break;
		case 7:
		{
			jmeno = "Mustang ";
			popis = " ";
		}
		break;
		case 8:
		{
			jmeno = " Pohled ";
			popis = " ";
		}
		break;
		case 9:
		{
			jmeno = "  Pivo  ";
			popis = " ";
		}
		break;
		case 10:
		{
			jmeno = " Saloon ";
			popis = " ";
		}
		break;
		case 11:
		{
			jmeno = " Kraska ";
			popis = " ";
		}
		break;
		case 12:
		{
			jmeno = " Panika ";
			popis = " ";
		}
		break;
		case 13:
		{
			jmeno = " Barel  ";
			popis = " ";
		}
		break;
		case 14:
		{
			jmeno = "Diligenz";
			popis = " ";
		}
		break;
		case 15:
		{
			jmeno = "We-Fargo";
			popis = " ";
		}
		break;
		}
	}

	string Name()
	{
		return jmeno;
	}
private:
	int type;
	string jmeno, popis;
};

class Player
{
public:
	Player()
	{
		alive = false;
		Is_Mustang = false;
		zbran_id = 0;
		nazev_zbrane = "Colt 45";
		Is_Pohled = false;
	}


	int Zbran_ID()
	{
		return zbran_id;
	}

	Player(string name, bool computer)
	{
		Is_Pocitac = computer;
		Is_Mustang = false;
		zbran_id = 0;
		nazev_zbrane = "Colt 45";
		Is_Pohled = false;
		Is_Barel = false;
		alive = true;
		jmeno = name;
		jmeno_postava = "Nekdo";
		popis_postava = "Nic";
		hp = 4;
		pocet_karet = 0;
	}

	string Name()
	{
		return jmeno;
	}

	string Jmeno_Postavy()
	{
		return jmeno_postava;
	}

	int Pocet_Karet_Typu(int typ)
	{
		int count = 0;
		if (pocet_karet > 0)
			for (int i = 0; i < pocet_karet; i++)
			{
				if (cards[i].Get_Type() == typ) count++;
				if (typ == 1 && index_postava == 10 && cards[i].Get_Type() == 0) count++;
			}
		return count;
	}

	void Remove_Card(int cislo, bool To_Balik)
	{
		if (To_Balik)
		{
			REAL_balik[REAL_Cards_In_Balik] = cards[cislo].Get_Type();
			REAL_Cards_In_Balik++;
		}
		pocet_karet--;
		if (cislo < pocet_karet)
			for (int i = cislo; i < pocet_karet; i++)
				cards[i] = cards[i + 1];
	}

	void Set_Postava(int index)
	{
		index_postava = index;
		switch (index)
		{
		case 0:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Jesse Jones";
			popis_postava = "   Schopnost: Prvni kartu si muze vzit   \n        z ruky nektereho hrace.          ";
		}
		break;
		case 1:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Slab The Killer";
			popis_postava = "   Schopnost: Hrac potrebuje dve karty   \n    'Vedle!' proti jeho karte 'BANG!'    ";
		}
		break;
		case 2:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Willy The Kid";
			popis_postava = "   Schopnost: Muze zahrat libovolny      \n           pocet karet 'BANG!'           ";
		}
		break;
		case 3:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Suzy Lafayette";
			popis_postava = "  Schopnost: Jakmile nema zadnou kartu   \n        v ruce, jednu si vezme.          ";
		}
		break;
		case 4:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Jourdonnais";
			popis_postava = " Schopnost: Kdykoli je zasazen vystrelem \n  karty 'BANG!', muze si liznout: pokud  \n   je karta srdcova, vystrel ho minul.   ";
		}
		break;
		case 5:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Sid Ketchum";
			popis_postava = "   Schopnost: Za dve odhozene karty si   \n        muze vratit jeden zivot.         ";
		}
		break;
		case 6:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Vulture Sam";
			popis_postava = "    Schopnost: Vidi vsechny hrace na     \n         vzdalenost o jedna mensi.       ";
		}
		break;
		case 7:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Bart Cassidy";
			popis_postava = "     Schopnost: Kdykoli je zasazen       \n             lizne si kartu.             ";
		}
		break;
		case 8:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Black Jack";
			popis_postava = "  Schopnost: Ukaze druhou kartu, kterou  \n  si lize. Pokud je srdcova nebo karova, \n       bere su jeste jednu kartu.        ";
		}
		break;
		case 9:
		{
			hp = 3; max_hp = hp;
			jmeno_postava = "Paul Regret";
			popis_postava = "   Schopnost: Jeho vzdalenost od vsech   \n         hracu je o jedna vetsi.         ";
		}
		break;
		case 10:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Calamity Janet";
			popis_postava = "   Schopnost: Muze hrat kartu 'BANG!'    \n    misto karty 'Vedle!' a obracene.     ";
		}
		break;
		case 11:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Rose Doolan";
			popis_postava = "    Schopnost: Vidi vsechny hrace na     \n         vzdalenost o jedna mensi.       ";
		}
		break;
		case 12:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Pedro Ramirez";
			popis_postava = "   Schopnost: Prvni kartu si muze vzit   \n         z odhozovaciho balicku.         ";
		}
		break;
		case 13:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Lucky Duke";
			popis_postava = "  Schopnost: Pokazde, kdyz si lize kartu,\n      vezme si vrchni dve a vybere       \n             si z nich jednu.            ";
		}
		break;
		case 14:
		{
			hp = 4; max_hp = hp;
			jmeno_postava = "Kit Carlson";
			popis_postava = "    Schopnost: Vidi vsechny hrace na     \n         vzdalenost o jedna mensi.       ";
		}
		break;
		case 15:
		{
			hp = 3; max_hp = hp;
			jmeno_postava = "El Gringo";
			popis_postava = "   Schopnost: Pokazde kdyz je zasazen    \n      hracem, vezme si jednu kartu       \n          z ruky tohoto hrace.           ";
		}
		break;
		}
		max_hp = hp;
		pocet_karet = hp;
		for (int i = 0; i < pocet_karet; i++)
		{
			cards[i].Set_Card(REAL_balik[0]);
			REAL_Cards_In_Balik--;
			for (int j = 0; j < REAL_Cards_In_Balik; j++)
			{
				REAL_balik[j] = REAL_balik[j + 1];
			}
		}
	}

	int Cards_Count()
	{
		return pocet_karet;
	}

	int Card_Type(int cislo)
	{
		return cards[cislo].Get_Type();
	}

	string Card_Name(int cislo)
	{
		return cards[cislo].Name();
	}

	int HP_Count()
	{
		return hp;
	}

	int HP_Count_Max()
	{
		return max_hp;
	}

	void Delete_All_Cards()
	{
		if (pocet_karet > 0) for (int i = 0; i < pocet_karet; i++)
		{
			REAL_balik[REAL_Cards_In_Balik] = cards[i].Get_Type();
			REAL_Cards_In_Balik++;
		}
		pocet_karet = 0;
		if (Is_Mustang)
		{
			REAL_balik[REAL_Cards_In_Balik] = 7;
			REAL_Cards_In_Balik++;
			Is_Mustang = false;
		}
		if (Is_Pohled)
		{
			REAL_balik[REAL_Cards_In_Balik] = 8;
			REAL_Cards_In_Balik++;
			Is_Pohled = false;
		}
		if (zbran_id > 0)
		{
			switch (zbran_id)
			{
			case 1: REAL_balik[REAL_Cards_In_Balik] = 3;
				break;
			case 2: REAL_balik[REAL_Cards_In_Balik] = 2;
				break;
			case 3: REAL_balik[REAL_Cards_In_Balik] = 4;
				break;
			case 4: REAL_balik[REAL_Cards_In_Balik] = 5;
				break;
			case 5: REAL_balik[REAL_Cards_In_Balik] = 6;
				break;
			}
			REAL_Cards_In_Balik++;
			zbran_id = 0;
		}
	}

	bool Barel()
	{
		return Is_Barel;
	}

	void Pouzit_Vedle()
	{
		int kc = -1;
		if (pocet_karet > 0)
			for (int i = 0; i < pocet_karet; i++)
			{
				if (cards[i].Get_Type() == 1)
				{
					kc = i;
					break;
				}
			}
		if (kc == -1 && index_postava == 10)
		{
			if (pocet_karet > 0)
				for (int i = 0; i < pocet_karet; i++)
				{
					if (cards[i].Get_Type() == 0)
					{
						kc = i;
						break;
					}
				}
		}
		if (kc != -1)
		{
			pocet_karet--;
			if (kc < pocet_karet)
				for (int i = kc; i < pocet_karet; i++)
					cards[i] = cards[i + 1];
			cout << endl << " Hrac '" << jmeno << "' pouzil 'Vedle!'." << endl;
			REAL_balik[REAL_Cards_In_Balik] = 1;
			REAL_Cards_In_Balik++;
		}
	}

	void Pouzit_Pivo()
	{
		int kc = -1;
		if (pocet_karet > 0)
			for (int i = 0; i < pocet_karet; i++)
			{
				if (cards[i].Get_Type() == 9)
				{
					kc = i;
					break;
				}
			}
		if (kc != -1)
		{
			pocet_karet--;
			if (kc < pocet_karet)
				for (int i = kc; i < pocet_karet; i++)
					cards[i] = cards[i + 1];
			REAL_balik[REAL_Cards_In_Balik] = 9;
			REAL_Cards_In_Balik++;
		}
	}

	int Postava_ID()
	{
		return index_postava;
	}

	void Zasadit()
	{
		hp--;
		if (hp > 0) cout << " Hrac '" << jmeno << "' je zasazen! Ted' ma " << hp << "zivotu." << endl;
	}

	void Kill()
	{
		pocet_karet = 0;
		alive = false;
	}

	string Role_Name()
	{
		string jmeno1;
		switch (rol)
		{
		case 0:
			jmeno1 = "Serif";
			break;
		case 1:
			jmeno1 = "Odpadlik";
			break;
		case 2:
			jmeno1 = "Bandita";
			break;
		case 3:
			jmeno1 = "Pomocnik";
			break;
		}
		return jmeno1;
	}

	void Print_Hidden()
	{
		if (alive)
		{
			int blue = 0;
			if (Is_Mustang) blue++;
			if (Is_Pohled) blue++;
			if (Is_Barel) blue++;
			cout << endl;
			cout << "              " << jmeno_postava << " (" << jmeno << ") " << endl;
			cout << popis_postava << endl;
			if (rol == 0) cout << "   Role: " << nazev_role << "   Zivoty: " << hp << " / " << max_hp << endl;
			else cout << "   Role: ????????   Zivoty: " << hp << " / " << max_hp << endl;
			cout << "   Zbran': " << nazev_zbrane << " (" << Distance_Gun() << ")" << endl;
			if (blue == 0) cout << "   Modre: None" << endl;
			else
			{
				cout << "   Modre:" << endl;
				for (int i = 0; i < blue; i++) cout << "+--------+ ";
				cout << endl;
				if (Is_Mustang) cout << "|Mustang | ";
				if (Is_Pohled) cout << "| Pohled | ";
				if (Is_Barel) cout << "| Barel  |";
				cout << endl;
				for (int j = 0; j < 3; j++)
				{
					for (int i = 0; i < blue; i++) cout << "|        | ";
					cout << endl;
				}
				for (int i = 0; i < blue; i++) cout << "+--------+ ";
				cout << endl;
			}
			if (pocet_karet == 0)
				cout << "   Karty: None" << endl;
			else
			{
				cout << "   Karty:" << endl;
				cout << "+--------+";
				if (pocet_karet > 1) for (int i = 1; i < pocet_karet; i++) cout << "+";
				cout << endl;
				cout << "|        |";
				if (pocet_karet > 1) for (int i = 1; i < pocet_karet; i++) cout << "|";
				cout << endl;
				for (int j = 0; j < 3; j++)
				{
					cout << "|        |";
					if (pocet_karet > 1) for (int i = 1; i < pocet_karet; i++) cout << "|";
					cout << endl;
				}
				cout << "+--------+";
				if (pocet_karet > 1) for (int i = 1; i < pocet_karet; i++) cout << "+";
				cout << endl;
			}
		}
	}

	void Print_Death()
	{
		cout << endl;
		cout << "              " << jmeno_postava << " (" << jmeno << ") " << endl;
		cout << "   Role: " << nazev_role << " - Mrtvy" << endl;
		cout << endl;
	}

	void Print_Info()
	{
		if (alive)
		{
			int blue = 0;
			if (Is_Mustang) blue++;
			if (Is_Pohled) blue++;
			if (Is_Barel) blue++;
			cout << endl;
			cout << "              " << jmeno_postava << " (" << jmeno << ") " << endl;
			cout << popis_postava << endl;
			cout << "   Role: " << nazev_role << "   Zivoty: " << hp << " / " << max_hp << endl;
			cout << "   Zbran': " << nazev_zbrane << " (" << Distance_Gun() << ")" << endl;
			if (blue == 0) cout << "   Modre: None" << endl;
			else
			{
				cout << "   Modre:" << endl;
				for (int i = 0; i < blue; i++) cout << "+--------+ ";
				cout << endl;
				if (Is_Mustang) cout << "|Mustang | ";
				if (Is_Pohled) cout << "| Pohled | ";
				if (Is_Barel) cout << "| Barel  |";
				cout << endl;
				for (int j = 0; j < 3; j++)
				{
					for (int i = 0; i < blue; i++) cout << "|        | ";
					cout << endl;
				}
				for (int i = 0; i < blue; i++) cout << "+--------+ ";
				cout << endl;
			}
			if (pocet_karet == 0)
				cout << "   Karty: None" << endl;
			else
			{
				cout << "   Karty:" << endl;
				for (int i = 0; i < pocet_karet; i++) cout << "+--------+";
				cout << endl;
				for (int i = 0; i < pocet_karet; i++) cout << "|" << cards[i].Name() << "|";
				cout << endl;
				for (int j = 0; j < 3; j++)
				{
					for (int i = 0; i < pocet_karet; i++) cout << "|        |";
					cout << endl;
				}
				for (int i = 0; i < pocet_karet; i++) cout << "+--------+";
				cout << endl;
			}
		}
	}

	bool Mustang()
	{
		return Is_Mustang;
	}

	void Set_Wearpon(int zbran)
	{
		if (zbran_id > 0)
		{
			switch (zbran_id)
			{
			case 1: REAL_balik[REAL_Cards_In_Balik] = 3;
				break;
			case 2: REAL_balik[REAL_Cards_In_Balik] = 2;
				break;
			case 3: REAL_balik[REAL_Cards_In_Balik] = 4;
				break;
			case 4: REAL_balik[REAL_Cards_In_Balik] = 5;
				break;
			case 5: REAL_balik[REAL_Cards_In_Balik] = 6;
				break;
			}
			REAL_Cards_In_Balik++;
			zbran_id = 0;
		}
		zbran_id = zbran;
		switch (zbran_id)
		{
		case 0:
			nazev_zbrane = "Colt 45";
			break;
		case 1:
			nazev_zbrane = "Volcanic";
			break;
		case 2:
			nazev_zbrane = "Scofield";
			break;
		case 3:
			nazev_zbrane = "Remington";
			break;
		case 4:
			nazev_zbrane = "Carbine";
			break;
		case 5:
			nazev_zbrane = "Winchester";
			break;
		}
	}

	bool Pohled()
	{
		return Is_Pohled;
	}

	int Distance_To()
	{
		int d = 0;
		if (index_postava == 9) d++;
		if (Is_Mustang) d++;
		return d;
	}

	int Distace_From()
	{
		int d = 0;
		if (index_postava == 11) d--;
		if (index_postava == 6) d--;
		if (index_postava == 14) d--;
		if (Is_Pohled) d--;
		return d;
	}

	int Distance_Gun()
	{
		int d = -1;
		switch (zbran_id)
		{
		case 0:
			d = 1;
			break;
		case 1:
			d = 1;
			break;
		case 2:
			d = 2;
			break;
		case 3:
			d = 3;
			break;
		case 4:
			d = 4;
			break;
		case 5:
			d = 5;
			break;
		}
		return d;
	}

	Card Special_Get(bool & out_provedla)
	{
		pocet_karet += 2;
		cards[pocet_karet - 2].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cards[pocet_karet - 1].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cout << " Ziskal(a) jste karty '" << cards[pocet_karet - 2].Name() << "' a '" << cards[pocet_karet - 1].Name() << "'." << endl;
		Card vratit = cards[pocet_karet - 1];
		int third = rand() % 2;
		if (third == 0)
		{
			out_provedla = true;
			cout << "Schopnost se provedla. ";
			pocet_karet++;
			cards[pocet_karet - 1].Set_Card(REAL_balik[0]);
			REAL_Cards_In_Balik--;
			for (int j = 0; j < REAL_Cards_In_Balik; j++)
			{
				REAL_balik[j] = REAL_balik[j + 1];
			}
			cout << " Ziskal(a) jste kartu '" << cards[pocet_karet - 1].Name() << "'." << endl;
		}
		else
		{
			cout << "Schpnost se ale neprovedla." << endl;
			out_provedla = false;
		}
		return vratit;
	}

	void Get_Cards()
	{
		pocet_karet += 2;
		cards[pocet_karet - 2].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cards[pocet_karet - 1].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cout << " Ziskal(a) jste karty '" << cards[pocet_karet - 2].Name() << "' a '" << cards[pocet_karet - 1].Name() << "'." << endl;
	}

	void Get_Cards_Odh()
	{
		pocet_karet += 2;
		cards[pocet_karet - 2].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cards[pocet_karet - 1].Set_Card(REAL_balik[REAL_Cards_In_Balik - 1]);
		REAL_Cards_In_Balik--;
		cout << " Ziskal(a) jste karty '" << cards[pocet_karet - 2].Name() << "' a '" << cards[pocet_karet - 1].Name() << "'." << endl;
	}

	Card Get_Card()
	{
		int karta = rand() % pocet_karet;
		Card ret = cards[karta];
		pocet_karet--;
		if (karta < pocet_karet)
			for (int i = karta; i < pocet_karet; i++)
				cards[i] = cards[i + 1];
		return ret;
	}

	int Get_First_Position_Of_Card(int type)
	{
		int p = -1;
		if (pocet_karet > 0) for (int i = 0; i < pocet_karet; i++)
		{
			if (cards[i].Get_Type() == type)
			{
				p = i;
				break;
			}
		}
		return p + 1;
	}

	void Get_One_Card(bool silence)
	{
		pocet_karet += 1;
		cards[pocet_karet - 1].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		if (!silence) cout << " Ziskal(a) jste kartu '" << cards[pocet_karet - 1].Name() << "'." << endl;
	}

	int Stole_Card(int cislo, bool Do_Baliku)
	{
		int first = 0;
		if (Is_Mustang) first++;
		if (Is_Pohled) first++;
		if (Is_Barel) first++;
		if (zbran_id > 0) first++;
		if (cislo <= first)
		{
			if (Is_Mustang && cislo == 1)
			{
				Is_Mustang = false;
				if (Do_Baliku)
				{
					REAL_balik[REAL_Cards_In_Balik] = 7;
					REAL_Cards_In_Balik++;
				}
				return 7;
			}
			if ((Is_Pohled && !Is_Mustang && cislo == 1) || (Is_Pohled && Is_Mustang && cislo == 2))
			{
				Is_Pohled = false;
				if (Do_Baliku)
				{
					REAL_balik[REAL_Cards_In_Balik] = 8;
					REAL_Cards_In_Balik++;
				}
				return 8;
			}
			if (Is_Barel && ((cislo == 1 && (!Is_Mustang && !Is_Pohled)) || (cislo == 2 && ((Is_Pohled && !Is_Mustang) || (!Is_Pohled && Is_Mustang))) || (cislo == 3 && (Is_Pohled && Is_Mustang))))
			{
				Is_Barel = false;
				if (Do_Baliku)
				{
					REAL_balik[REAL_Cards_In_Balik] = 13;
					REAL_Cards_In_Balik++;
				}
				return 13;
			}
			if ((zbran_id > 0) && cislo == first)
			{
				int type = 0;
				switch (zbran_id)
				{
				case 1: type = 3; break;
				case 2: type = 2; break;
				case 3:	type = 4; break;
				case 4: type = 5; break;
				case 5: type = 6; break;
				}
				zbran_id = 0;
				nazev_zbrane = "Colt 45";
				if (Do_Baliku)
				{
					REAL_balik[REAL_Cards_In_Balik] = type;
					REAL_Cards_In_Balik++;
				}
				return type;
			}
		}
		else
		{
			cislo -= first + 1;
			int type = cards[cislo].Get_Type();
			pocet_karet--;
			if (cislo < pocet_karet)
				for (int i = cislo; i < pocet_karet; i++)
					cards[i] = cards[i + 1];
			if (Do_Baliku)
			{
				REAL_balik[REAL_Cards_In_Balik] = type;
				REAL_Cards_In_Balik++;
			}
			return type;
		}
		return 0;
	}

	int Print_Cards_Stole()
	{
		if (!Is_Mustang && !Is_Pohled && zbran_id == 0 && pocet_karet == 0) return -1;
		if (Is_Mustang) cout << "+--------+ ";
		if (Is_Pohled) cout << "+--------+ ";
		if (Is_Barel) cout << "+--------+ ";
		if (zbran_id > 0) cout << "+--------+ ";
		if (pocet_karet > 1) for (int i = 0; i < pocet_karet - 1; i++) cout << "+--";
		if (pocet_karet > 0) cout << "+--------+ ";
		cout << endl;
		if (Is_Mustang) cout << "|Mustang | ";
		if (Is_Pohled) cout << "| Pohled | ";
		if (Is_Barel) cout << "| Barel  | ";
		if (zbran_id > 0) switch (zbran_id)
		{
		case 1: cout << "|Volcanic| "; break;
		case 2: cout << "|Scofield| "; break;
		case 3: cout << "|Remingto| "; break;
		case 4: cout << "|Carbine | "; break;
		case 5: cout << "|Winchest| "; break;
		}
		if (pocet_karet > 1) for (int i = 0; i < pocet_karet - 1; i++) cout << "|  ";
		if (pocet_karet > 0) cout << "|        | ";
		cout << endl;

		for (int i = 0; i < 2; i++)
		{
			if (Is_Mustang) cout << "|        | ";
			if (Is_Pohled) cout << "|        | ";
			if (Is_Barel) cout << "|        | ";
			if (zbran_id > 0) cout << "|        | ";
			if (pocet_karet > 1) for (int i = 0; i < pocet_karet - 1; i++) cout << "|  ";
			if (pocet_karet > 0) cout << "|        | ";
			cout << endl;
		}

		int cislo = 1;
		if (Is_Mustang)
		{
			if (cislo < 10) cout << "| " << cislo << "      | ";
			else cout << "|" << cislo << "      | ";
			cislo++;
		}
		if (Is_Pohled)
		{
			if (cislo < 10) cout << "| " << cislo << "      | ";
			else cout << "|" << cislo << "      | ";
			cislo++;
		}
		if (Is_Barel)
		{
			if (cislo < 10) cout << "| " << cislo << "      | ";
			else cout << "|" << cislo << "      | ";
			cislo++;
		}
		if (zbran_id > 0)
		{
			if (cislo < 10) cout << "| " << cislo << "      | ";
			else cout << "|" << cislo << "      | ";
			cislo++;
		}
		if (pocet_karet > 1) for (int i = 0; i < pocet_karet - 1; i++)
		{
			if (cislo < 10) cout << "| " << cislo;
			else cout << "|" << cislo;
			cislo++;
		}
		if (pocet_karet > 0)
		{
			if (cislo < 10) cout << "| " << cislo << "      | ";
			else cout << "|" << cislo << "      | ";
		}
		cout << endl;
		if (Is_Mustang) cout << "+--------+ ";
		if (Is_Pohled) cout << "+--------+ ";
		if (Is_Barel) cout << "+--------+ ";
		if (zbran_id > 0) cout << "+--------+ ";
		if (pocet_karet > 1) for (int i = 0; i < pocet_karet - 1; i++) cout << "+--";
		if (pocet_karet > 0) cout << "+--------+ ";
		cout << endl;
		return cislo;
	}

	void Print_Cards()
	{
		for (int i = 0; i < pocet_karet; i++) cout << "+--------+ ";
		cout << endl;
		for (int i = 0; i < pocet_karet; i++) cout << "|" << cards[i].Name() << "| ";
		cout << endl;
		for (int j = 0; j < 2; j++)
		{
			for (int i = 0; i < pocet_karet; i++) cout << "|        | ";
			cout << endl;
		}
		for (int i = 0; i < pocet_karet; i++)
		{
			if (i < 9) cout << "| " << i + 1 << "      | ";
			else cout << "|" << i + 1 << "      | ";
		}
		cout << endl;
		for (int i = 0; i < pocet_karet; i++) cout << "+--------+ ";
		cout << endl;
	}

	int Role()
	{
		return rol;
	}

	void Use_Wells_Fargo()
	{
		pocet_karet += 3;
		cards[pocet_karet - 3].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cards[pocet_karet - 2].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cards[pocet_karet - 1].Set_Card(REAL_balik[0]);
		REAL_Cards_In_Balik--;
		for (int j = 0; j < REAL_Cards_In_Balik; j++)
		{
			REAL_balik[j] = REAL_balik[j + 1];
		}
		cout << " Ziskal(a) jste karty '" << cards[pocet_karet - 3].Name() << ", " << cards[pocet_karet - 2].Name() << "' a '" << cards[pocet_karet - 1].Name() << "'." << endl;
	}

	void Add_Card(Card new_card)
	{
		pocet_karet++;
		cards[pocet_karet - 1] = new_card;
	}

	void Set_Rol(int cislo)
	{
		rol = cislo;
		switch (rol)
		{
		case 0:
		{
			nazev_role = "Serif   ";
			max_hp++; hp = max_hp;
			pocet_karet = hp;
			cards[hp - 1].Set_Card(REAL_balik[0]);
			REAL_Cards_In_Balik--;
			for (int j = 0; j < REAL_Cards_In_Balik; j++)
			{
				REAL_balik[j] = REAL_balik[j + 1];
			}
		}
		break;
		case 1:
			nazev_role = "Odpadlik";
			break;
		case 2:
			nazev_role = "Bandita ";
			break;
		case 3:
			nazev_role = "Pomocnik";
		}
	}

	bool Use_Barel()
	{
		int u = rand() % 4;
		if (index_postava == 13) u = rand() % 2;
		int card = REAL_balik[0];
		for (int i = 0; i < REAL_Cards_In_Balik - 1; i++)
			REAL_balik[i] = REAL_balik[i + 1];
		REAL_balik[REAL_Cards_In_Balik - 1] = card;
		if (u == 0) return true;
		return false;
	}

	void Set_Hourse()
	{
		Is_Mustang = true;
	}

	void Set_Pohled()
	{
		Is_Pohled = true;
	}

	void Set_Barel()
	{
		Is_Barel = true;
	}

	void Drink()
	{
		if (hp < max_hp) hp++;
	}

	string Wearpon_Name()
	{
		return nazev_zbrane;
	}

	bool Pocitac()
	{
		return Is_Pocitac;
	}
private:
	bool alive, Is_Pohled, Is_Mustang, Is_Barel, Is_Pocitac;
	string jmeno, jmeno_postava, popis_postava, nazev_role, nazev_zbrane;
	int hp, pocet_karet, index_postava, max_hp, rol, zbran_id;
	Card cards[Max_Cards];
};

using namespace std;
const int Game_Tick = 0;

int main(void)
{
	srand(time(0));
	bool quit = false;
	while (!quit)
	{
		ConsolePrint console;
		system("Color 70");
		system("cls");
		console.PrintMainMenu();
		int p = 0;
		//------------INPUT---------------
		cin >> p;
		while (!cin.good() || (p < 1) || (p > 4))
		{
			cout << "Nespravny vstup! Zadejte cislo od 1 do 4." << endl;
			cin.clear();
			cin.ignore(MAX, '\n');
			cin >> p;
		}
		//--------------------------------
		switch (p)
		{
		case 1:
		{
			//-----------------------------------START GAME------------------------------
			ifstream ifs("balik");
			for (int i = 0; i < Cards_In_Balik; i++) ifs >> REAL_balik[i];
			ifs.close();
			ofstream ofs_replay("last");
			REAL_Cards_In_Balik = Cards_In_Balik;
			for (int i = Cards_In_Balik - 1; i > 0; i--)
			{
				int koef = rand() % (i + 1);
				int z = REAL_balik[koef];
				REAL_balik[koef] = REAL_balik[i];
				REAL_balik[i] = z;
			}
			system("cls");
			cout << "Kolik hracu bude?" << endl;
			int k = 0, com = -1;
			//------------INPUT---------------
			cin >> k;
			while (!cin.good() || (k < 4) || (k > 7))
			{
				cout << "Nespravny vstup! Zadejte cislo od 4 do 7." << endl;
				cin.clear();
				cin.ignore(MAX, '\n');
				cin >> k;
			}
			//--------------------------------
			system("cls");
			cout << "Kolik bude pocitace?" << endl;
			//------------INPUT---------------
			cin >> com;
			while (!cin.good() || (com < 0) || (com > k - 1))
			{
				cout << "Nespravny vstup! Zadejte cislo od 0 do " << k - 1 << "." << endl;
				cin.clear();
				cin.ignore(MAX, '\n');
				cin >> com;
			}
			//--------------------------------
			cout << endl;
			system("cls");
			Player * hrace = new Player[k];
			for (int i = 0; i < k; i++)
			{
				string jmeno_hrace;
				if (i >= k - com)
					cout << "Ted' pojmenujte hrace c." << i + 1 << "(poc.):" << endl;
				else
					cout << "Ted' pojmenujte hrace c." << i + 1 << ":" << endl;
				cin >> jmeno_hrace;
				bool again = false;
				if (i > 0) for (int j = 0; j < i; j++)
					if (jmeno_hrace == hrace[j].Name()) again = true;
				while (again)
				{
					cout << "Uz jste pouzil(a) to jmeno!" << endl;
					cin >> jmeno_hrace;
					again = false;
					if (i > 0) for (int j = 0; j < i; j++)
						if (jmeno_hrace == hrace[j].Name()) again = true;
				}
				if (i >= k - com) hrace[i] = Player(jmeno_hrace, true);
				else hrace[i] = Player(jmeno_hrace, false);
			}
			cout << endl;
			int * heroes = new int[Count_Postava];
			int count = Count_Postava;
			for (int i = 0; i < Count_Postava; i++) heroes[i] = i;
			for (int i = 0; i < k; i++)
			{
				if (!hrace[i].Pocitac())
				{
					system("cls");
					int r = rand() % count;
					int v1 = heroes[r];
					count--;
					for (int j = r; j < count; j++) heroes[j] = heroes[j + 1];
					cout << "Hrac '" << hrace[i].Name() << "', vyber si postavu: " << endl;
					cout << endl;
					cout << "1---1---1---1---1---1---1---1---1---1---1" << endl;
					console.PrintPostava(v1);
					cout << "1---1---1---1---1---1---1---1---1---1---1" << endl;
					cout << endl;
					r = rand() % count;
					int v2 = heroes[r];
					count--;
					if (r < count) for (int j = r; j < count; j++) heroes[j] = heroes[j + 1];
					cout << "2---2---2---2---2---2---2---2---2---2---2" << endl;
					console.PrintPostava(v2);
					cout << "2---2---2---2---2---2---2---2---2---2---2" << endl;
					cout << endl;
					//------------INPUT---------------
					cin >> r;
					while (!cin.good() || (r < 1) || (r > 2))
					{
						cout << "Nespravny vstup! Zadejte cislo od 1 do 2." << endl;
						cin.clear();
						cin.ignore(MAX, '\n');
						cin >> r;
					}
					//--------------------------------
					int v9 = -1;
					if (r == 1) v9 = v1;
					else v9 = v2;
					hrace[i].Set_Postava(v9);
					cout << endl;
					cout << "Hrac " << hrace[i].Name() << " vybral si postavu " << hrace[i].Jmeno_Postavy() << "!" << endl;
					console.Print_Spusob_Skusenosti(v9);
					cout << endl << endl;
				}
				else
				{
					system("cls");
					int r = rand() % count;
					int v1 = heroes[r];
					count--;
					for (int j = r; j < count; j++) heroes[j] = heroes[j + 1];
					cout << "Hrac '" << hrace[i].Name() << "' vybira si postavu..." << endl;
					cout << endl;
					r = rand() % count;
					int v2 = heroes[r];
					count--;
					if (r < count) for (int j = r; j < count; j++) heroes[j] = heroes[j + 1];
					cout << endl;
					int v9 = -1;
					if (r == 1) v9 = v1;
					else v9 = v2;
					hrace[i].Set_Postava(v9);
					cout << endl;
					cout << "Hrac " << hrace[i].Name() << " vybral si postavu " << hrace[i].Jmeno_Postavy() << "!" << endl;
					console.Print_Spusob_Skusenosti(v9);
					cout << endl << endl;
				}
			}
			delete[] heroes;
			int * role = new int[k];

			switch (k)
			{
			case 4:
			{
				role[0] = 0;
				role[1] = 1;
				role[2] = 2;
				role[3] = 2;
			}
			break;
			case 5:
			{

				role[0] = 0;
				role[1] = 1;
				role[2] = 2;
				role[3] = 2;
				role[4] = 3;
			}
			break;
			case 6:
			{
				role[0] = 0;
				role[1] = 1;
				role[2] = 2;
				role[3] = 2;
				role[4] = 3;
				role[5] = 2;
			}
			break;
			case 7:
			{
				role[0] = 0;
				role[1] = 1;
				role[2] = 2;
				role[3] = 2;
				role[4] = 3;
				role[5] = 2;
				role[6] = 3;
			}
			break;
			}
			int k0 = k;
			for (int i = 0; i < k; i++)
			{
				int rol = rand() % k0;
				hrace[i].Set_Rol(role[rol]);
				k0--;
				if (rol < k0) for (int j = rol; j < k0; j++) role[j] = role[j + 1];
			}
			system("cls");
			cout << endl << "Role a postavy byli uspesne prideleni." << endl;
			cout << "          --- HRA SE ZACALA! --- " << endl;
			cout << endl << endl << endl << endl;
			//---------------------------------------------------------------------------

			//----------------------------------TURNS------------------------------------
			bool game_is_on = true;
			int fronta = 0, predchozi = 0;
			bool is_turn_end = false;
			string vysledky = "";
			for (int i = 0; i < k; i++)
				if (hrace[i].Role() == 0) fronta = i;
			while (game_is_on)
			{
				system("Color 70");
				system("cls");
				if (is_turn_end)
				{
					cout << "Hrac " << hrace[predchozi].Jmeno_Postavy() << " (" << hrace[predchozi].Name() << ") ukoncil svuj tah." << endl;
					cout << endl;
					cout << "Vysledky: " << endl;
					cout << vysledky;
					ofs_replay << vysledky;
					vysledky = "";
				}
				is_turn_end = true;
				cout << endl;
				cout << "Hrac " << hrace[fronta].Jmeno_Postavy() << " (" << hrace[fronta].Name() << ") je pripraven?" << endl;
				cout << endl << "Zadejte libovolny znak..." << endl;
				char c00;
				//------------INPUT---------------
				cin >> c00;
				while (!cin.good())
				{
					cout << "Neco se stalo... Uvedte kterykoliv symbol este jednou." << endl;
					cin.clear();
					cin.ignore(MAX, '\n');
					cin >> c00;
				}
				//--------------------------------
				if (!hrace[fronta].Pocitac())
				{
					system("cls");
					system("Color 07");
					vysledky += "\n-----------------------------------------------------------------\n";
					vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") zacal svuj tah \n";
					for (int i = 0; i < k; i++)
					{
						if (i == fronta) hrace[i].Print_Info();
						else hrace[i].Print_Hidden();
					}
					cout << endl;
					cout << "   --- Ted' je tah hrace '" << hrace[fronta].Name() << "' --- " << endl;
					vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal dve karty \n";
					if (hrace[fronta].Postava_ID() == 8)
					{
						bool all_is_ok;
						Card second = hrace[fronta].Special_Get(all_is_ok);
						vysledky += " - Druha karta je " + second.Name() + ". \n";
						if (all_is_ok)
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal treti kartu. \n";
					}
					else
						if (hrace[fronta].Postava_ID() == 0)
						{
							bool vzal = false;
							while (!vzal)
							{
								cout << "Prejete si jednu kartu vzit u nekoho?" << endl;
								int prvni_karta;
								//------------INPUT---------------
								cin >> prvni_karta;
								while (!cin.good())
								{
									cout << "Uvedte cele cislo! -1 znamena souhlas. Ostatni = 'ne'." << endl;
									cin.clear();
									cin.ignore(MAX, '\n');
									cin >> prvni_karta;
								}
								//--------------------------------
								if (prvni_karta == -1)
								{
									cout << "Vyberte hrace: " << endl;
									int cislo8 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											if (hrace[i].Role() != 0) cout << cislo8 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << endl;
											else cout << cislo8 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << " - Serif" << endl;
											cislo8++;
										}
									}
									int cil2, cil3 = 0;
									//------------INPUT---------------
									cin >> cil2;
									while (!cin.good() || (cil2 < 1) || (cil2 > k - 1))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << k - 1 << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cil2;
									}
									//--------------------------------
									cislo8 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											if (cislo8 == cil2)
											{
												cil3 = i;
											}
											cislo8++;
										}
									}
									if (hrace[cil3].Cards_Count() == 0)
									{
										cout << "Hrac nema zadne karte v ruce!" << endl;
									}
									else
									{
										Card getted = hrace[cil3].Get_Card();
										hrace[fronta].Add_Card(getted);
										vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal kartu z ruky hrace " + hrace[cil3].Jmeno_Postavy() + "(" + hrace[cil3].Name() + "). \n";
										cout << " Ziskal(a) jste kartu '" << getted.Name() << "'." << endl;
										hrace[fronta].Get_One_Card(false);
										if (hrace[cil3].Postava_ID() == 3 && hrace[cil3].Cards_Count() == 0)
										{
											hrace[cil3].Get_One_Card(true);
											vysledky += " - Hrac " + hrace[cil3].Jmeno_Postavy() + "(" + hrace[cil3].Name() + ") ziskal kartu. \n";
										}
										vzal = true;
									}
								}
								else
								{
									hrace[fronta].Get_Cards();
									vzal = true;
								}
							}
						}
						else
							if (hrace[fronta].Postava_ID() == 12)
							{
								cout << "Prejete si prvni kartu vzit z odhozovaciho baliku?" << endl;
								int prvni_karta;
								//------------INPUT---------------
								cin >> prvni_karta;
								while (!cin.good())
								{
									cout << "Uvedte cele cislo! -1 znamena souhlas. Ostatni = 'ne'." << endl;
									cin.clear();
									cin.ignore(MAX, '\n');
									cin >> prvni_karta;
								}
								//--------------------------------
								if (prvni_karta == -1)
								{
									hrace[fronta].Get_Cards_Odh();
								}
								else
								{
									hrace[fronta].Get_Cards();
								}
							}
							else hrace[fronta].Get_Cards();
							cout << endl;
							bool turn_end = false, bang_used = false;
							vysledky += "\n";
							while (turn_end != true)
							{
								cout << endl;
								if (hrace[fronta].Cards_Count() == 0 && hrace[fronta].Postava_ID() != 3)
								{
									cout << "Nemate zadne karte v ruce!" << endl;
									cout << endl;
									cout << endl << "Zadejte libovolny znak..." << endl;
									char c00;
									//------------INPUT---------------
									cin >> c00;
									while (!cin.good())
									{
										cout << "Neco se stalo... Uvedte kterykoliv symbol este jednou." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> c00;
									}
									//--------------------------------
									break;
								}
								if (hrace[fronta].Postava_ID() == 3 && hrace[fronta].Cards_Count() == 0)
								{
									hrace[fronta].Get_One_Card(false);
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal kartu. \n";
								}
								cout << "Vase karty (v ruce) jsou: " << endl;
								hrace[fronta].Print_Cards();
								cout << " Kterou chcete pouzit? " << endl;
								int card_number, card_type;
								//------------INPUT---------------
								cin >> card_number;
								while (!cin.good() || (card_number < -1) || (card_number > hrace[fronta].Cards_Count()))
								{
									cout << "Nespravny vstup! Zadejte cislo od -1 do " << hrace[fronta].Cards_Count() << "." << endl;
									cin.clear();
									cin.ignore(MAX, '\n');
									cin >> card_number;
								}
								//--------------------------------
								if (card_number == 0) break;
								if (card_number != -1)
								{
									card_number--;
									card_type = hrace[fronta].Card_Type(card_number);
									if (card_type == 1 && hrace[fronta].Postava_ID() == 10) card_type = 0;
								}
								else card_type = -1;
								switch (card_type)
								{
								case -1:
								{
									if (hrace[fronta].Postava_ID() == 5)
									{
										if (hrace[fronta].Cards_Count() < 2)
											cout << "Nemate dost karet!" << endl;
										else
										{
											if (hrace[fronta].HP_Count() >= hrace[fronta].HP_Count_Max())
												cout << "Mate dost zivotu!" << endl;
											else
											{
												hrace[fronta].Remove_Card(0, true);
												hrace[fronta].Remove_Card(0, true);
												hrace[fronta].Drink();
												cout << "Ztracil(a) jste dve karty a ziskal(a) jste jeden zivot." << endl;
												vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal zivot a ztracil dve karty. \n";
											}
										}
									}
									else
										cout << " VASE ID JE " << hrace[fronta].Postava_ID() << endl;
								}
								break;
								case 0:
								{
									if (bang_used)
									{
										cout << endl << "Uz jste jednou pouzil(a) kartu 'BANG!'." << endl;
										break;
									}
									cout << " Koho chcete zabit? " << endl;
									int cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											int distance = abs(fronta - i);
											if ((k - distance) < distance) distance = k - distance;
											distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
											if (hrace[fronta].Distance_Gun() >= distance)
											{
												if (hrace[i].Role() != 0) cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << endl;
												else cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << " - Serif" << endl;
												cislo9++;
											}
										}
									}
									if (cislo9 == 1)
									{
										cout << endl << "Nemuzete dostat do zadneho hrace!" << endl;
										break;
									}
									int cil, cil1 = 0;
									//------------INPUT---------------
									cin >> cil;
									while (!cin.good() || (cil < 1) || (cil > cislo9 - 1))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << cislo9 - 1 << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cil;
									}
									//--------------------------------
									cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											int distance = abs(fronta - i);
											if ((k - distance) < distance) distance = k - distance;
											distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
											if (hrace[fronta].Distance_Gun() >= distance)
											{
												if (cislo9 == cil)
												{
													cil1 = i;
												}
												cislo9++;
											}
										}
									}
									cout << endl << " Pouzil(a) jste kartu 'BANG!'." << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'BANG!' proti hracu " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ")  \n";
									bool barel;
									if (hrace[cil1].Barel())
									{
										barel = hrace[cil1].Use_Barel();
										if (barel)
										{
											cout << endl << " Hrac " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ") pouzil 'Barel'." << endl;
											cout << "  A zachranila mu zivot! " << endl;
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Barel' a zachranil si zivot. \n";
											if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
											hrace[fronta].Remove_Card(card_number, true);
											break;
										}
										else
										{
											cout << endl << " Hrac " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ") pouzil 'Barel'." << endl;
											cout << "  Ale nezachranila mu zivot! " << endl;
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Barel', ale to nepomohlo. \n";
										}
									}

									if (hrace[cil1].Postava_ID() == 4)
									{
										barel = hrace[cil1].Use_Barel();
										if (barel)
										{
											cout << endl << " Hrac " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ") pouzil schopnost 'Barel'." << endl;
											cout << "  A zachranila mu zivot! " << endl;
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil schopnost 'Barel' a zachranil si zivot. \n";
											if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
											hrace[fronta].Remove_Card(card_number, true);
											break;
										}
										else
										{
											cout << endl << " Hrac " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ") pouzil schopnost 'Barel'." << endl;
											cout << "  Ale nezachranila mu zivot! " << endl;
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil schopnost 'Barel', ale to nepomohlo. \n";
										}
									}
									bool ztraceno = false;
									if (hrace[cil1].Pocet_Karet_Typu(1) > 0)
									{
										hrace[cil1].Pouzit_Vedle();
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Vedle!' \n";
										if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
										{
											hrace[cil1].Get_One_Card(true);
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
										}
									}
									else
									{
										hrace[cil1].Zasadit();
										if (hrace[cil1].HP_Count() > 0)
										{
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ztracil zivot \n";
											if (hrace[cil1].Postava_ID() == 7)
											{
												hrace[cil1].Get_One_Card(true);
												vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
											}
											if (hrace[cil1].Postava_ID() == 15 && hrace[fronta].Cards_Count() > 1)
											{
												ztraceno = true;
												vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu z ruky hrace " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + "). \n";
											}
										}
									}
									if (hrace[cil1].Pocet_Karet_Typu(9) > 0 && hrace[cil1].HP_Count() <= 0)
									{
										hrace[cil1].Pouzit_Pivo();
										hrace[cil1].Drink();
										cout << endl << " Hrac " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ") pouzil 'Pivo' a zachranil si zivot!" << endl;
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil 'Pivo' \n";
										if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
										{
											hrace[cil1].Get_One_Card(true);
											vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
										}
									}
									if (hrace[cil1].HP_Count() <= 0)
									{
										cout << "Hrac " << hrace[fronta].Jmeno_Postavy() << " (" << hrace[fronta].Name() << ") zabil hrace " << hrace[cil1].Jmeno_Postavy() << " (" << hrace[cil1].Name() << ")!" << endl;
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") zemrel \n";
										cout << "A to byl " << hrace[cil1].Role_Name() << "!" << endl;
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") byl " + hrace[cil1].Role_Name() + " \n";
										switch (hrace[cil1].Role())
										{
										case 0:
										{
											bool is_odpadlik = false;
											bool is_bandit = false;
											bool is_pomocnik = false;
											for (int j = 0; j < k; j++)
											{
												if (j != cil1)
												{
													if (hrace[j].Role() == 1) is_odpadlik = true;
													if (hrace[j].Role() == 2) is_bandit = true;
													if (hrace[j].Role() == 3) is_pomocnik = true;
												}
											}
											if (is_bandit || is_pomocnik)
											{
												cout << "Bandity vyhrali!" << endl;
												vysledky += " - Bandity vyhrali! \n";
											}
											else if (is_odpadlik)
											{
												cout << "Odpadlik vyhral!" << endl;
												vysledky += " - Odpadlik vyhral! \n";
											}
											game_is_on = false; turn_end = true; break;
										}
										break;
										case 1:
										{
											bool is_avil = false;
											for (int j = 0; j < k; j++)
											{
												if (j != cil1)
												{
													if (hrace[j].Role() == 1) is_avil = true;
													if (hrace[j].Role() == 2) is_avil = true;
												}
											}
											if (is_avil == false)
											{
												cout << "Serif a pomocniky vyhrali!" << endl;
												vysledky += " - Serif a pomocniky vyhrali! \n";
												game_is_on = false; turn_end = true; break;
											}
										}
										break;
										case 2:
										{
											bool is_avil = false;
											for (int j = 0; j < k; j++)
											{
												if (j != cil1)
												{
													if (hrace[j].Role() == 1) is_avil = true;
													if (hrace[j].Role() == 2) is_avil = true;
												}
											}
											if (is_avil == false)
											{
												cout << "Serif a pomocniky vyhrali!" << endl;
												vysledky += " - Serif a pomocniky vyhrali! \n";
												game_is_on = false; turn_end = true; break;
											}
											else
											{
												cout << "Ziskej odmenu za zabiti bandity!" << endl;
												vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal dve karty jako odmenu \n";
												hrace[fronta].Get_Cards();
											}
										}
										break;
										case 3:
										{
											if (hrace[fronta].Role() == 0)
											{
												cout << endl << "Serif zabil sveho pomocnika!" << endl;
												cout << "Serif ztratil vsechne sve karty." << endl << endl;
												vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ztratil vsechne sve karty \n";
												hrace[fronta].Delete_All_Cards();
											}
										}
										break;
										}
										hrace[cil1].Kill();
										k--;
										if (cil1 < fronta) fronta--;
										if (cil1 < k)
											for (int j = cil1; j < k; j++) hrace[j] = hrace[j + 1];
									}
									if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
									hrace[fronta].Remove_Card(card_number, true);
									if (ztraceno)
									{
										Card getted = hrace[fronta].Get_Card();
										hrace[cil1].Add_Card(getted);
										cout << " Ztracil(a) jste kartu '" << getted.Name() << "'." << endl;
									}
								}
								break;
								case 1:
								{
									cout << endl << " Kartu 'Vedle!' nemuzete pouzivat behem sveho tahu! " << endl;
								}
								break;
								case 2:
								{
									hrace[fronta].Set_Wearpon(2);
									cout << endl << " Ted' mate novou zbran '" << hrace[fronta].Wearpon_Name() << "'!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 3:
								{
									hrace[fronta].Set_Wearpon(1);
									bang_used = false;
									cout << endl << " Ted' mate novou zbran '" << hrace[fronta].Wearpon_Name() << "'!" << endl;
									cout << " Ted' muzete pouzivat libovolny pocet karet 'BANG!'" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 4:
								{
									hrace[fronta].Set_Wearpon(3);
									cout << endl << " Ted' mate novou zbran '" << hrace[fronta].Wearpon_Name() << "'!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 5:
								{
									hrace[fronta].Set_Wearpon(4);
									cout << endl << " Ted' mate novou zbran '" << hrace[fronta].Wearpon_Name() << "'!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 6:
								{
									hrace[fronta].Set_Wearpon(5);
									cout << endl << " Ted' mate novou zbran '" << hrace[fronta].Wearpon_Name() << "'!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 7:
								{
									if (hrace[fronta].Mustang())
									{
										cout << endl << "Uz mate jedneho mustanga!" << endl;
										break;
									}
									hrace[fronta].Set_Hourse();
									cout << endl << " Ted' mate u sobe mustanga!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si mustanga\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 8:
								{
									if (hrace[fronta].Pohled())
									{
										cout << endl << "Uz mate jeden pohled!" << endl;
										break;
									}
									hrace[fronta].Set_Pohled();
									cout << endl << " Ted' mate u sobe pohled!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si pohled\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 9:
								{
									if (hrace[fronta].HP_Count_Max() <= hrace[fronta].HP_Count())
									{
										cout << endl << "Uz mate maximalni pocet zivotu!" << endl;
										break;
									}
									hrace[fronta].Drink();
									cout << endl << " Vupil(a) jste pivo. Ted' mate " << hrace[fronta].HP_Count() << "/" << hrace[fronta].HP_Count_Max() << " zivotu!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil pivo. \n";
									hrace[fronta].Remove_Card(card_number, true);
								}
								break;
								case 10:
								{
									cout << endl;
									bool heated = false;
									for (int i = 0; i < k; i++)
									{
										if (hrace[i].HP_Count() < hrace[i].HP_Count_Max())
										{
											if (!heated) vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pozil 'Saloon'. \n";
											heated = true;
											hrace[i].Drink();
											if (i == fronta) cout << " Ziskal(a) jste zivot. Ted' mate " << hrace[i].HP_Count() << "/" << hrace[i].HP_Count_Max() << " zivotu." << endl;
											else cout << " Hrac " << hrace[i].Jmeno_Postavy() << "(" << hrace[i].Name() << ") ziskal zivot. Ted' ma " << hrace[i].HP_Count() << "/" << hrace[i].HP_Count_Max() << " zivotu." << endl;
											vysledky += " - Hrac " + hrace[i].Jmeno_Postavy() + "(" + hrace[i].Name() + ") ziskal zivot. \n";
										}
									}
									if (!heated)
									{
										cout << "Vsichni hrace maji maximalni pocet zivotu!" << endl;
										break;
									}
									hrace[fronta].Remove_Card(card_number, true);
								}
								break;
								case 11:
								{
									cout << " U ktereho hrace chcete odhodit kartu? " << endl;
									int cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											if (hrace[i].Role() != 0) cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << endl;
											else cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << " - Serif" << endl;
											cislo9++;
										}
									}
									int cil, cil1 = 0;
									//------------INPUT---------------
									cin >> cil;
									while (!cin.good() || (cil < 1) || (cil > k - 1))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << k - 1 << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cil;
									}
									//--------------------------------
									cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											if (cislo9 == cil)
											{
												cil1 = i;
											}
											cislo9++;
										}
									}
									cout << " Kterou kartu chcete odhodit? " << endl;
									int max_card_num = hrace[cil1].Print_Cards_Stole();
									if (max_card_num == -1)
									{
										cout << " Tento hrac nema zadne karty!" << endl;
										break;
									}
									int cislo_karty;
									//------------INPUT---------------
									cin >> cislo_karty;
									while (!cin.good() || (cislo_karty < 1) || (cislo_karty > max_card_num))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << max_card_num << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cislo_karty;
									}
									//--------------------------------
									Card stolen = Card();
									stolen.Set_Card(hrace[cil1].Stole_Card(cislo_karty, true));
									cout << " Odhodil(a) jste kartu '" << stolen.Name() << "' u hraca " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ")." << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'Kraska'. \n";
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") odhodil kartu '" + stolen.Name() + "'. \n";
									if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
									{
										hrace[cil1].Get_One_Card(true);
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
									}
									hrace[fronta].Remove_Card(card_number, true);
								}
								break;
								case 12:
								{
									cout << " U koho chcete vzit kartu? " << endl;
									int cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											int distance = abs(fronta - i);
											if ((k - distance) < distance) distance = k - distance;
											distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
											if (1 >= distance)
											{
												if (hrace[i].Role() != 0) cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << endl;
												else cout << cislo9 << ". " << hrace[i].Jmeno_Postavy() << " (" << hrace[i].Name() << ")" << " - Serif" << endl;
												cislo9++;
											}
										}
									}
									if (cislo9 == 1)
									{
										cout << endl << "Nemuzete dostat do zadneho hrace!" << endl;
										break;
									}
									int cil, cil1 = 0;
									//------------INPUT---------------
									cin >> cil;
									while (!cin.good() || (cil < 1) || (cil > cislo9 - 1))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << cislo9 - 1 << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cil;
									}
									//--------------------------------
									cislo9 = 1;
									for (int i = 0; i < k; i++)
									{
										if (i != fronta)
										{
											int distance = abs(fronta - i);
											if ((k - distance) < distance) distance = k - distance;
											distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
											if (1 >= distance)
											{
												if (cislo9 == cil)
												{
													cil1 = i;
												}
												cislo9++;
											}
										}
									}
									cout << " Kterou kartu chcete si vzit? " << endl;
									int max_card_num = hrace[cil1].Print_Cards_Stole();
									if (max_card_num == -1)
									{
										cout << " Tento hrac nema zadne karty!" << endl;
										break;
									}
									int cislo_karty;
									//------------INPUT---------------
									cin >> cislo_karty;
									while (!cin.good() || (cislo_karty < 1) || (cislo_karty > max_card_num))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << max_card_num << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> cislo_karty;
									}
									//--------------------------------
									Card stolen = Card();
									stolen.Set_Card(hrace[cil1].Stole_Card(cislo_karty, false));
									hrace[fronta].Add_Card(stolen);
									cout << " Vzal(a) jste kartu '" << stolen.Name() << "' u hraca " << hrace[cil1].Jmeno_Postavy() << "(" << hrace[cil1].Name() << ")." << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'Panika'. \n";
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ztracil kartu '" + stolen.Name() + "'. \n";
									if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
									{
										hrace[cil1].Get_One_Card(true);
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
									}
									hrace[fronta].Remove_Card(card_number, true);
								}
								break;
								case 13:
								{
									if (hrace[fronta].Barel())
									{
										cout << endl << "Uz mate jednu barel!" << endl;
										break;
									}
									hrace[fronta].Set_Barel();
									cout << endl << " Ted' mate u sobe barel!" << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si barel\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 14:
								{
									hrace[fronta].Get_Cards();
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil 'Diligenza'\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								case 15:
								{
									hrace[fronta].Use_Wells_Fargo();
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil 'Wells Fargo' a ziskal 3 karty\n";
									hrace[fronta].Remove_Card(card_number, false);
								}
								break;
								}
							}
							vysledky += "\n";
							if (game_is_on)
							{
								while (hrace[fronta].Cards_Count() > hrace[fronta].HP_Count())
								{
									cout << endl << " Mate " << hrace[fronta].Cards_Count() - hrace[fronta].HP_Count() << " karet navic!" << endl << endl;
									cout << "Vase karty (v ruce) jsou: " << endl;
									hrace[fronta].Print_Cards();
									cout << "Odhod'te kartu:" << endl;
									int h0;
									//------------INPUT---------------
									cin >> h0;
									while (!cin.good() || (h0 < 1) || (h0 > hrace[fronta].Cards_Count()))
									{
										cout << "Nespravny vstup! Zadejte cislo od 1 do " << hrace[fronta].Cards_Count() << "." << endl;
										cin.clear();
										cin.ignore(MAX, '\n');
										cin >> h0;
									}
									//--------------------------------
									cout << "Karta '" << hrace[fronta].Card_Name(h0 - 1) << "' byla odhozena." << endl;
									vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") odhodil kartu \n";
									hrace[fronta].Remove_Card(h0 - 1, true);
								}
								cout << " Ukoncil(a) jste svuj tah. " << endl;
								vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ukoncil svuj tah \n";
								vysledky += "-----------------------------------------------------------------\n\n";
								predchozi = fronta;
								fronta++;
								if (fronta >= k) fronta = 0;
							}
				}
				else
				{
					vysledky += "\n-----------------------------------------------------------------\n";
					vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") zacal svuj tah \n";
					vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal dve karty \n";
					if (hrace[fronta].Postava_ID() == 8)
					{
						bool all_is_ok;
						Card second = hrace[fronta].Special_Get(all_is_ok);
						vysledky += " - Druha karta je " + second.Name() + ". \n";
						if (all_is_ok)
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal treti kartu. \n";
					}
					else
						hrace[fronta].Get_Cards();
					bool turn_end = false, bang_used = false;
					vysledky += "\n";
					bool kraska_available = true;
					bool panic_available = true;
					bool bang_available = true;
					while (turn_end != true)
					{
						if (hrace[fronta].Cards_Count() == 0 && hrace[fronta].Postava_ID() != 3) break;
						if (hrace[fronta].Postava_ID() == 3 && hrace[fronta].Cards_Count() == 0)
						{
							hrace[fronta].Get_One_Card(true);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal kartu. \n";
						}
						int card_number, card_type;
						if (hrace[fronta].Pocet_Karet_Typu(15) > 0) card_number = hrace[fronta].Get_First_Position_Of_Card(15);
						else if (hrace[fronta].Pocet_Karet_Typu(14) > 0) card_number = hrace[fronta].Get_First_Position_Of_Card(14);
						else if (hrace[fronta].Pocet_Karet_Typu(13) > 0 && !hrace[fronta].Barel()) card_number = hrace[fronta].Get_First_Position_Of_Card(13);
						else if (hrace[fronta].Pocet_Karet_Typu(8) > 0 && !hrace[fronta].Pohled()) card_number = hrace[fronta].Get_First_Position_Of_Card(8);
						else if (hrace[fronta].Pocet_Karet_Typu(7) > 0 && !hrace[fronta].Mustang()) card_number = hrace[fronta].Get_First_Position_Of_Card(7);
						else if (hrace[fronta].Pocet_Karet_Typu(2) > 0 && hrace[fronta].Zbran_ID() < 2) card_number = hrace[fronta].Get_First_Position_Of_Card(2);
						else if (hrace[fronta].Pocet_Karet_Typu(3) > 0 && hrace[fronta].Zbran_ID() < 1) card_number = hrace[fronta].Get_First_Position_Of_Card(3);
						else if (hrace[fronta].Pocet_Karet_Typu(4) > 0 && hrace[fronta].Zbran_ID() < 3) card_number = hrace[fronta].Get_First_Position_Of_Card(4);
						else if (hrace[fronta].Pocet_Karet_Typu(5) > 0 && hrace[fronta].Zbran_ID() < 4) card_number = hrace[fronta].Get_First_Position_Of_Card(5);
						else if (hrace[fronta].Pocet_Karet_Typu(6) > 0 && hrace[fronta].Zbran_ID() < 5) card_number = hrace[fronta].Get_First_Position_Of_Card(6);
						else if (hrace[fronta].Pocet_Karet_Typu(9) > 0 && hrace[fronta].HP_Count() < hrace[fronta].HP_Count_Max()) card_number = hrace[fronta].Get_First_Position_Of_Card(9);
						else if (hrace[fronta].Pocet_Karet_Typu(10) > 0 && hrace[fronta].HP_Count() < hrace[fronta].HP_Count_Max()) card_number = hrace[fronta].Get_First_Position_Of_Card(10);
						else if (hrace[fronta].Pocet_Karet_Typu(11) > 0 && kraska_available) card_number = hrace[fronta].Get_First_Position_Of_Card(11);
						else if (hrace[fronta].Pocet_Karet_Typu(12) > 0 && panic_available) card_number = hrace[fronta].Get_First_Position_Of_Card(12);
						else if (hrace[fronta].Pocet_Karet_Typu(0) > 0 && bang_available && !bang_used) card_number = hrace[fronta].Get_First_Position_Of_Card(0);
						else card_number = 0;
						if (card_number == 0) break;
						if (card_number != -1)
						{
							card_number--;
							card_type = hrace[fronta].Card_Type(card_number);
							if (card_type == 1 && hrace[fronta].Postava_ID() == 10) card_type = 0;
						}
						else card_type = 0;
						switch (card_type)
						{
						case 0:
						{
							if (bang_used)
							{
								bang_available = false;
								break;
							}
							int cislo9 = 0;
							int * players;
							for (int i = 0; i < k; i++)
							{
								if (i != fronta)
								{
									int distance = abs(fronta - i);
									if ((k - distance) < distance) distance = k - distance;
									distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
									if (hrace[fronta].Distance_Gun() >= distance) cislo9++;
								}
							}
							if (cislo9 == 0)
							{
								bang_available = false;
								break;
							}
							else
							{
								players = new int[cislo9];
								cislo9 = 0;
								for (int i = 0; i < k; i++)
									if (i != fronta)
									{
										int distance = abs(fronta - i);
										if ((k - distance) < distance) distance = k - distance;
										distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
										if (hrace[fronta].Distance_Gun() >= distance)
										{
											players[cislo9] = i;
											cislo9++;
										}
									}
							}
							int target = -1;
							switch (hrace[fronta].Role())
							{
							case 0:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 1:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 0)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 2:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 0)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 2)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 3:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							}
							if (target == -1)
							{
								bang_available = false;
								break;
							}
							int cil1;
							cil1 = players[target];
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'BANG!' proti hracu " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ")  \n";
							bool barel;
							if (hrace[cil1].Barel())
							{
								barel = hrace[cil1].Use_Barel();
								if (barel)
								{
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Barel' a zachranil si zivot. \n";
									if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
									hrace[fronta].Remove_Card(card_number, true);
									break;
								}
								else
								{
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Barel', ale to nepomohlo. \n";
								}
							}

							if (hrace[cil1].Postava_ID() == 4)
							{
								barel = hrace[cil1].Use_Barel();
								if (barel)
								{
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil schopnost 'Barel' a zachranil si zivot. \n";
									if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
									hrace[fronta].Remove_Card(card_number, true);
									break;
								}
								else
								{
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil schopnost 'Barel', ale to nepomohlo. \n";
								}
							}
							bool ztraceno = false;
							if (hrace[cil1].Pocet_Karet_Typu(1) > 0)
							{
								hrace[cil1].Pouzit_Vedle();
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil kartu 'Vedle!' \n";
								if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
								{
									hrace[cil1].Get_One_Card(true);
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
								}
							}
							else
							{
								hrace[cil1].Zasadit();
								if (hrace[cil1].HP_Count() > 0)
								{
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ztracil zivot \n";
									if (hrace[cil1].Postava_ID() == 7)
									{
										hrace[cil1].Get_One_Card(true);
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
									}
									if (hrace[cil1].Postava_ID() == 15 && hrace[fronta].Cards_Count() > 1)
									{
										ztraceno = true;
										vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu z ruky hrace " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + "). \n";
									}
								}
							}
							if (hrace[cil1].Pocet_Karet_Typu(9) > 0 && hrace[cil1].HP_Count() <= 0)
							{
								hrace[cil1].Pouzit_Pivo();
								hrace[cil1].Drink();
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") pouzil 'Pivo' \n";
								if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
								{
									hrace[cil1].Get_One_Card(true);
									vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
								}
							}
							if (hrace[cil1].HP_Count() <= 0)
							{
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") zemrel \n";
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") byl " + hrace[cil1].Role_Name() + " \n";
								switch (hrace[cil1].Role())
								{
								case 0:
								{
									bool is_odpadlik = false;
									bool is_bandit = false;
									bool is_pomocnik = false;
									for (int j = 0; j < k; j++)
									{
										if (j != cil1)
										{
											if (hrace[j].Role() == 1) is_odpadlik = true;
											if (hrace[j].Role() == 2) is_bandit = true;
											if (hrace[j].Role() == 3) is_pomocnik = true;
										}
									}
									if (is_bandit || is_pomocnik)
									{
										vysledky += " - Bandity vyhrali! \n";
									}
									else if (is_odpadlik)
									{
										vysledky += " - Odpadlik vyhral! \n";
									}
									game_is_on = false; turn_end = true; break;
								}
								break;
								case 1:
								{
									bool is_avil = false;
									for (int j = 0; j < k; j++)
									{
										if (j != cil1)
										{
											if (hrace[j].Role() == 1) is_avil = true;
											if (hrace[j].Role() == 2) is_avil = true;
										}
									}
									if (is_avil == false)
									{
										vysledky += " - Serif a pomocniky vyhrali! \n";
										game_is_on = false; turn_end = true; break;
									}
								}
								break;
								case 2:
								{
									bool is_avil = false;
									for (int j = 0; j < k; j++)
									{
										if (j != cil1)
										{
											if (hrace[j].Role() == 1) is_avil = true;
											if (hrace[j].Role() == 2) is_avil = true;
										}
									}
									if (is_avil == false)
									{
										vysledky += " - Serif a pomocniky vyhrali! \n";
										game_is_on = false; turn_end = true; break;
									}
									else
									{
										vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ziskal dve karty jako odmenu \n";
										hrace[fronta].Get_Cards();
									}
								}
								break;
								case 3:
								{
									if (hrace[fronta].Role() == 0)
									{
										vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ztratil vsechne sve karty \n";
										hrace[fronta].Delete_All_Cards();
									}
								}
								break;
								}
								hrace[cil1].Kill();
								k--;
								if (cil1 < fronta) fronta--;
								if (cil1 < k)
									for (int j = cil1; j < k; j++) hrace[j] = hrace[j + 1];
							}
							if (hrace[fronta].Postava_ID() != 2 && hrace[fronta].Zbran_ID() != 1) bang_used = true;
							hrace[fronta].Remove_Card(card_number, true);
							if (ztraceno)
							{
								Card getted = hrace[fronta].Get_Card();
								hrace[cil1].Add_Card(getted);
							}
						}
						break;
						case 2:
						{
							hrace[fronta].Set_Wearpon(2);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 3:
						{
							hrace[fronta].Set_Wearpon(1);
							bang_used = false;
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 4:
						{
							hrace[fronta].Set_Wearpon(3);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 5:
						{
							hrace[fronta].Set_Wearpon(4);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 6:
						{
							hrace[fronta].Set_Wearpon(5);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si zbran' '" + hrace[fronta].Wearpon_Name() + "'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 7:
						{
							if (hrace[fronta].Mustang())
							{
								break;
							}
							hrace[fronta].Set_Hourse();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si mustanga\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 8:
						{
							if (hrace[fronta].Pohled()) break;
							hrace[fronta].Set_Pohled();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si pohled\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 9:
						{
							if (hrace[fronta].HP_Count_Max() <= hrace[fronta].HP_Count())
							{
								break;
							}
							hrace[fronta].Drink();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil pivo. \n";
							hrace[fronta].Remove_Card(card_number, true);
						}
						break;
						case 10:
						{
							cout << endl;
							bool heated = false;
							for (int i = 0; i < k; i++)
							{
								if (hrace[i].HP_Count() < hrace[i].HP_Count_Max())
								{
									if (!heated) vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pozil 'Saloon'. \n";
									heated = true;
									hrace[i].Drink();
									vysledky += " - Hrac " + hrace[i].Jmeno_Postavy() + "(" + hrace[i].Name() + ") ziskal zivot. \n";
								}
							}
							if (!heated) break;
							hrace[fronta].Remove_Card(card_number, true);
						}
						break;
						case 11:
						{
							int target = -1;
							switch (hrace[fronta].Role())
							{
							case 0:
							{
								for (int i = 0; i < k; i++)
								{
									if (hrace[i].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 1:
							{
								for (int i = 0; i < k; i++)
								{
									if (hrace[i].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 0)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 2:
							{
								for (int i = 0; i < k; i++)
								{
									if (hrace[i].Role() == 0)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 1)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 2)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 3:
							{
								for (int i = 0; i < k; i++)
								{
									if (hrace[i].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < k; i++)
										if (hrace[i].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							}
							if (target == -1)
							{
								kraska_available = false;
								break;
							}
							int cil1 = target;
							int max_card_num = hrace[cil1].Print_Cards_Stole();
							if (max_card_num == -1)
							{
								kraska_available = false;
								break;
							}
							int cislo_karty = 1;
							Card stolen = Card();
							stolen.Set_Card(hrace[cil1].Stole_Card(cislo_karty, true));
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'Kraska'. \n";
							vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") odhodil kartu '" + stolen.Name() + "'. \n";
							if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
							{
								hrace[cil1].Get_One_Card(true);
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
							}
							hrace[fronta].Remove_Card(card_number, true);
						}
						break;
						case 12:
						{
							int cislo9 = 0;
							int * players;
							for (int i = 0; i < k; i++)
							{
								if (i != fronta)
								{
									int distance = abs(fronta - i);
									if ((k - distance) < distance) distance = k - distance;
									distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
									if (1 >= distance) cislo9++;
								}
							}
							if (cislo9 == 0)
							{
								panic_available = false;
								break;
							}
							else
							{
								players = new int[cislo9];
								cislo9 = 0;
								for (int i = 0; i < k; i++)
									if (i != fronta)
									{
										int distance = abs(fronta - i);
										if ((k - distance) < distance) distance = k - distance;
										distance += hrace[fronta].Distace_From() + hrace[i].Distance_To();
										if (1 >= distance)
										{
											players[cislo9] = i;
											cislo9++;
										}
									}
							}
							int target = -1;
							switch (hrace[fronta].Role())
							{
							case 0:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 1:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 0)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 2:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 0)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 3)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 2)
										{
											target = i;
											break;
										}
								}
							}
							break;
							case 3:
							{
								for (int i = 0; i < cislo9; i++)
								{
									if (hrace[players[i]].Role() == 2)
									{
										target = i;
										break;
									}
								}
								if (target == -1)
								{
									for (int i = 0; i < cislo9; i++)
										if (hrace[players[i]].Role() == 1)
										{
											target = i;
											break;
										}
								}
							}
							break;
							}
							if (target == -1)
							{
								bang_available = false;
								break;
							}
							int cil1 = 0;
							cil1 = players[target];
							int max_card_num = hrace[cil1].Print_Cards_Stole();
							if (max_card_num == -1)
							{
								panic_available = false;
								break;
							}
							int cislo_karty = 1;
							Card stolen = Card();
							stolen.Set_Card(hrace[cil1].Stole_Card(cislo_karty, false));
							hrace[fronta].Add_Card(stolen);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil kartu 'Panika'. \n";
							vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ztracil kartu '" + stolen.Name() + "'. \n";
							if (hrace[cil1].Postava_ID() == 3 && hrace[cil1].Cards_Count() == 0)
							{
								hrace[cil1].Get_One_Card(true);
								vysledky += " - Hrac " + hrace[cil1].Jmeno_Postavy() + "(" + hrace[cil1].Name() + ") ziskal kartu. \n";
							}
							hrace[fronta].Remove_Card(card_number, true);
						}
						break;
						case 13:
						{
							if (hrace[fronta].Barel())
							{
								break;
							}
							hrace[fronta].Set_Barel();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") vzal si barel\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 14:
						{
							hrace[fronta].Get_Cards();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil 'Diligenza'\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						case 15:
						{
							hrace[fronta].Use_Wells_Fargo();
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") pouzil 'Wells Fargo' a ziskal 3 karty\n";
							hrace[fronta].Remove_Card(card_number, false);
						}
						break;
						}
					}
					vysledky += "\n";
					if (game_is_on)
					{
						while (hrace[fronta].Cards_Count() > hrace[fronta].HP_Count())
						{
							int h0 = 1;
							if (hrace[fronta].Pocet_Karet_Typu(0) > 0)
								h0 = hrace[fronta].Get_First_Position_Of_Card(0);
							vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") odhodil kartu \n";
							hrace[fronta].Remove_Card(h0 - 1, true);
						}
						vysledky += " - Hrac " + hrace[fronta].Jmeno_Postavy() + "(" + hrace[fronta].Name() + ") ukoncil svuj tah \n";
						vysledky += "-----------------------------------------------------------------\n\n";
						predchozi = fronta;
						fronta++;
						if (fronta >= k) fronta = 0;
					}
				}
			}
			//---------------------------------------------------------------------------

			//-----------------------------END-------------------------------------------
			if (!hrace[fronta].Pocitac())
			{
				cout << endl << "Zadejte libovolny znak..." << endl;
				char c00;
				//------------INPUT---------------
				cin >> c00;
				while (!cin.good())
				{
					cout << "Neco se stalo... Uvedte kterykoliv symbol este jednou." << endl;
					cin.clear();
					cin.ignore(MAX, '\n');
					cin >> c00;
				}
				//--------------------------------
			}
			system("Color 70");
			system("cls");
			cout << "Hrac " << hrace[predchozi].Jmeno_Postavy() << " (" << hrace[predchozi].Name() << ") ukoncil svuj tah." << endl;
			cout << endl;
			cout << "Vysledky: " << endl;
			cout << vysledky;
			ofs_replay << vysledky;
			ofs_replay.close();
			cout << endl;
			cout << endl << "Prejete si zapsat tuto hru? (yes/no)" << endl;
			string zapsat;
			//------------INPUT---------------
			cin >> zapsat;
			while (zapsat != "yes" && zapsat != "no")
			{
				cout << "Nespravny vstup! Zadejte 'yes' nebo 'no'." << endl;
				cin.clear();
				cin.ignore(MAX, '\n');
				cin >> zapsat;
			}
			//--------------------------------
			if (zapsat == "yes")
			{
				time_t t = time(0);
				tm now = * localtime(&t);
				string nazev;
				stringstream ss;
				ss << now.tm_year + 1900 << "_" << now.tm_mon + 1 << "_" << now.tm_mday << "_" << now.tm_hour << "_" << now.tm_min;
				ss >> nazev;
				int succ = rename("last", nazev.c_str());
				if (succ == 0) cout << "Hra byla ulozena jako '" << nazev << "'." << endl;
				else cout << "Neco se stalo... " << endl;
			}
			else cout << "Ulozeni hru bylo zruseno." << endl;
			system("pause");
			//---------------------------------------------------------------------------
		}
		break;
		case 2:
		{
			system("cls");
			cout << "Ukazte nazev hry, kteru chcete nahrat:" << endl;
			string nazev;
			cin >> nazev;
			ifstream fin(nazev);
			system("cls");
			if (!fin.is_open())
				cout << "Error!" << endl;
			else
				while (!fin.eof())
				{
					char s[800];
					fin.getline(s, 800);
					cout << s << endl;
				}
			fin.close();
			system("pause");
		}
		break;
		case 3:
		{
			ifstream fin("pravidla");
			system("cls");
			if (!fin.is_open())
				cout << "Error!" << endl;
			else
				while (!fin.eof())
				{
					char s[800];
					fin.getline(s, 800);
					cout << s << endl;
				}
			fin.close();
			system("pause");
		}
		break;
		case 4:
		{
			quit = true;
		}
		break;
		}
	}
	return 0;
}