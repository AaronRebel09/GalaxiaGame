#include "Clase_NaveRebelde.h"

class CBALAS
{
	// Interfaz Privada.
private:
	int m_ibalaViva;
	// Interfaz Protegida.
protected:
	int m_iPosbalaX;
	int m_iPosbalaY;
	// Interfaz Pública.
public:


	// Constructor balas.
	CBALAS(void);

	// Destructor balas.
	~CBALAS(void);

	// Metodologías
	void dispara(void);
	void PintaBalitas(void);
	void BorraBalitas(void);
	void RestauraBalitas(void);
	int	 MueveBalitas(void);
	// Setter
	int AsignaPosbalaX(void);
	int AsignaPosbalaY(void);
	int ProyectilVivo(void);
	int ProyectilMuerto(void);
	// Getter
	void AsignaPosbalaX(int);
	void AsignaPosbalaY(int);
	void ProyectilVivo(int);
};