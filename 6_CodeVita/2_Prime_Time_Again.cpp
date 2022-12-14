/*
Prime Time Again

Here on earth, our 24-hour day is composed of two parts, each of 12 hours. Each hour in each part has a corresponding hour in the other part separated by 12 hours: the hour essentially measures the duration since the start of the daypart. For example, 1 hour in the first part of the day is equivalent to 13, which is 1 hour into the second part of the day.

Now, consider the equivalent hours that are both prime numbers. We have 3 such instances for a 24-hour 2-part day:

5~17

7~19

11~23


Accept two natural numbers D, P >1 corresponding respectively to a number of hours per day and the number of parts in a day separated by a space. D should be divisible by P, meaning that the number of hours per part (D/P) should be a natural number. Calculate the number of instances of equivalent prime hours. Output zero if there is no such instance. Note that we require each equivalent hour in each part in a day to be a prime number.


Example:

Input: 24 2

Output: 3 (We have 3 instances of equivalent prime hours: 5~17, 7~19, and 11~23.)

Constraints

10 <= D < 500

2 <= P < 50



Input

The single line consists of two space-separated integers, D and P corresponding to the number of. hours per day and number of parts in a day respectively

Output

Output must be a single number, corresponding to the number of instances of equivalent prime number, as described above



Example 1

Input

36 3

Output

2



Explanation

In the given test case D = 36 and P = 3

Duration of each daypart = 12

2~14~X

3~15~X

5~17~29 - an instance of equivalent prime hours

7~19~31 - an instance of equivalent prime hours

11~23~X

Hence the answer is 2.

Possible solution:

Input:

49 7
*/

#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n == 1 && n == 0)
    {
        return false;
    }
    for(int i = 2; i<=(int) sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int D, P, p, t = 1;
    cin>>D>>P;
    p = D/P;
    int time[p][P];
    for(int i = 0; i<P; i++)
    {
        for(int j = 0; j<p; j++)
        {
            time[i][j] = t++;
        }
    }
    t = 0;
    for(int i = 0; i<p; i++)
    {
        bool flag = true;
        for(int j = 0; j<P; j++)
        {
            if(!isPrime(time[i][j]))
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            t++;
        }
    }
    cout<<t;
}