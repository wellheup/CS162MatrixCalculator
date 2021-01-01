/********************************************************************* 
** Author: Phillip Wellheuser
** Date: 4/2/19
** Description: Implements readMatrix function. Receives a pointer to 
** a 2D array and prompts the user to fill each entry of the array 
** with a valid integer value. 
*********************************************************************/
#include <string>
#include <iostream>
#include "readMatrix.hpp"

/********************************************************************* 
** Description: readMatrix() receives a pointer to a 2D array,
** asks the user to fill it out and prints the array as it stands
** after each entry
*********************************************************************/ 
void readMatrix(double** arrIn, int matrixSize){
	for(int i= 0; i< matrixSize; i++){
		for(int j= 0; j<matrixSize; j++){
			bool validEntry= false;
			std::string entryTxt;				
			while(validEntry== false){
				std::cout<< "Please enter a double matrix value for "<< i<< ", "<< j<< ": ";
				std::getline(std::cin, entryTxt);
				if(isDouble(entryTxt)){
					validEntry= true;
				}
			}
			
	  double entryNum= stod(entryTxt);
	  arrIn[i][j]= entryNum;

	  // print out the grid and left side increments
			std::cout<<" "<< std::endl;//might be able to lose the space and cout
			for(int k=0; k<matrixSize; k++){
				std::cout.width(2);
				for(int m=0; m<matrixSize; m++){
					std::cout.width(2);
					if(m<matrixSize-1){
						std::cout<< arrIn[k][m]<< ", ";
					}
					else{
						std::cout<< arrIn[k][m]<< " ";
					}
				}
			std::cout<< std::endl;
			}
		}
	}
}

/********************************************************************* 
** Description: isInt() verifies that a string entry from the user
** is an int value
*********************************************************************/ 
bool isInt(std::string num){
	bool isValid= false;
	for(char c:num){
		if(isdigit(c )){
			isValid= true;
		}
		else if(!isdigit(c)){
			isValid= false;
			return isValid;
		}
		else{ 
			isValid= false;
		}
	}
	return isValid;
}

/********************************************************************* 
** Description: isInt() verifies that a string entry from the user
** is a bool value
*********************************************************************/ 
bool isDouble(std::string num){
	bool isValid= false, deciUsed= false;
	for(char c:num){
		if (isdigit(c)){
			isValid= true;
		}
		else if(!isdigit(c)){
			if(deciUsed==false && c=='.'){
			deciUsed= true;
		}
		else{
			isValid= false;
			return isValid;
		}
	}
	else
		isValid= false;
	}
	return isValid;
}
