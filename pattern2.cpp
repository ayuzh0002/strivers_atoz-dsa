#include<iostream>
int main(){
    int i,j,n;
        std::cout<<"Enter n:"<<std::endl;
        std::cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                std::cout<<"*";
            }
            std::cout<< std::endl;
        }

}