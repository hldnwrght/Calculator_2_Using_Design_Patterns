//Header file for the Expr Tree Builder

#ifndef EXPR_TREE_BUILDER_H
#define EXPR_TREE_BUILDER_H

#include "Expr_Builder.h"


class Expr_Tree_Builder : public Expr_Builder {
	Expr_Tree_Builder(void);
	virtual ~Expr_Builder_Tree(void);

	virtual void start_expression(void) {
		// ...
		this->tree_ = new Expr_Tree();
	}
	virtual void build_number(int n);
	virtual void build_add_operator(void);
	virtual void build_subtract_operator(void);
	// ...
	Expr_Tree * get_expression(void) { return this->tree_; }
private:
	// current state of expression tree
	Expr_Tree * tree_;
	// other variables to coordinate build process
};
#endif