/******************************************************************
*
* 
*		----------------
*		  BenDebug.cpp
*		----------------
*			
*
*		Classe "debug" pour afficher les
*		messages d'erreur dans un fichier
*
*
*		Prosper / LOADED -   V 0.6 - 13 Juillet 2000
*
*
*
******************************************************************/


//-----------------------------------------------------------------------------
//		Protection pour �viter de d�clarer 'debug' 2 fois (1 fois dans le .h)
//-----------------------------------------------------------------------------

#define DEBUG_CPP_FILE

//-----------------------------------------------------------------------------
//		Headers
//-----------------------------------------------------------------------------

#include <fstream.h>
#include <stdlib.h>
#include <string.h>
#include "BenDebug.h"

//-----------------------------------------------------------------------------
//		D�claration effective (et pas externe) de 'debug'
//-----------------------------------------------------------------------------

Debug	debug(FILE_LOG);


//-----------------------------------------------------------------------------
// Nom: Debug::Debug() - CONSTRUCTEUR - 
// Desc: Stocke le nom du fichier .log
//-----------------------------------------------------------------------------

Debug::Debug(const char * nf)
{
	strcpy(nomfic, nf);
	f.open(nf);				// Ecrase le contenu du fichier
	f.close();
}


Debug::~Debug()
{
}


//-----------------------------------------------------------------------------
// Nom: Debug::Msg()
// Desc: Copie une cha�ne de caract�res dans le fichier.
//		 Le fichier est ouvert et ferm� � chaque appel.
//		 Ainsi, m�me en cas de bug critique, il restera
//		 des traces d'�x�cution.
//-----------------------------------------------------------------------------

void Debug::Msg(const char * msg)
{
	nbmsg += 1;

	if ( nbmsg == MSG_MAX)
	{
		f.open(nomfic, ios::app);
		f<<"\nLog file is too long.\n";
		f.close();
	}
	if ( nbmsg < MSG_MAX )
	{
		f.open(nomfic, ios::app);
		f<<msg;
		f.close();
	}
}


//-----------------------------------------------------------------------------
// Nom: Debug::operator <<
// Desc: cf. Msg()
//-----------------------------------------------------------------------------

Debug & Debug::operator << (const char * msg)
{
	Msg(msg);
	return *this;
}


//-----------------------------------------------------------------------------
// Nom: Debug::operator << (int)
// Desc: Converti un entier en char * et l'envoi � Msg()
//-----------------------------------------------------------------------------

Debug & Debug::operator << (int nb)
{
	char	r[10];

	_itoa(nb, r, 10);				// Base 10 pour les nombres quelconques
	Msg(r);
	return *this;
}


//-----------------------------------------------------------------------------
// Nom: Debug::operator << (void*)
// Desc: Converti une adresse en char * et l'envoi � Msg().
//		 Une adresse est convertie en base 16 (hexa) alors
//		 qu'un entier quelconque est transmis en base 10.
//-----------------------------------------------------------------------------

Debug & Debug::operator << (void * ptr)
{
	char	r[10];

	_itoa(int(ptr), r, 16);			// Base 16 pour les adresses
	Msg(r);
	return *this;
}