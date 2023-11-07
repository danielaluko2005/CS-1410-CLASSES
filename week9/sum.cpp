#include <iostream>
#include <vector>

using namespace std; 

//Create a function that takes a vector of real numbers
//Return the sum
//The function should compute the mean and send it to the caller
//How do we return the sum and compute/send the mean
double GetVectStats (vector<double> inVec, double &ave) { // Somebody dictate me how to get the sum - ave corresponds to mean, same data, now different variable name thing

// inVec is pass by value.
// ave is pass by reference'

   double sum = 0;
   unsigned int i;

   for (i = 0; i < inVec.size(); i++) {
      sum += inVec.at(i);
   }

   ave = sum / inVec.size();

   return sum;
}

int main () {
ode

   vector<double> data(3);
   double sum = 0;
   double mean = 0;
   unsigned int i;

   cout << "Populate data: " << endl; // 1, 2, 4 - average is 7/3 = 2 for int purposes
   for (i = 0; i < data.size(); i++) {
      cin >> data.at(i);
   }

   sum = GetVectStats(data, mean);

   cout << "The sum is: " << sum << endl;
   cout << "The average is: " << mean << endl;

   cout << endl;
   return 0;
}