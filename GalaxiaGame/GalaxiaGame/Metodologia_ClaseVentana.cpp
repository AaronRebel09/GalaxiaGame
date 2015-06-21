#include "gotoxy.h"
#include "Clase_Ventana.h"
#include <iostream>
using namespace std;

CVENTANA::CVENTANA(void)
{
	Ancho(79);
	Alto(24);
	this->m_iPosRen = 0;
	this->m_iPosCol = 0;
}


CVENTANA::~CVENTANA(void)
{
}


int CVENTANA::Ancho(void)
{
	return m_iAncho;
}


void CVENTANA::Ancho(int iAncho)
{
	m_iAncho = iAncho;
}
int CVENTANA::Alto(void)
{
	return m_iAlto;
}


void CVENTANA::Alto(int iAlto)
{
	m_iAlto = iAlto;
}
void CVENTANA::Pinta(void)
{
	//Pinta la linea superior
	for (int i = 0; i <= Ancho(); i++)
	{
		gotoxy(m_iPosCol + i, m_iPosRen);
		cout << "*";
	}
	//Pinta la linea inferior
	for (int j = 0; j <= Ancho(); j++)
	{
		gotoxy(m_iPosCol + j, m_iPosRen + Alto());
		cout << "*";
	}
	//Pinta la linea Izquierda
	for (int k = 0; k <= Alto(); k++)
	{
		gotoxy(m_iPosCol, m_iPosRen + k);
		cout << "*";
	}
	//Pinta la linea Derecha
	for (int l = 0; l <= Alto(); l++)
	{
		gotoxy(m_iPosCol + Ancho(), m_iPosRen + l);
		cout << "*";
	}
}