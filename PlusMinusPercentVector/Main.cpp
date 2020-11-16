/** 
 * PlusMinusPercentVector is a challenge question from the website HackerRank
 * You are given an array of integers and need to calculate the fractions of its
 * elements that are positive, negative, and are zero. Output the percentages on
 * separate lines. 
 * 
 * Author of program: Walt Iddings
 * */

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

    // Iterate through the vector
    for (int i = 0; i < vecSize; i++)
    {
        if (arr[i] < 0)
            numNeg += 1;
        else if (arr[i] > 0)
            numPos += 1;
        else 
            numZero += 1;
    }

    // Calculate the percentages
    percentPos = ((double)numPos) / vecSize;
    percentNeg = ((double)numNeg) / vecSize;
    percentZero = ((double)numZero) / vecSize;

    // Output the percentages
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

