#include "gotoxy.h"
#include "Clase_Ventana.h"
#include "Clase_NaveRebelde.h"
#include "Clase_Balas.h"
#include "Clase_NavesEnemigas.h" 
#include <iostream>
using namespace std;
#pragma comment(lib, "winmm.lib")


void main(void)
{
	//CLLUVIA estrella0,estrella1,estrella2,estrella3,estrella4,estrella5,estrella6,estrella7,estrella8,estrella9;
	//Inicializando Escena.
	CVENTANA ventanita;
	ventanita.Pinta();
	// Encapsulamiento de nuestro objeto navecita.
	CNAVEREBELDE navecita;
	//Objeto Nave enemiga
	CNAVENEMIGAS enemigo1(2), enemigo2(4), enemigo3(6);
	// Vidas de mi Nave Rebelde.
	int Vidas = 1;
	CBALAS bala;
	//Ciclo de Juego. es decir mientras siga vivo puede existir.
	while (Vidas != 0)
	{
		navecita.Pintar();
		//enemigo1.Pintar();
		//enemigo2.Pintar();
		//enemigo3.Pintar();
		Sleep(10);
		int iTecla_barra = LeeTecla();

		if (bala.ProyectilVivo() == 0)
		{
			bala.AsignaPosbalaX(navecita.setiCol());
			bala.AsignaPosbalaY(navecita.setiRen());
		}

		if (iTecla_barra == 32)
		{
			PlaySound(TEXT("audio\\disparo.WAV"), NULL, SND_ASYNC);
		}

		if (iTecla_barra == 32 || bala.ProyectilVivo() == 32)
		{
			bala.dispara();
		}
		navecita.Borrar();
		//enemigo1.Borrar();
		//enemigo2.Borrar();
		//enemigo3.Borrar();
		navecita.Mover();
		//enemigo1.Mover();
		//enemigo2.Mover();
		//enemigo3.Mover();
	}
}

