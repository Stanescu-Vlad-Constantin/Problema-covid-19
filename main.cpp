#include <iostream>
#include <cstring>
#include <ctype.h>
#include <queue>

using namespace std;

int main()
{
    char s[200];
    scanf("%s",s);
    queue<int> numar;
    int sum,j=0;
    long long unsigned int i;
    for(i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
            numar.push(s[i]-'0');
    }
    if(numar.empty())
        return 0;
    sum=numar.front();
    cout<<sum;
    numar.pop();
    while(!numar.empty())
    {
        if(s[j]=='+')
        {
            sum=sum+numar.front();
            cout<<s[j];
        }
        if(s[j]=='-')
        {
            sum=sum-numar.front();
            cout<<s[j];
        }
        if(s[j]=='*')
        {
            sum=sum*numar.front();
            cout<<s[j];
        }
        if(s[j]=='/')
        {
            sum=sum/numar.front();
            cout<<s[j];
        }
        cout<<numar.front();
        numar.pop();

        j++;
    }
    cout<<"="<<sum;
}
