#ifndef IContainer_HH
#define IContainer_HH

/*!
* \file
* \brief Definicja interfejsu IContainer
*/


/*!
* \brief Modeluje pojęcie konteneru, który jest
* używany do definicji stosu, kolejki i listy.
*/
class IContainer
{
public:
	virtual void Add(int element) = 0;
	virtual int Find(int *element) = 0;
	virtual void* Get(int element) = 0;
	virtual int Size() = 0;
};


#endif
