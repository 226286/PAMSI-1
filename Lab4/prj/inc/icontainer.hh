#ifndef IContainer_HH
#define IContainer_HH

/*!
* \file
* \brief Definicja klasy IContainer
*/


/*!
* \brief Modeluje pojęcie konteneru, który jest
* używany do definicji stosu, kolejki i listy.
*/
class IContainer
{

public:
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
};


#endif
