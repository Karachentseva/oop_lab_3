#pragma once
#include "Container.h"
template <class T>
class PushPopContainer :public virtual Container<T>
{
public:
	//typedef T value_type;
	//typedef JavaIterator<T&> iterator;
	virtual bool push(const T& value) = 0;
	virtual T pop() = 0;
	virtual T peek() const = 0;
	virtual T& peek() = 0;
	virtual ~PushPopContainer() = 0 {};
};

