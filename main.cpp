#include <iostream>
#include "main.h"

int main() 
{
    Temperature t(13, 'C');
    std::cout << t.AsKelvin();
}
