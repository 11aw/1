/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m = 4;
    int n = 3;
    int a[m][n];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
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
            if(i==0&a[i][j]%2==0){
                count1++;
            }
            if(i==1&a[i][j]%2==0){
                count2++;
            }
            if(i==2&a[i][j]%2==0){
                count3++;
            }
            if(i==3&a[i][j]%2==0){
                count4++;
            }
        }
    }
   
    cout << "Row 1: " << count1 << endl << "Row 2: " << count2 << endl << "Row 3: " << count3 << endl << "Row 4: " << count4;

}
