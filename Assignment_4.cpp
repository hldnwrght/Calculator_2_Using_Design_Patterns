// Assignment_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Binary_Expr_Node.h"

void main() {
	std::string infix;					//Creates string to take in data from getline
	std::getline(std::cin, infix);		//Gets next line and saves it into infix

	//While loop to loop through each line until QUIT found
	while (infix != "QUIT") {
		Binary_Expr_Node expr;

		// ...
		Expr_Node * expr_tree = /* get tree from somewhere */
			Eval_Expr_Tree eval;
		// evaluate the expression tree
		expr_tree->accept(eval);
		int result = eval.result();
		// print the tree in infix format
		Print_Inorder_Expression printer(std::cout);
		expr_tree->accept(printer);
		

		





		std::getline(std::cin, infix);					//gets new line from standard in
	}
}