//Header file for the calculator methods

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Expr_Builder.h"
#include <string>

class Calculator {
public:
	Calculator(Expr_Builder & builder) : builder_(builder) { }

	int evaluate(const std::string & infix);

	bool parse_expr(const std::string & infix)
};
#endif