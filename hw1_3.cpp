#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Please enter a number: ";
    cin>> i;
    float highest = 0;
    float lowest = 0;
    float average;
    
    for (int x =0; x<i; x++)
    {
        float number;
        cout <<"Enter a floating point number: ";
        cin >> number;
        
        if (number>highest)
        {
            highest = number;
        }
        
        if (number<highest && number>=0)
        {
            lowest = number;
        }
        
        average = average+number;
        
    }
    
    cout <<"The highest number you entered was: " << highest << "\n";
    cout <<"The lowest number you entered was: " <<lowest << "\n";
    cout <<"The average number you entered was: "<<average/i;
}