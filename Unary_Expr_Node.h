//Header file for all unary expressions

#ifndef UNARY_EXPR_NODE_H
#define UNARY_EXPR_NODE_H

#include "Expr_Node.h"


class Unary_Expr_Node : public Expr_Node {
public:
	Unary_Expr_Node(void) {}
	virtual ~Unary_Expr_Node(void) {}
	virtual int eval(void) {
		if (this->child_) return this->child_->eval();
	}
protected:
	Expr_Node * child_;
};

#endif