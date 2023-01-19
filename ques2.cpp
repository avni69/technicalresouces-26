#include<iostream>
int main(){
    int marks;
    std::cout<<"enter the total marks of the candidate\n";
    std::cin>>marks;
    if(marks>90)
    std::cout<<"excellent";
    else if(90>=marks>80)
    std::cout<<"good";
    else if(80>=marks>70)
    std::cout<<"fair";
    else if(70>=marks>60)
    std::cout<<"meets expectation";
    else
    std::cout<<"below par";
    return 0;
    }
