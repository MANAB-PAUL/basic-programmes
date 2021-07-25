#include<iostream>
#include <bits\stdc++.h>
// #include <map>
// #include <string>

using namespace std;

int main()
{
    map<string, int> mark;
    mark["Harry"] = 98;
    mark["Jack"] = 59;
    mark["Rohan"] = 2;

    // map<string, int>::iterator iter = mar
    map<string, int>::iterator iter = mark.begin();
    for (iter; iter != mark.end(); iter++)
    {
        // printf("%s %d\n",(*iter).first,(*iter).second);
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}