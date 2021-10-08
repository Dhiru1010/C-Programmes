#include <iostream>
#include <stdlib.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     cin>>n;
	     int maxi=0;
	     int i=0;
	     int max[n]={0};
	     while(n--)
	     {
	          
	          int s,p,v;
	          cin>>s>>p>>v;
	          max[i]=(p/(s+1))*v;
	          if(max[i]>=maxi)
	          maxi=max[i];
	          i++;
	     }
	     std::cout << maxi << std::endl;
	}
	return 0;
}
