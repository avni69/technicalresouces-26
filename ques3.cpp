#include<iostream>
using namespace std;
int main(){
    int num,i,check=0;
    cout<<"enter the number\n";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            check++;
            break;
        }
            }
            if(check>0)
            cout<<"it is not a prime numrber";
            else
            cout<<"it is a prime number";   
    return 0;
    }
