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
    int n = 6;
    int a[m][n];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
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
            if(j==0){
                count1+=a[i][j];
            }
            if(j==1){
                count2+=a[i][j];
            }
            if(j==2){
                count3+=a[i][j];
            }
            if(j==3){
                count4+=a[i][j];
            }
            if(j==4){
                count5+=a[i][j];
            }
            if(j==5){
                count6+=a[i][j];
            }
        }
       
    }
   
    cout << "Row 1: " << count1 << endl << "Row 2: " << count2 << endl << "Row 3: " << count3 << endl << "Row 4: " << count4 << endl << "Row 5: " << count5 << endl << "Row 6: " << count6;

}
