 
#include <iostream>
#include <limits>

using namespace std;

int main()
{

	cout << "Size of short: " <<sizeof(short) << endl;
	cout << "Size of int: " <<sizeof(int) << endl;
	cout << "Size of unsigned int: " <<sizeof(unsigned int) << endl;
	cout << "Size of long: " <<sizeof(long) << endl;
	cout << "Size of unsigned long: " <<sizeof(unsigned long) << endl;

    cout << "Short: " << std::numeric_limits<short>::min(), 
    cout << " " << std::numeric_limits<short>::max();
    
    cout << "\nInt: "<<std::numeric_limits<int>::min();
    cout << " " <<std::numeric_limits<int>::max();
    
    cout << "\nUnsigned Int: "<< std::numeric_limits<unsigned int>::min();
    cout << " "<<std::numeric_limits<unsigned int>::max();
    
    cout << "\nLong: "<<std::numeric_limits<long>::min();
    cout << " "<<std::numeric_limits<long>::max();
    
    cout << "\nUnsigned Long: "<<std::numeric_limits<unsigned long>::min();
    cout << " "<<std::numeric_limits<unsigned long>::max();
}