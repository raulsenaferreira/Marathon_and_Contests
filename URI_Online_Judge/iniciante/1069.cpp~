#include<iostream>
#include<stdio.h>
using namespace std;
 
 
int main(int argc, char const *argv[])
{
    int N, R, M, ignore;
 
    while(scanf("%d %d", &N, &R)==2){
        int mergulhadores[N];
     
        if (N == R)
        {
            cout << "*" << endl;
            for(int i=0;i < R; i++){
                scanf("%d", &M);
            }
        }
        else{
            for (int i = 0; i < N; i++)
            {
                mergulhadores[i]=i+1;
            }
 
            for(int i=0;i < R; i++){
                scanf("%d", &M);
                for (int j = 0; j < N; j++)
                {
                     
                    if (mergulhadores[j]==M)
                    {
                         
                        mergulhadores[j]=0;
                    }
                }
            }
 
            for (int i = 0; i < N; i++)
            {
                if (mergulhadores[i] != 0)
                {
                    cout << mergulhadores[i] << " ";
                }
                 
            }
            cout << endl;
        }
    }
         
    return 0;
}
