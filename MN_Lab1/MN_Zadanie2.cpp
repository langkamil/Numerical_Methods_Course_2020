//KAMIL £ANGOWSKI 
//ZADANIE 2

#include <iostream>
#include <math.h>

double f_function(double x)
{
	return sqrt(x*x + 1.0) - 1.0 ;
}

double g_function(double x)
{
	return (x*x)/(sqrt(x*x + 1) + 1);
}

int main (void)
{
	for (int i = -1; i >= -5; i-- )
	{
		std::cout.precision(30);
		std::cout <<std::fixed << "f(8^(" << i <<")) = " << f_function(pow(8.0,i)) 
		<< "\t g(8^(" << i <<")) = "<< g_function(pow(8.0,i)) <<"\n";
	}
}
//Bardziej wiarygodne sa wyniki dla funkcji g dlatego, ze funkcja f powoduje dla malych x odejmowanie
//bliskich liczb i zmniejszenie liczby cyfr znaczacych
