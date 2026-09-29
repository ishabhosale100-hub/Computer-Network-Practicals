#include<iostream>
using namespace std;
int main()
{
	int d[7];
	int c[11];
	cout<<"Enter 7 d bits";
	for(int i=0;i<7;i++)
	  cin>>d[i];
	  c[2] = d[0]; 
	  c[4] = d[1]; 
	  c[5] = d[2]; 
	  c[6] = d[3]; 
	  c[8] = d[4]; 
	  c[9] = d[5]; 
	  c[10] = d[6]; 
	  
	  c[0] = c[2]^c[4]^c[6]^c[8]^c[10];
	  c[1] = c[2]^c[5]^c[6]^c[9]^c[10];
	  c[3] = c[4]^c[5]^c[6];
	  c[7] = c[8]^c[9]^c[10];
	  
	  cout<<"Hamming code";
	  for(int i=0;i<11;i++)
	     cout<<c[i];
return 0;
	  
	  
}
