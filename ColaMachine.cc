#include <iostream>
#include "ColaMachine.hh"

void colaMachine()
{
    int drink = 0;
    std::cout<<"Please enter your favorite drink:\n1.Coca\n2.Pepsi\n3.Sprite\n4.Fanta\n5.Sting\n";
    std::cin>>drink;
    switch (drink)
    {
    case 1:
        std::cout<<"Here is your Coca.";
        break;
    case 2:
        std::cout<<"Here is your Pepsi.";
        break;
    case 3:
        std::cout<<"Here is your Sprite.";
        break;
    case 4:
        std::cout<<"Here is your Fanta.";
        break;
    case 5:
        std::cout<<"Here is your Sting.";
        break;
    default:
        std::cout<<"Error. choice was not valid, here is your money back.";
    }
}