#include <iostream>
using namespace std;

class Doubles
{
    private:
        int arrayValue[15];

    public:
        Doubles() : arrayValue{ } { };
        void addElement (int index, int value) 
        {
            arrayValue[index] == value;
        }

        void reportDoubles (int index) 
        {
            int counter = 0;
            for (int x=0; x<index; x++)
            {
                for (int y=0; y< index;y++)
                {
                    if (arrayValue[y]/arrayValue[x]==2 && arrayValue[y]%arrayValue[x]==0)
                    counter +=1;
                }
            }
            cout << counter << endl;
        }

};

int main()
{
    int value;

    while (true) 
    {
        Doubles *oneLine = new Doubles();
        int index = 0;
        while (true) 
        {
            cin >> value;
            if (value == 0) {break;}
            if (value == -1) {exit(0);}
            oneLine->addElement(index, value);
            index++;
        }
        oneLine->reportDoubles(index);
    }

    return 0;
}