//============================================================================
// Name        : assignment2.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
double sum();
double factorial(int a);
double Fibonacci(int a);
void Print_Fibonacci(int a);
int main() {
	std::cout<<sum()<<std::endl<<factorial(5)<<std::endl;
	Print_Fibonacci(12);
	return 0;
}

double sum(){
	double sum = 0;
	for(int k=1;k <= 150150;++k){
		sum = sum + k;
	}
	return sum;
}
double factorial(int a){
	double factorial = 1;
	for(int k = 1; k <= a; ++k){
		factorial = factorial * k;
	}
	return factorial;
}

double Fibonacci(int a){
	if(a == 1 || a == 2){
		return 1;
	}
	else{
		return Fibonacci(a-1) + Fibonacci(a-2);
	}
}

void Print_Fibonacci(int a){
	for(int i = 1; i <= a; ++i ){
	std::cout<<Fibonacci(i)<<" ";
	}
}




