//Write a  program to read a matrix of size m x n from the keyboard and display the same using the function .

#include <iostream>
using namespace std;

void getarray(int a[10][10],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
};
int main(){

   int a[10][10],m,n,i,j;
   cout<<"Enter the value of m and n : ";
   cin>>m>>n;
   cout<<"Enter the elements of matrix : ";
   getarray(a,m,n);
   cout<<endl;
   cout<<"You have entered the following matrix"<<endl;
   
   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
        
    }





    return 0;
}