/******************************************************************
*
* 
*		-----------------------
*		    EnnemiLemmings.h
*		-----------------------
*			
*
*
*		Prosper / LOADED -   V 0.1 - 3 Aout 2000
*
*
*
******************************************************************/

#ifndef _EnnemiLemmings_
#define _EnnemiLemmings_

//-----------------------------------------------------------------------------
//		Headers
//-----------------------------------------------------------------------------

#include "ennemi.h"

//-----------------------------------------------------------------------------
//		Constantes
//-----------------------------------------------------------------------------

#define LEM_SPEED		1

//-----------------------------------------------------------------------------
//		D�finition de la classe EnnemiSmurf
//-----------------------------------------------------------------------------

class EnnemiLemmings : public Ennemi
{
public:
	bool	suicide;

	EnnemiLemmings();
	
	virtual void update();
	virtual void onAvance();
	virtual void onTombe();
	virtual void onMeure();
	virtual void onCarbonise();

	virtual void estTouche( Tir * tir);
};

#endif