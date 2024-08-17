#include <iostream>
#include "GradingProgram.hh"

void gradingProgram()
{
    int score = 0;
    std::cout<<"Enter score from 0 to 100: ";
    std::cin>>score;
        
    if (0 <= score && score <= 59)
    {
        std::cout <<"F";
    }
    else if (60 <= score && score <= 69)
    {
        std::cout <<"D";
    }
    else if (70 <= score && score <= 79)
    {
        std::cout <<"C";
    }
    else if (80 <= score && score <= 89)
    {
        std::cout <<"B";
    }
    else if (90 <= score && score <= 100)
    {
        std::cout <<"A";
    }
    else
    {
        std::cout <<"Invalid score!";
    }
}