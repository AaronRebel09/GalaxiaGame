#include "Clase_NavesEnemigas.h"


CNAVENEMIGAS::CNAVENEMIGAS(int iRen)
{
	m_iMov = 20;
	m_iCol = 20;
	m_iRen = iRen;
}


CNAVENEMIGAS::~CNAVENEMIGAS(void)
{
}

// Método Pinta Nave Rebelde.
void CNAVENEMIGAS::Pintar(void)
{
	char c = 123;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1 | FOREGROUND_INTENSITY);
	gotoxy(m_iCol, m_iRen);
	cout << "_" << c << "_";
}

void CNAVENEMIGAS::Borrar(void)
{
	gotoxy(m_iCol, m_iRen);
	cout << "   ";
}


int CNAVENEMIGAS::Mover(void)
{

	if (m_iMov >= 10 && m_iMov <= 69)
	{
		gotoxy(++m_iCol, m_iRen);
		return ++m_iMov;
	}
	else if (m_iMov >= 70 && m_iMov <= 129)
	{
		gotoxy(--m_iCol, m_iRen);
		return ++m_iMov;
	}
	else
		return m_iMov = 10;
}