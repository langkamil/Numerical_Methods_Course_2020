//KAMIL £ANGOWSKI 
//ZADANIE 3

#include <iostream>
#include <math.h>

//Musimy uzyskac wynik z dokladnoscia bliska maksymalnej dla obliczenia y = 1 - sin x (nazwijmy ja procedura pierwsza)
//ale ze wzgledu na nastepujacy fakt: sin x ~ x (dla malych x) nie mozemy uzywac tego wzoru w poblizu 0
//gdyz wowczas utracimy cyfry znaczace (odejmowanie bliskich liczb).
// Nalezy zatem znalezc alternatywny wzor dla sin x. 
//Naturalnym wydaje sie przyblizenie wartosci sin x za pomoca szeregu Maclaurina. 
//Uzyskujemy: y = x - (x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + (x^9 / 9!))
//Zapisujemy w postaci wygodniejszej do obliczen: 
//y = (x^3 / 6)*[1 - (x^2 / 20)*[1 - (x^2 / 42)*[1 - (x^2 / 72)]]] (nazwijmy ja procedura druga)
//Trzeba jeszcze ustalic przedzial stosowalnosci danych wzorow. Skorzystamy tutaj z tw. 2.2.2
//znajdujacego sie w ksiazce D. Kincadiego i W. Cheneya "Analiza numeryczna"(z ktorej autor korzystal rozwiazujac to zadanie)
//Wynika stamtad, ze dla |x| < 1.9 stosujemy rozwiniecie Maclaurina.
//Przystepujemy do implementacji 

void calculation_float (float x) {
	
	float y = 0.0f;
	std::string s = "";
	if (abs(x) <= 1.9f) 
	{
		y = (pow(x,3.0f) / 6.0f)*(1.0f - (pow(x,2.0f) / 20.0f)*(1.0f - (pow(x,2.0f) / 42.0f)*(1.0f - pow(x,2.0f) / 72.0f)));
		s = "SECOND";
	}
	else 
	{
		y = x - sin(x);
		s = "FIRST";
	}
	std::cout.precision(10);
	std::cout << "_________________________FLOAT_________________________";
	std::cout << "\nValue of y with maximal accuracy for x = "<< x << ": \t" << y <<"\nChosen method of computation: "<< s; 
	//comparison of two methods  
	std::cout << "\nValue of first procedure for x = " << x << ": \t" << x - sin(x);
	std::cout << "\nValue of second procedure for x = "<< x << ": \t" << (pow(x,3.0f) / 6.0f)*(1.0f - (pow(x,2.0f) / 20.0f)*(1.0f - (pow(x,2.0f) / 42.0f)*(1.0f - pow(x,2.0f) / 72.0f)));
	std::cout << "\n#######################################################\n";
}

void calculation_double (double x) {
	
	double y = 0.0;
	std::string s = "";
	if (abs(x) <= 1.9) 
	{
		y = (pow(x,3.0) / 6.0)*(1.0 - (pow(x,2.0) / 20.0)*(1.0 - (pow(x,2.0) / 42.0)*(1.0 - pow(x,2.0) / 72.0)));
		s = "SECOND";
	}
	else 
	{
		y = x - sin(x);
		s = "FIRST";
	}
	std::cout.precision(10);
	std::cout << "_________________________DOUBLE_________________________";
	std::cout << "\nValue of y with maximal accuracy for x = "<< x << ": \t" << y <<"\nChosen method of computation: "<< s;
	//comparison of two methods  
	std::cout << "\nValue of first procedure for x = " << x << ": \t" << x - sin(x);
	std::cout << "\nValue of second procedure for x = "<< x << ": \t" << (pow(x,3.0) / 6.0)*(1.0 - (pow(x,2.0) / 20.0)*(1.0 - (pow(x,2.0) / 42.0)*(1.0 - pow(x,2.0) / 72.0)));
	std::cout << "\n#######################################################\n";
}


int main (void){
	calculation_float(1.5);
	calculation_double(1.5);
	calculation_float(1.9);
	calculation_double(1.9);
	calculation_float(2.5);
	calculation_double(2.5);
	calculation_float(1.0);
	calculation_double(1.0);
	calculation_float(2.0);
	calculation_double(2.0);
}
