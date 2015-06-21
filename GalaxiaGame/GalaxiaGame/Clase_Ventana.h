class CVENTANA
{
	int m_iAncho;
	int m_iAlto;
public:
	int m_iPosRen;
	int m_iPosCol;

	CVENTANA(void);
	~CVENTANA(void);

	int Ancho(void);
	void Ancho(int iAncho);
	void Alto(int iAlto);
	int  Alto(void);
	void Pinta(void);

};