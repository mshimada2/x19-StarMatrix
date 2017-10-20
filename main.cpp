#include<vector>
#include<string>
#include<iostream>


using namespace std;

int main(){

vector <vector <int> > star;

int row;

int column;

cout<<endl<<"Please enter a number value for the row (e.g. 5): ";
cin>>row;

cout<<endl<<"Next, please enter a number value for the column (e.g. 4): ";
cin>>column;

    star.resize(row);


for(int row = 0; row < star.size(); row++){

    star[row].resize(column);
    
    
    for(int column = 0; column < star[row].size(); column++){

    
    star[row][column]

    
    cout<<endl<<star[row][column];

    
    }

    
    }

return 0;

}
