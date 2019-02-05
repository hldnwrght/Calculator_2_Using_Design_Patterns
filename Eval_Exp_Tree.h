//Header file for the Eval Exp Tree Class

#ifndef EVAL_EXP_TREE_H
#define EVAL_EXP_TREE_H

#include "Expr_Node_Visitor.h"

class Eval_Expr_Tree : public Expr_Node_Visitor {
public:
	Eval_Expr_Tree(void);
	virtual ~Eval_Expr_Tree(void);
	// Methods for visiting concrete nodes
	virtual void Visit_Addition_Node(const Addition_Node & node) {
		// visit left node, visit right node, then perform addition
	}
	virtual void Visit_Subtraction_Node(const Subtraction_Node & node);
	virtual void Visit_Number_Node(const Number_Node & node);
	virtual void Visit_Multiply_Node(const Multiply_Node & node);
	virtual void Visit_Divide_Node(const Divide_Node & node);
	virtual void Visit_Modulo_Node(const Modulo_Node & node);
	virtual void Visit_Unary_Node(const Unary_Node & node);
	

	int result(void) const { return this->result_; }
private:
	int result_;
	// other state for calculating result
};


#endif