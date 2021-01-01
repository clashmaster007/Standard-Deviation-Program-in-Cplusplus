#include <iostream>
 //Header File
#include <cmath>
    //Header File
using namespace std;
 //Header File

// Bilal Asghar
// beinghelper.com

//Function To do Calculations

float sqrt(float data[], int N)
 //Function To do Calculations
{
    //Variables
    float sigma = 0.0, meanValue, standardDeviation = 0.0;

    int i;
    //Calculating the Sigma Σ (Sum of All Data Input)
    for (i = 1; i <= N; ++i)
    {
        sigma += data[i];
    }
    //Calculating the Mean Value

    meanValue = sigma / N;
    //Calculating the Varience

    for (i = 1; i <= N; ++i)
        standardDeviation += pow(data[i] - meanValue, 2);
    //Returning Std Deviation
    return sqrt(standardDeviation / N);
}
int main()
{
    // variables
    int i, N;
    float data[50];
    float result;
    //Taking Input
    cout << "How much data figures you want to enter = ";
    cin >> N;
    for (i = 1; i <= N; ++i) {
        cout << "Enter " << i << " elements: ";
        cin >> data[i];
    }
    //Taking and sending data to Sqrt Function
    result = sqrt(data,N);
    //Showing Result
    if (result != 0 || result == 0) {
        cout << "The data values are: ";
        for (i = 1; i <= N; ++i)
            cout << data[i] << " ";
        cout << endl;
        cout << "The standard deviation of these data values is " << result;
    }
    else
    {
        cout << "Error Found !Try Again.";
    }
    cout << endl;

    return 0;
}
