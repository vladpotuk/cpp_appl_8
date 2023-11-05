#include <iostream>

#include<Windows.h>



 int main() {
        system("chcp 1251");
        system("cls");
        const int arraySize = 5;  
        int myArray[arraySize] = { 10, 20, 30, 40, 50 };

        int* ptr = myArray;  
        int* endPtr = myArray + arraySize - 1;  

        
        while (ptr < endPtr) {
          
            int temp = *ptr;
            *ptr = *endPtr;
            *endPtr = temp;

            ptr++;
            endPtr--;
        }

        
        std::cout << "Масив після зміни порядку проходження:" << std::endl;
        for (int i = 0; i < arraySize; i++) {
            std::cout << myArray[i] << " ";
        }
        std::cout << std::endl;

        return 0;
    }
