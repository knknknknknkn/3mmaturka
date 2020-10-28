#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

bool czyMaKont(int i, int j, int px[320][200])
{
	if(i != 0)
		if(abs(px[i-1][j]-px[i][j])>128)
			return 1;
	if(i != 319)
		if(abs(px[i+1][j]-px[i][j])>128)
			return 1;
	if(j != 0)
		if(abs(px[i][j-1]-px[i][j])>128)
			return 1;
	if(j != 200)
		if(abs(px[i-1][j]-px[i][j])>128)
			return 1;
	return 0;
}

int liczNiesym(obraz[320][200])								
{
	for(int i = 0; i < 320; i++)
		for(int j = 0; j < 160; j++)						
			if(obraz[i][j]!=obraz[319-i][j])				
			{
				l++;
				break;
			}
}

int main()
{
	int obraz[320][200];
	fstream plikin, plikout;
	plikin.open("przyklad.txt", ios::in);
	plikout.open("wyniki.txt", ios::out);

	for(int i = 0; i < 320; i++)							
		for(int j = 0; j < 200; j++)
			plikin >> obraz[i][j];

	int min = 255, max = 0;								
											
	//PODZADANIE 1					
	for(int i = 0; i < 320; i++)
		for(int j = 0; j < 200; j++)
		{
			if(obraz[i][j] < min)
				min = obraz[i][j];
			if(obraz[i][j] > max)
				max = obraz[i][j];
		}



	//PODZADANIE 2
	jakis_tam_wynik=liczNiesym(obraz);						

	//PODZADANIE 3
	for(int j = 0; j < 200; j++)
		for(int i =0; i < 320; i++)
			licznik += czyMaKont(i, j, obraz)				


	plikin.close();
	plikout.close();

	return 0;
}
