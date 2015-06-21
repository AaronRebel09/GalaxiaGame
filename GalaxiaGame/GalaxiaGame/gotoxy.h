#include <windows.h> //Encabezados para handles
#include <wincon.h>	//Encabezados para las funciones de consola
#ifndef GLOBAL_H
#define GLOBAL_H
#define TECLA_A	97
#define TECLA_D 100
#define	BARRA_SPC 32

void gotoxy(int iColumna, int iRenglon);
int LeeTecla(void);
int LeeFlecha(void);
int PonColor(WORD Color);
#endif