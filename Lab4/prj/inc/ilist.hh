#ifndef IList_HH
#define IList_HH

/*!
* \file
* \brief Definicja interfejsu IList
*
* Plik zawiera definicję interfejsu IList, który
* dziedziczy po IContainer.
*/

#include "icontainer.hh"


/*!
* \brief Modeluje pojęcie listy dwukierunkowej.
*/
class IList : IContainer
{
public:
	virtual void Add(int element) = 0;
	virtual int Find(int *element) = 0;
	virtual void* Get(int element) = 0;
	virtual int Size() = 0;
	virtual void Next() = 0;
	virtual void Prev() = 0;
};


#endif
