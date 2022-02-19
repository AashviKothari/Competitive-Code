// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while(n!=0)
        {
            int r = n%10;
            sum+= r;
            n /= 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while(n!=0)
        {
            sum=sum+n%10;
            n =n/10;
        }

        cout<<sum<<endl;
    }

    return 0;
}

