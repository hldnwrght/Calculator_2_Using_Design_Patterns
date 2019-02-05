//This class takes in the string, parses it, and returns a true or false

#include "Calculator.h"
#include <sstream>

bool Calculator::parse_expr(const std::string & infix)
{
	std::istringstream input(infix); // create a input stream parser
	std::string token; // current token in string/stream
	b.start_expression(); // start a new expression
	while (!input.eof()) {
		input >> token;
		if (token == " + ") this->builder_.build_add_operator();
		else if (token == " - ") this->builder_.build_subtract_operator();
		else if (token == " * ") this->builder_.build_multiply_operator();
		else if (token == " / ") this->builder_.build_divide_operator();
		else if (token == " % ") this->builder_.build_modulo_operator();
	}
	return true;
};

