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

    vector<int> vec1(4, 0);                     // -> {0,0,0,0}
    vector<int> vec2(4, 10);                    // -> {10,10,10,10}
                                                // macking copy of vector vec3 from vec2
    vector<int> vec3(vec2.begin(), vec2.end()); //-> [)
    vector<int> vec3(vec2);

    vector<int> raj;
    raj.push_back(1); // raj.emplace_back(1); emplace_back takes less time than push_back
    raj.push_back(3);
    raj.push_back(2);
    raj.push_back(5); // {1,3,2,5}

    vector<int> raj1(raj.begin(), raj.begin() + 2); //{1,3}

    // swap swap(v1,v2)
    return 0;
}