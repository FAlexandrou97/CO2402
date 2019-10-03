#include <iostream>
#include <cassert>

using std::cout;

#define SIZE 26

void initializeArray(char array[]){
    for (int i = 0; i < SIZE; i++){
        array[i] = (char)(97 + i);
    }
}

void displayArray(char array[], int count){

    // Aborts the program if count is bigger than 26
    assert(count<=26);
    for (int i = 0; i < count; i++){
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main(int argc, char* argv[])
{
    int count = 26;
    char arrayOfLowers[SIZE];
    initializeArray(arrayOfLowers);
    displayArray(arrayOfLowers, count);


    system("pause");

    return 0;
}

