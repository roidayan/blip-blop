/******************************************************************
*
* 
*		---------------
*		  EventLock.h
*		---------------
*			
*		Classe Evenement Lock
*
*
*		Prosper / LOADED -   2 Aout 2000
*
*
*
******************************************************************/

#include "eventlock.h"
#include "globals.h"
#include "bendebug.h"

void EventLock::doEvent()
{
	scroll_locked = true;
	x_lock = x_activation;
	cond_end_lock = cond;
	flag_end_lock = flag;
	val_end_lock = val;
}