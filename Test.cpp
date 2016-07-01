
#include <iostream>
#include <type_traits>
#include <memory>

#include "Test.hpp"

struct Test::Private
{
	int m_x = 7;

	Private(int i, int j)
		: m_x(i)
	{
		std::cout << "It works! " << i << std::endl;
	}
};

Test::Test(int i) 
	: impl(make_impl_nocopy<Test::Private>(i, 6))
{
	
}

void Test::f()
{
	std::cout 
		<< impl->m_x 
		<< " " 
		<< this->K 
		<< std::endl;
}

bool Test::operator ==(Test const & B) const
{
	return impl->m_x == B.impl->m_x;
}