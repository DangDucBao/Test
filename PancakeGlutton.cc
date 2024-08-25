#include <iostream>
#include <vector>
#include <algorithm>
#include "PancakeGlutton.hh"

void pancakeGlutton()
{
    struct People
    {
        int id;
        int numberCakeAte;
    };
    
    std::vector<People> listOfPeople(10);
    for (int i = 0; i < 10; i++)
    {
        listOfPeople[i].id = i+1;
        std::cout<<"Enter number of cake ate of person "<<listOfPeople[i].id<<": ";
        std::cin>>listOfPeople[i].numberCakeAte;
    }

    std::sort(listOfPeople.begin(), listOfPeople.end(), [](People &a, People &b) {
        return a.numberCakeAte > b.numberCakeAte;
    });

    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Person "<<listOfPeople[i].id<<" ate "<<listOfPeople[i].numberCakeAte<<" cake."<<std::endl;
    }
}