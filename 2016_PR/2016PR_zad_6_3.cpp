#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool czyCezar(string przed, string po)
{
	int przesuniecie1 = po[0]-przed[0], przesuniecie2;
	if(przesuniecie1<0)
		przesuniecie1 += 26;

	for(int i = 1; i < przed.length(); i++)
	{
		przesuniecie2 = po[i]-przed[i];
		if(przesuniecie2<0)
			przesuniecie2 += 26;
	
		if(przesuniecie1 != przesuniecie2)
			return 0;
	}
	return 1;
}

int main()
{
	fstream plikin, plikout;
	string jawny, szyfr;
	plikin.open("dane_6_3.txt", ios::in);
	plikout.open("wyniki_6_3.txt", ios::out);
	while(!plikin.eof())
	{
		plikin >> jawny >> szyfr;
		if(!czyCezar(jawny, szyfr))
			plikout << jawny << endl;
	}
	plikin.close();
	plikout.close();
	return 0;
}
