#include <iostream>


int age; 
    
int main()
{
  
    std::cout << "what is your age?\n";
    std::cin >> age;

    if (age >= 20) { std::cout << "you are an adult\n"; }
    else { std::cout << "you are a teenager"; }
   
}

