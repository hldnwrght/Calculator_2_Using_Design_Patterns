//Header for Modulo node

#ifndef MODULO_EXPR_NODE_H
#define MODULO_EXPR_NODE_H

#include "Binary_Expr_Node.h"

class Modulo_Expr_Node : public Binary_Expr_Node {
public:
	Modulo_Expr_Node(void) {}
	virtual ~Modulo_Expr_Node(void) {}
	virtual int eval(int num1, int num2) {
		return (num1 % num2);
	}
	virtual void accept(Expr_Node_Visitor & v) {
		v.Visit_Modulo_Node(*this);
	}
};

#endif
