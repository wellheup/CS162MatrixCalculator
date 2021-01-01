/********************************************************************* 
** Author: Phillip Wellheuser
** Date: 4/3/19
** Description: Header file specifying the readMatrix() function as 
** well as the isInt and isDouble input validation functions. 
*********************************************************************/
#ifndef READMATRIX_HPP
#define READMATRIX_HPP

void readMatrix(double** arrIn, int matrixSize);

bool isInt(std::string num);

bool isDouble(std::string num);

#endif