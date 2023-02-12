#include <bits/stdc++.h>
using namespace std;

// user defined data type
struct node
{
    string str;
    int num;
    double doub;
    char x;
};

int main()
{
    // create a datatype where you store
    //{string,int,double,char}

    node vijay;
    vijay.str = "ratan";
    vijay.num = 1;
    vijay.doub = 23.344;
    vijay.x = 'a';
    cout << vijay.num;

    return 0;
}