/* Assignment8_Shade_Roberts.cpp
   Shadé Roberts
   UIN # 01187473
   Date: March 27th,2022
   LAb CRN : 30472            */


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

void selectionsort(string balancesort[],double list[], int length); // selection sort function

int main()
{


   int numofmonths=12; // declaring variable numofmonths

    string month[numofmonths]; // declaring array month
    double balance[numofmonths]={0}; // declaring array balance

    ifstream inData; // declaring the input stream variable

inData.open ("input.txt"); // open the input file



cout <<"***************************************" << endl;
cout <<"*    Credit Card monthly Statement    *" <<endl; // Header that will show up on the screen
cout <<"***************************************" <<endl;


    for (int i = 0 ; i <numofmonths; i++) // get the data from the input file
{
    inData >> month[i];
    inData >> balance[i];

    //output the data on the screen
  cout<< fixed << showpoint << setprecision(2);
  cout<< left;
  cout<<setw(27)<< month[i]
      << right
      <<setw(8)<< balance[i]<< endl;
}

 selectionsort( month, balance, numofmonths); // call the function sort() to sort the array


cout << '\n';
cout <<"***************************************" << endl;
cout <<"*              Sorted Data            *" <<endl; // Header that will show up on the screen
cout <<"***************************************" <<endl;


    for (int i = 0 ; i < numofmonths ; i++)// get the data from the input file
    {
        cout<< fixed << showpoint << setprecision(2);
        cout<< left;
        cout<<setw(27)<< month[i]   // will display the month
        << right
        <<setw(8)<< balance[i]<< endl; // will display the balance

    }

    cout << endl;
    cout << " The month you spent the most money is " << month[0] << endl; // will display the month that the user spent the most money
    return 0;
}

void selectionsort( string balancesort[],double list[], int length)//selectionsort function
{

// declaring the variables
int index;
int smallestIndex;
int location;
int temp;
string temp_balance;

for (index = 0; index < length; index++)
  {
    smallestIndex=index;

    //find the index of the smallest element in the smallest array and store it

    for (location = index +1; location < length; location++)
        if (list[location] > list[smallestIndex])
           smallestIndex = location;

    //use the smallestindex variable to swap the smallest variable with the

    temp = list[smallestIndex];
    list[smallestIndex]= list[index];
    list[index]=temp;

    // swap the balance in balance array the same way the month array has been swapped

    temp_balance = balancesort[smallestIndex];
    balancesort[smallestIndex]=balancesort[index];
    balancesort[index]=temp_balance;
}




}
