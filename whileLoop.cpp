#include <iostream>

int main(){
    int d,sum=0,i,n;
    std::cout<<"Enter a digit(0-9)"<<std::endl;
    std::cin>>d;
    i=1;
    while(i<=500){
        if(i%10==d)
        sum+=i;
        i++;
    }
    std::cout<<sum;
}