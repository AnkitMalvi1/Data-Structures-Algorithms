#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    char start= 'A';

    while(row<=n){
        int col=1;
        while(col<=n){
            
            cout<<start<<" "; 
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
}
// 3
// A B C 
// D E F 
// G H I 