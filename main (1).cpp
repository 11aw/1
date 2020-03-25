/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m = 3;
    int n = 4;
    int a[m][n];
    int max = 0;
    int row = 0;
    int column = 0;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            a[i][j] = rand()%10;
        }
    }
   
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
   
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(a[i][j] > max){
                max = a[i][j];
                row = i+1;
                column = j+1;
            }
        }
    }
   
    cout << "Max: " << max << endl << "Row: " << row << ", column: " << column;

}
