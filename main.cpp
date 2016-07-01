
#include <iostream>

#include <SDKDDKVer.h>

#include <stdio.h>
#include <tchar.h>

#include "Test.hpp"

struct Another
{
	static void f()
	{
		Test A(3);
		Test B(4);

		std::cout << "Equals result: " << (A == B ? "YES" : "NO");
	}


};



int main()
{
	Test t(6);
	t.f();

	Another::f();

    return 0;
}

