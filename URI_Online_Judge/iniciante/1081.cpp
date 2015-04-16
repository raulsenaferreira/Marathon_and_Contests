#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int matrixLine, i, j, dimension=12;
    double num;
    char operation;
    int rows;
    int cols = rows = dimension;
    double matrix[rows][cols];
    
    cin>>matrixLine;
    cin>>operation;
 	
    for(i=0;i<rows;i++){
    	for(j=0;j<cols;j++){
    		cin>>num;
    		matrix[i][j]=num;
    	}
    }
    num=0;
	
	for(i=0;i<cols;i++)	num += matrix[matrixLine][i];
    
    if(operation=='M')	num/=dimension;
    cout << fixed << setprecision(1) << num << endl;
    return 0;
}
