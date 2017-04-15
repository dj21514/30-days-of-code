#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double mealCost,tipT,taxT;
    int tip,tax,totalCost;
   cin>>mealCost>>tip>>tax;
   tipT = (mealCost*tip)/100;
   taxT = (mealCost*tax)/100;
   totalCost = mealCost+tipT+taxT;
   mealCost +=tipT+taxT;
   if(mealCost-0.5>=totalCost)
        totalCost++;
   cout<<"The total meal cost is "<<totalCost<<" dollars.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
