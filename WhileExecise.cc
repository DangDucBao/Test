#include <iostream>

void whileExecise()
{
    int input = 0;
    for (int count = 0; ;count++)
    {
        std::cout<<"Please enter a number other than "<<count<<": ";
        std::cin>>input;
        if (input == count)
        {
            std::cout<<"Hey! you weren't supposed to enter "<<input<<"!";
            break;
        }
    }
}