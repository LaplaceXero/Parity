#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int N; //number of chocolates
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>N;
	    
	    if((N % 2) == 0)
	        cout <<"Yes" <<endl;
	   
	    else
	        cout <<"No" <<endl;
	}
	return 0;
}
