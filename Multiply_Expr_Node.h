//Header for Multiply node

#ifndef MULTIPLY_EXPR_NODE_H
#define MULTIPLY_EXPR_NODE_H

#include "Binary_Expr_Node.h"

class Multiply_Expr_Node : public Binary_Expr_Node {
public:
	Multiply_Expr_Node(void){}
	virtual ~Multiply_Expr_Node(void){}
	virtual int eval(int num1, int num2) {
		return (num1 * num2);
	}

	virtual void accept(Expr_Node_Visitor & v) {
		v.Visit_Multiply_Node(*this);
	}
};
#endif