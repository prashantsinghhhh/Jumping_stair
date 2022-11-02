/* Problem
Chef is currently standing at stair 0 and he wants to reach stair numbered X.
Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered X.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers X and Y denoting the number of stair Chef wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered X.


Sample 1:
Input
Output
4
4 2
8 3
3 4
2 1
2
4
3
2     */

// code

#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,ans,mod,divi;
	cin>>t;
	cout<<endl;
	if(t>=1 && t<=500){
	    int i=0;
	    while(i<t){
	        cin>>x;
	        cout<<"\t";
	        cin>>y;
	        if((x&&y)>=1 && (x&&y)<=100){
	            if(x>=y){
	                mod=x%y;
	                divi=x/y;
	                ans=mod+divi;
	                cout<<ans<<endl;
	                
	            }else
	            { 
                  ans=x;
	                cout<<ans<<endl;
	             
	            }
	        }else{
	            exit(0);
	        }
	        i++;
	    }
	    
	}else
	{
	    exit(0);
	}
	
	return 0;
}





