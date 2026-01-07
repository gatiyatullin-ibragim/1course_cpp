#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
int n;
cin >> n;
 
int a[n][n];
int i=0, j, k = 0, p=1;
 
while (i < n*n){
    k++;
    for (j=k-1;j<n-k+1;j++)
    {
        a[k-1][j]=p++;
        i++;
    } 
 
    for (j=k;j<n-k+1;j++)
    {
        a[j][n-k]=p++;
        i++;
    }
    for (j=n-k-1;j>=k-1;j--)
    {
        a[n-k][j]=p++;
        i++;
    }  
 
    for (j=n-k-1;j>=k;j--)
    {
        a[j][k-1]=p++;
        i++;
    }
 }
 
for (int q=0; q<n; q++)
{
    for (int w=0; w<n; w++)
    {
        cout << setw(4) << a[q][w];
    };
    cout << endl;
}
 
return(0);
}