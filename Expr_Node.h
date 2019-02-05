//Header file for expression node

#ifndef EXPR_NODE_H
#define EXPR_NODE_H

#include <ostream>

class Expr_Node {
public:
	Expr_Node(void) {}
	virtual ~Expr_Node(void) {}
	// Used to traverse the tree
	virtual int eval(void) = 0;

	// Used to traverse the tree
	virtual void accept(Expr_Node_Visitor & v) = 0;
	//virtual void print_preorder(ostream &) = 0;
	//virtual void print_inorder(ostream &) = 0;
	//virtual void print_postorder(ostream &) = 0;
};

#endif