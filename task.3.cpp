/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
 int *k = new int[8];
 for (int i = 0; i < 8; i++){
 k[i] = rand() % 8 + 1;
                 }
 for (int i = 0; i < 8; i++){
 cout<<k[i]<<" ";
                 }
 cout<<endl;

    for(int i = 1; i < 8; ++i){
        
	for(int a = 0; a < 7; a++){
		if(k[a] < k[a+1]){
		int temp = k[a];
		k[a] = k[a+1];
		k[a+1] = temp;
		
		 	}
	       	}
        	}

    for (int i = 0; i < 8; i++){
    cout<<k[i]<<" ";
 }
    delete []k;
}