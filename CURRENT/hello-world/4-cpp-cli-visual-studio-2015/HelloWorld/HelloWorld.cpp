// HelloWorld.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace org::mariuszgromada::math::mxparser;

int main(array<System::String ^> ^args)
{
	Expression ^eh = gcnew Expression("5^2 * 7^3 * 11^1 * 67^1 * 49201^1");
	Expression ^ew = gcnew Expression("71^1 * 218549^1 * 6195547^1");
	String ^h = mXparser::numberToAsciiString(eh->calculate());
	String ^w = mXparser::numberToAsciiString(ew->calculate());
	mXparser::consolePrintln(h + " " + w);
	return 0;
}
