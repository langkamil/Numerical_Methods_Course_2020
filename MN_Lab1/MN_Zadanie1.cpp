//KAMIL £ANGOWSKI 
//ZADANIE 1

#include <iostream>

int main()
{
	//EPSILON MASZYNOWY DLA FLOAT
	
    float epsilon_f = 1.0f;
    float previous_epsilon_f = 0.0f;
    int power_f = 1;
     
    while (1.0f + epsilon_f != 1.0f)
    {
        previous_epsilon_f = epsilon_f;
        epsilon_f = epsilon_f / 2.0f;
        power_f++;
    }
    
    //EPSILON MASZYNOWY DLA DOUBLE
    
    double epsilon_d = 1.0;
    double previous_epsilon_d = 0.0;
    int power_d = 1;
     
    while (1.0 + epsilon_d != 1.0)
    {
        previous_epsilon_d = epsilon_d;
        epsilon_d = epsilon_d / 2.0;
        power_d++;
    }
    
	//EPSILON MASZYNOWY DLA LONG DOUBLE
    
    long double epsilon_ld = 1.0;
    long double previous_epsilon_ld;
    int power_ld = 1;
     
    while (1.0 + epsilon_ld != 1.0)
    {
        previous_epsilon_ld = epsilon_ld;
        epsilon_ld = epsilon_ld / 2.0;
        power_ld++;
    }
    
    //PODSUMOWANIE WYNIKOW
    
    std::cout << "Machine epsilon for float type: " << previous_epsilon_f << "\tThe power of 2: -" << power_f-1;    
    std::cout << "\nMachine epsilon for double type: " << previous_epsilon_d << "\tThe power of 2: -" << power_d-1;
    std::cout << "\nMachine epsilon for long double type: " << previous_epsilon_ld << "\tThe power of 2: -" << power_ld-1;
}
