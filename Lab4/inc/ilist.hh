#ifndef IList_HH
#define IList_HH

/*!
* \file
* \brief Definicja klasy IList
*
* Plik zawiera definicję klasy IList, która
* dziedziczy po IContainer.
*/

#include "../inc/icontainer.hh"


/*!
* \brief Modeluje pojęcie listy dwukierunkowej.
*/
class IList : public IContainer
{

public:
	IList();
	~IList();
	Next();
	Prev();
};


#endif
