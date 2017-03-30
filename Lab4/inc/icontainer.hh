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
	IContainer();
	~IContainer();
	void Add(int element);
	int Find(int *element);
	void* Get(int element);
	int Size();
};


#endif
