#include <iostream>

void theChange(int &a, int &b)
{
    int tempNum;
    tempNum = a;
    a = b;
    b = tempNum;
}

int main()
{
    int w,x,y,z,tempNum, line(1);

    while (line < 1000)
    {
        cin>>w>>x>>y>>z;
        if (w==0 && x==0 && y==0 && z==0) break;

        if (w<x)
        {
            theChange(a,b);
        }
    }
}