//header for the Express Node Visitor class

#ifndef EXPR_NODE_VISITOR_H
#define EXPR_NODE_VISITOR_H

class Expr_Node_Visitor {
public:
	virtual ~Expr_Node_Visitor(void);
	// Methods for visiting concrete nodes
	virtual void Visit_Addition_Node(const Addition_Node & node);
	virtual void Visit_Subtraction_Node(const Subtraction_Node & node);
	virtual void Visit_Number_Node(const Number_Node & node);
	virtual void Visit_Multiply_Node(const Multiply_Node & node);
	virtual void Visit_Divide_Node(const Divide_Node & node);
	virtual void Visit_Modulo_Node(const Modulo_Node & node);
	virtual void Visit_Unary_Node(const Number_Node & node);
	
};


#endif