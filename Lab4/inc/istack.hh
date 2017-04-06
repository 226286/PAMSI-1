#ifndef IStack_HH
#define IStack_HH

/*!
* \file
* \brief Definicja klasy IStack
*
* Plik zawiera definicję klasy IStack, która
* dziedziczy po IContainer.
*/

#include "../inc/icontainer.hh"


/*!
* \brief Modeluje pojęcie stosu.
*/
class IStack : public IContainer
{

public:
	IStack();
	~IStack();
	Top();
	Push();
	Pop();
};


#endif
