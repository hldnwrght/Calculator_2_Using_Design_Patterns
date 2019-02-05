//Header file for binary expression node

#ifndef BINARY_EXPR_NODE_H
#define BINARY_EXPR_NODE_H

#include "Expr_Node.h"

class Binary_Expr_Node : public Expr_Node {
public:
	Binary_Expr_Node(void) {}
	virtual ~Binary_Expr_Node(void) {}
	// ...
	virtual int eval(void) {
		// use template method to provide common
		// behavior for all binary nodes
	}
protected:
	Expr_Node * right_;
	Expr_Node * left_;
};

#endif // !BINARY_EXPR_NODE_H

