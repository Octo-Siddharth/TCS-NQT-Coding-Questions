//Prorgram to count the number of vowels with spaces included
#include<bits/stdc++.h>

using namespace std;

int countVL(string &s)
{
    int count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    getline(cin, s);
    cout<<"The number of vowels are : "<<countVL(s);
}