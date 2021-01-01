#include <iostream>
#include <string>
#include "./readMatrix.hpp"
#include "./findDeterminant.hpp"

int main(){
	std::string matrixSizeIn= " ";
	bool validMatrix = false;
	int matrixSize= 0;
	std::cout<< "Please enter 2 to create a 2x2 matrix or 3 for a 3x3 matrix."<< std::endl;

	while(validMatrix== false){//test for valid input until valid entry
		std::getline(std::cin, matrixSizeIn);
		if(isInt(matrixSizeIn)){
			if(stoi(matrixSizeIn)==2 || stoi(matrixSizeIn)== 3){
				validMatrix= true;
				matrixSize= stoi(matrixSizeIn);
			}
			else{
				std::cout<< "Invalid size, please enter 2 or 3."<< std::endl;
			}
		}
		else{
			validMatrix= false;
			std::cout<< "That is not a valid integer, please enter 2 or 3."<< std::endl;
		}
	}
	//creat a new matrix array
	double** matrix = new double*[matrixSize];
	for(int i=0; i<matrixSize; i++){
		matrix[i]= new double[matrixSize];
	}
	readMatrix(matrix, matrixSize);

	std::cout<<"The final matrix looks thusly: \n"<< std::endl;
	for(int k=0; k<matrixSize; k++){
		std::cout.width(2);
		for(int m=0; m<matrixSize; m++){
			std::cout.width(2);
			if(m<matrixSize-1){
				std::cout<< matrix[k][m]<< ", ";
			}
			else{
				std::cout<< matrix[k][m]<< " ";
			}
		}
		std::cout<< std::endl;
	}

	//display the determinant 
	std::cout<< "The determinant is: "<< determinant(matrix, matrixSize)<< std::endl;
   
	//free the dynamic memory of the 2D array
	for(int i=0; i<matrixSize; i++){
		delete [] matrix[i];
	}
	delete [] matrix;
}



