#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int main()
{

    // int brr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> brr = { 2, 3, 4, 5, 6, 7, 8, 9, 10};
    

    
    brr.pop_back();
    brr.pop_back();
    int st = 0;
    int end = brr.size() - 1;
    while (st <= end)
    {
        if (st == end)
        {
            break;
        }
     cout << "Hello, World!" << endl;   swap(brr[st], brr[end]);
        st++;
        end--;
    }

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
}     
   vecto