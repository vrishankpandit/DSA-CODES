#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector <int> spiralorder(vector<vector<int>> &matrix){

    vector<int> ans;
    int count=0;
    int row=matrix.size();
    int col=matrix[0].size();

    // indexes
    int startingrow=0;
    int endingrow=row-1;
    int startingcol=0;
    int endingcol=col-1;

    int total=row*col;

    while(count<total){

        for(int index=startingcol;index<=endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        for(int index =startingrow;index<=endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;

        }
        endingcol--;

        for(int index=endingcol;index>=startingcol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
        }
        endingrow--;

        for(int index=endingrow;index>=startingrow;index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;

    }
    return ans;
}


int main(){
    vector<vector<int>> matrix;
    for(int row=0;row<3;row++){
        for(int col=0;col<5;col++){
            int cal;
            cin>>cal;
            matrix[row].push_back(cal);
        }
    }

    spiralorder(matrix);
    return 0;
}