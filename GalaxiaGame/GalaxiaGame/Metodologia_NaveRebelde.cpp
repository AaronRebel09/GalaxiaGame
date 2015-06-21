#include "gotoxy.h"
#include "Clase_NaveRebelde.h"
#include <iostream>
using namespace std;

// Método del Constructor.
CNAVEREBELDE::CNAVEREBELDE(void)
{
	m_iVidas = 3;
	m_iCol = 40;
	m_iRen = 23;
}

// Método del Destructor.
CNAVEREBELDE::~CNAVEREBELDE(void)
{
}


// Método Pinta Nave Rebelde.
void CNAVEREBELDE::Pintar(void)
{
	char c = 127;
	gotoxy(m_iCol, m_iRen);
	cout << "_" << c << "_";
}

//Método Mover Nave Rebelde con feclas de dirección del teclado.
void CNAVEREBELDE::Mover(void)
{
	// Esta Función lee una tecla.
	int LeeFlecha(void);
	// Aquí la asignamos a una variable entera. 
	// Con la finalidad de visualizar con el depurador lo que recoge en tiempo de ejecución.
	int iTecla_Presionada = LeeFlecha();

	switch (iTecla_Presionada)
	{
		// Mi Nave Rebelde se desplaza dos Columnas hacia la izquierda.
		// Adémas se delimita la superficie de la ventana del lado izquierdo.
	case 75:
		if (m_iCol>2){
			m_iCol -= 2;
		}
		break;
		// Mi Nave Rebelde se desplaza un Renglon hacia arriba.
		// Adémas se delimita la superficie de la ventana de Arriba.
	case 72:
		if (m_iRen>1){
			m_iRen -= 1;
		}
		break;
		// Mi Nave Rebelde se desplaza dos Columnas hacia la derecha.
		// Adémas se delimita la superficie de la ventana del lado derecho.
	case 77:
		if (m_iCol<76){
			m_iCol += 2;
		}
		break;
		// Mi Nave Rebelde se desplaza un Renglon hacia abajo.
		// Adémas se delimita la superficie de la ventana de abajo.
	case 80:
		if (m_iRen<23){
			m_iRen += 1;
		}
		break;
	}

}

// Método Borrar, es una clara representación de animación.
void CNAVEREBELDE::Borrar(void)
{
	// Pintamos nada, Este sería nuestro Sprite.
	gotoxy(m_iCol, m_iRen);
	cout << "   ";
}
int CNAVEREBELDE::setiCol(void)
{
	return m_iCol;
}

int CNAVEREBELDE::setiRen(void)
{
	return m_iRen;
}