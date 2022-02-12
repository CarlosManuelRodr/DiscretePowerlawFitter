#include <iostream>
#include "DiscreteDistributions.h"
#include "RandomGen.h"
#include "TestStatistics.h"
using namespace std;

const vector<int> sampleData {2,1,1,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,16,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,4,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,20,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1};

int main()
{
    RandomGen::Seed();
    DiscretePowerLawDistribution model(sampleData);
    const double gof = calculate_gof(model, sampleData, 100);
    cout << gof << endl;

    return 0;
}
