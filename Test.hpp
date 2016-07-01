
#pragma once

#include "Private.hpp"

struct Test
{
	ADDPRIVATE_STRUCT_NOCOPY

	int K = 1;

	Test(int i);

	void f();

	bool operator ==(Test const & B) const;

protected:
	int M = 9;
};

struct Derived : public Test
{

};