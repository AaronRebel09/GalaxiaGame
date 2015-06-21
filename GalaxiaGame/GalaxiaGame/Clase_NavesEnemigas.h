#pragma once

#include "gotoxy.h"
#include <Windows.h>
#include <iostream>
using namespace std;

class CNAVENEMIGAS
{
private:
	int m_iMov;
	int m_iCol;
	int m_iRen;
public:
	CNAVENEMIGAS(int iRen);
	~CNAVENEMIGAS(void);

	//Metodos
	void Pintar(void);
	void Borrar(void);
	int Mover(void);

};
