/********************************************************************* 
** Author: Phillip Wellheuser
** Date: 4/2/19
** Description: Implements the determinant() function. 
*********************************************************************/
#include "findDeterminant.hpp"

/********************************************************************* 
** Description: determinant() receives a  pointer to a 2D array 
** containing a 2x2 or 3x3 matrix and returns the determinant of that
** matrix as a int value
*********************************************************************/ 
int determinant(int** arrIn, int matrixSize){
	if(matrixSize== 2){
		int determinant= (arrIn[0][0]*arrIn[1][1])-(arrIn[1][0]*arrIn[0][1]);
		return determinant;
	}
	else if(matrixSize== 3){
		int determinant= 0;
		int a=arrIn[0][0], 
		b= arrIn[0][1],
		c= arrIn[0][2],
		d= arrIn[1][0],
		e= arrIn[1][1],
		f= arrIn[1][2],
		g= arrIn[2][0],
		h= arrIn[2][1],
		i= arrIn[2][2];
		determinant= a*((e*i)-(f*h))-b*((d*i)-(f*g))+c*((d*h)-(e*g));
		return determinant;
	}
	else{
		return -666;
	}
}