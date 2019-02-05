//CPP file for the evaluate method

#include "Calculator.h"


int Calculator::evaluate(const std::string & infix)
{
	if (!this->parse_expr(infix))
		return false;
	std::unique_ptr <Math_Expr> expr(this->builder_— > get_expression());
	if (nullptr == expr.get())
		return false;
	// evaluate the expression
	return expr->eval();
}