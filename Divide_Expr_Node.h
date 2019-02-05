//Header for Divide node

#ifndef DIVIDE_EXPR_NODE_H
#define DIVIDE_EXPR_NODE_H

#include "Binary_Expr_Node.h"

class Divide_Expr_Node : public Binary_Expr_Node {
public:
	Divide_Expr_Node(void) {}
	virtual ~Divide_Expr_Node(void) {}
	virtual int eval(int num1, int num2) {
		return (num1 / num2);
	}
	virtual void accept(Expr_Node_Visitor & v) {
		v.Visit_Divide_Node(*this);
	}
};

#endif