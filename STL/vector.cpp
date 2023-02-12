#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Globally size
    //  MAX SIZE OF ARRAY 10^7 IN CPP for int,double,char
    //  Max Size of Array 10^8 in cpp for bool array

    // locally size
    //  MAX SIZE OF ARRAY 10^6 IN CPP for int,double,char
    //  Max Size of Array 10^7 in cpp for bool array

    //  Vector
    vector<int> arr;            //-> {} empty arary
    cout << arr.size() << endl; // print 0
    arr.push_back(0);           // {0}
    arr.push_back(1);           // {0,1}
    arr.push_back(2);           // {0,1,2}
    cout << arr.size() << endl; // print 3
    arr.pop_back();             // pop out last element
    arr.clear();                // erase all elements at once {}

    return 0;
}