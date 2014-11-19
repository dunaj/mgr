/**
 * main.cpp
 *
 * Plik zawierajacy funkcje glowna programu
 *
 * File containing main function of the program
 *
 *  Created on: 12-09-2014
 *      Author: Adamek
 */
#include <iostream>
#include "Matrix.h"
#include <main.h>

using namespace std;

int main()
{
	Engine::Matrix m = Engine::Matrix("dpm/DPM_1_f003BMEDc.txt", PSK_LICZBA_KOLUMN, PSK_LICZBA_WIERSZY);
	cout<<m;
	return 0;
}
