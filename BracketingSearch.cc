#include <iostream>
#include <random>

class bracketingSearch
{
    public:
        bracketingSearch() {};
        ~bracketingSearch() {};
        int searchBracketing(int v);
    private:
        int count = 1;
};

int bracketingSearch::searchBracketing(int v)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<float> dist(1, 100);
    int randomNum = dist(mt);

    for (int i = 1; i <= 100; i++)
    {
        if (v != randomNum)
        {
            count++;
            if (v < randomNum)
            {
                std::cout<<"\nGuess higher: ";
                std::cin>>v;
            }
            else
            {
                std::cout<<"\nGuess lower: ";
                std::cin>>v;
            }
        }
        else
            return count;
    }

    return 0;
}

int main()
{
    int a;
    int result = 0;
    std::cout<<"Guess a number from 1 to 100: ";
    std::cin>>a;

    bracketingSearch zozo;
    result = zozo.searchBracketing(a);

    std::cout<<"Need "<<result<<" searches to find random number.";
    return 0;
}