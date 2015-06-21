#ifndef NAVEREBELDE_H
#define NAVEREBELDE_H
class CNAVEREBELDE
{
	// Interfaz Privada.
private:
	int m_iVidas;

	//Interfaz Protegida.
protected:
	int m_iCol;
	int m_iRen;

	//Interfaz Pública.
public:

	//Constructor
	CNAVEREBELDE(void);

	//Destructor
	~CNAVEREBELDE(void);

	//Metodologias
	void Pintar(void);
	void Mover(void);
	void Borrar(void);
	int setiCol(void);
	int setiRen(void);
};
#endif