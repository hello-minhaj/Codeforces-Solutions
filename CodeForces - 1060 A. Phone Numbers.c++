#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    
    cin >> n;
    string s;
    cin >> s;
    
    for(char i : s)
    {
        if(i == '8')
            count++;
    }
    int maxFormation = min(count, n/11);
    cout << maxFormation << endl;
return 0;
}
