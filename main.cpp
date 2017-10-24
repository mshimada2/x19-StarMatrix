#include<vector>
#include<string>
#include<iostream>


using namespace std;

int main(){


int row;

int column;

vector <vector <string> > star;


cout<<"Enter rows and columns of stars:"<<endl;

cin>>row;
cin>>column;

if(row == 0 || column == 0 || row < 0 || column < 0)

{

return 1;

}



else

{

    star.resize(row);

for(int r = 0; r < star.size(); r++){

    star[r].resize(column);
    
    
    for(int c = 0; c < star[r].size(); c++){

    
    star[r][c] = '*';

    
    cout<<star[r][c];

    
    }
    cout<<endl;
    }

}

return 0;

}
