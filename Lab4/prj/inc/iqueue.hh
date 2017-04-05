#ifndef IQueue_HH
#define IQueue_HH

/*!
* \file
* \brief Definicja klasy IQueue
*
* Plik zawiera definicję klasy IQueue, która
* dziedziczy po IContainer.
*/

#include "../inc/icontainer.hh"


/*!
* \brief Modeluje pojęcie kolejki.
*/
class IQueue : public IContainer
{

public:
	IQueue();
	~IQueue();
	End();
	Push();
	Pop();
};


#endif
