#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int flag=0;
	    int A=n;
	    int B=n;
	    int shota=0;
	    int shotb=0;
	    for(int i=0;i<2*n;i++)
	    {
	      if(i%2==0)
	      {
	          shota=shota+(str[i]-'0');
	          A--;
	      }
	      else
	      {
	          shotb=shotb+(str[i]-'0');
	          B--;
	      }
	      if(shota>shotb+B)
	      {
	          cout<<i+1<<"\n";
	          break;
	      }
	      else if(shotb>shota+A)
	      {
	          cout<<i+1<<"\n";
	          break;
	      }
	      else if(shota==shotb && i==2*n-1)
	      { cout<<i+1<<"\n";
	          break;
	      }
	    }
	
	    
    }
	return 0;
}