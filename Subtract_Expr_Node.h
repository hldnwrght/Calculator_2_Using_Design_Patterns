//Header for subtract node

#ifndef SUBTRACT_EXPR_NODE_H
#define SUBTRACT_EXPR_NODE_H

#include "Binary_Expr_Node.h"

class Subtract_Expr_Node : public Binary_Expr_Node {
public:
	Subtract_Expr_Node(void){}
	virtual ~Subtract_Expr_Node(void) {}
	virtual int eval(int num1, int num2) {
		return (num1 - num2);
	}
	virtual void accept(Expr_Node_Visitor & v) {
		v.Visit_Subtract_Node(*this);
	}
};
#endif