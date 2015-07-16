#include "../common.h"
#include <random>


void simpleRandom()
{
    std::default_random_engine e;

    cout << "e generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << e() << endl;
    }

    // e and e1 are using the same seed ,they will generate the same result
    std::default_random_engine e1;
    cout << "e1 generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << e1() << endl;
    }

    // set e2 with a differenct seed
    std::default_random_engine e2(33);
    cout << "e2 generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << e2() << endl;
    }
}

void randomRealWithUniformDistribution()
{
    std::uniform_real_distribution<double> ur(0, 1); 
    std::default_random_engine e;

    cout << "Uniform real(0, 1) generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ur(e) << endl;
    }
}

void randomRealWithNormalDistribution()
{
    // mean is 4, standard deviation is 1.5
    std::normal_distribution<double> nr(4, 1.5); 
    std::default_random_engine e;

    cout << "Normal real(04 1.5) generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << nr(e) << endl;
    }
}

void randomWithBernoulliDistribution()
{
    std::bernoulli_distribution bd;
    std::default_random_engine e;

    cout << "Bernoulli generates:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << bd(e) << endl;
    }
}



int main(int argc, char *argv[])
{
    simpleRandom();
    randomRealWithUniformDistribution();
    randomRealWithNormalDistribution();
    randomWithBernoulliDistribution();
    return 0;
}

