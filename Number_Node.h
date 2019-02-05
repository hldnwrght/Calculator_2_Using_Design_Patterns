//Header for Number node

#ifndef NUMBER_NODE_H
#define NUMBER_NODE_H

#include "Binary_Expr_Node.h"

class Number_Node : public Binary_Expr_Node {
public:
	Number_Node(void) {}
	virtual ~Number_Node(void) {}
	virtual int eval(int num) {
		this->number = num;
	}
private:
	int number;
};

#endif