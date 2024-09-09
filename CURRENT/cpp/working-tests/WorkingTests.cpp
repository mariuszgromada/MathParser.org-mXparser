#include "org/mariuszgromada/math/mxparser.hpp"

int main() {
	ConstantPtr c = new_Constant("c = 2");
	ArgumentPtr a = new_Argument("a = 2*c", c);
	ArgumentPtr b = new_Argument("b = a+c", a, c);
	FunctionPtr f = new_Function("f(x,y)= x*y");
	ExpressionPtr e = new_Expression("2+sin(b)-f(a,c)", a, b, c, f);
	mXparser::consolePrintln(e->getExpressionString() + " = " + e->calculate());
	mXparser::consolePrintln(e->getErrorMessage());
}