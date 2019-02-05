//Header File for Expr Builder 

#ifndef EXPR_BUILDER_H
#define EXPR_BUILDER_H

class Expr_Builder {
public:
	// ...
	virtual void start_expression(void);
	virtual void build_number(int n) = 0;
	virtual void build_add_operator(void) = 0;
	virtual void build_subtract_operator(void) = 0;
	virtual void build_multiply_operator(void) = 0;
	virtual void build_divide_operator(void) = 0;
	virtual void build_modulo_operator(void) = 0;

	virtual void build_open_parenthesis(void) = 0;
	virtual void build_close_parenthesis(void) = 0;
	// get the current expression
	virtual Math_Expr * get_expression(void) = 0;
};