#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= 0 && ch <= 9))
    {

        return false;
    }
    return true;
}

vector<char> okreverse(vector<char> &s)
{

    int a = 0;
    int e = -1;
    for (int i = 0; i < s.size(); i++)
    {

        if (valid(s[i]))
        {
            e = i - 1;
            while (a < e)
            {
                swap(s[a], s[e]);
                a++;
                e--;
            }
            a = i + 1;
        }
    };
    return s;
}

int main()
{
    char a[20];
    cin>>a;

    vector <char> d;
    for(int i=0;i<17;i++){
        d.push_back(a[i]);
    }
   
    // cout<<okreverse(d);

    return 0;
}