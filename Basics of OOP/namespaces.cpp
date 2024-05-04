/*Implement a C++ program that demonstrates the usage of namespaces. Create three namespaces called "English","Nepali" and "Newa"ù. All namespaces should define a function called "greet" that takes no parameters and returns a greeting message in the respective language. In the main function, invoke the "greet" function from each namespace and display the greetings.*/

#include <iostream>

namespace English
{
    void greet()
    {
        std::cout << "Good Morning" << std::endl;
    }
}
namespace Nepali
{
    void greet()
    {
        std::cout << "Namaskar" << std::endl;
    }
}
namespace Newa
{
    void greet()
    {
        std::cout << "Jojolappa" << std::endl;
    }
}
int main()
{
    English::greet();
    Nepali::greet();
    Newa::greet();
    return 0;
}
