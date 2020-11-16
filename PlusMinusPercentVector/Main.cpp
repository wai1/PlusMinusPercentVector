#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void plusMinus(vector<int> arr) {
    int vecSize = arr.size();
    int numPos = 0;
    int numNeg = 0;
    int numZero = 0;
    double percentPos = 0.0;
    double percentNeg = 0.0;
    double percentZero = 0.0;

    for (int i = 0; i < vecSize; i++)
    {
        if (arr[i] < 0)
            numNeg += 1;
        else if (arr[i] > 0)
            numPos += 1;
        else 
            numZero += 1;
    }

    percentPos = ((double)numPos) / vecSize;
    percentNeg = ((double)numNeg) / vecSize;
    percentZero = ((double)numZero) / vecSize;

    cout << setprecision(6);
    cout << fixed << percentPos << endl;
    cout << fixed << percentNeg << endl;
    cout << fixed << percentZero << endl;
}

int main() {

    vector <int> vec = { -2, 6, -4, 0, 9 };

    plusMinus(vec);

    return 0;
}

