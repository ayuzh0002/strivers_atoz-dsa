#include<iostream>
int main(){
    int i,j;
    for (int i = 0; i < 5; i++) {
            
            // Print leading spaces (N - i - 1 spaces)
            for (int j = 0; j < 5 - i - 1; j++) {
                std::cout << " ";
            }

            // Print stars (2*i + 1 stars)
            for (int j = 0; j < 2 * i + 1; j++) {
                std::cout << "*";
            }

            // Print trailing spaces (optional, same count as leading spaces)
            for (int j = 0; j < 5 - i - 1; j++) {
                std::cout << " ";
            }

            // Move to next row
            std::cout << std::endl;
        }
}