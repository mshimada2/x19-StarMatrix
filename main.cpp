#include<vector>
#include<string>
#include<iostream>


using namespace std;

int main(){


int row;

int column;

vector <vector <string> > star;


cout<<endl<<"Please enter a number value for the row (e.g. 5): ";
cin>>row;

cout<<endl<<"Next, please enter a number value for the column (e.g. 4): ";
cin>>column;

    star.resize(row);


for(int r = 0; r < star.size(); r++){

    star[r].resize(column);
    
    
    for(int c = 0; c < star[r].size(); c++){

    
    star[r][c] = '*';

    
    cout<<star[r][c];

    
    }
    cout<<endl;
    }

return 0;

}
