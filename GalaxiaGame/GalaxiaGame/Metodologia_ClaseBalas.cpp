#include "gotoxy.h"
#include "Clase_Balas.h"
#include <iostream>
using namespace std;
//Funcion para cambiar el color del texto
void TextColor(int Color){

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color | FOREGROUND_INTENSITY);

}
//Funcion Para Cambiar el Color de Fondo
void TextBackground(int Colors){

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Colors | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
}

// M�todo del Constructor.
CBALAS::CBALAS(void)
{
	m_ibalaViva = 0;
}

// M�todo del Destructor. 
CBALAS::~CBALAS(void)
{
}

// M�todo Pinta. las balas fluyen en direcci�n Vertical hacia arriba.
void CBALAS::PintaBalitas(void)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5 | FOREGROUND_INTENSITY);
	// Aqui tomamos la posici�n protegida de la nave rebelde para establecer contacto con nuestro lanza misiles.
	gotoxy(m_iPosbalaX, m_iPosbalaY);
	cout << "*";
}



//M�todo Borra.
void CBALAS::BorraBalitas(void)
{
	gotoxy(m_iPosbalaX, m_iPosbalaY);
	cout << " ";
}

// M�todo Proyectil Vivo nos indica que nuestra bala a�n existe y tiene una trayectoria trazada.
void CBALAS::ProyectilVivo(int ibarra_espaciadora)
{
	m_ibalaViva = ibarra_espaciadora;
}

// M�todo Proyectil Vivo regresa el estado de la bala.
int CBALAS::ProyectilVivo(void)
{
	return m_ibalaViva;
}

// M�todo PreoyectilMuerto regresa una falsedad si ya no existe la bala.
int CBALAS::ProyectilMuerto(void)
{
	if (m_iPosbalaY == 1)
	{
		return m_ibalaViva = 0;
	}
}
//M�todo Mover. las balas avanzan un espacio por Renglon.
int CBALAS::MueveBalitas()
{
	if (m_iPosbalaY>1)
	{
		return m_iPosbalaY -= 1;
	}
}

// M�todo Restaura Balitas.
void CBALAS::RestauraBalitas(void)
{
}

int CBALAS::AsignaPosbalaX(void)
{
	return m_iPosbalaX;
}

int CBALAS::AsignaPosbalaY(void)
{
	return m_iPosbalaY;
}

void CBALAS::AsignaPosbalaX(int iCol)
{
	m_iPosbalaX = iCol + 1;
}

void CBALAS::AsignaPosbalaY(int iRen)
{
	m_iPosbalaY = iRen - 1;
}

void CBALAS::dispara(void)
{
	AsignaPosbalaX();
	AsignaPosbalaX();

	PintaBalitas();
	Sleep(30);
	BorraBalitas();
	Sleep(10);
	MueveBalitas();
	ProyectilVivo(32);
	ProyectilMuerto();
}