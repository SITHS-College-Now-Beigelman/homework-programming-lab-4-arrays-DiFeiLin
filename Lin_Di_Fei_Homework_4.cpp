/*
Di Fei Lin 
11/12/24
Homework 4*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void filterEven(int list[], int listSize) {//void function for even numbers takes the list and ListSize
for (int index = 0; index < listSize; index++)//for loop for running through all the numbers in the array 
    if (list[index]%2 == 0){//if statement for if the number returns a remainder after being divided by 2 
        cout<<list[index]<<" ";
    }
}
void dna_to_rna(char list[], int& listSize) { //void function for Dna to Rna 
    int writeIndex = 0; //to keep track ofi the # of values in the array 
    
    for (int index = 0; index < listSize; index++) {//for loop for the array
        if (list[index] == 'A') //if its an a it get turned into a U 
            list[writeIndex++] = 'U';
        else if (list[index] == 'G') //if its a g it get turned into a C 
            list[writeIndex++] = 'C';
        else if (list[index] == 'C') //if its a g it get turned into a C 
            list[writeIndex++] = 'G';
        else if (list[index] == 'T') //if its a T it get turned into an a 
            list[writeIndex++] = 'A';
    }
    listSize = writeIndex; //updates array size
    for (int i = 0; i < listSize; i++) {    // Output the resulting array
        cout << list[i];
    }
    cout << endl;
}

int main(){
    int myArray[8];//makes array 8 valueslong 
    cout<<"Input 8 numbers please: ";//ask for inputs for the array 
    for(int i = 0; i<8; i++){//appends the inputs into the array
        cin>>myArray[i];
    }
    filterEven(myArray, 8);//runs through the function with my array
    cout<<endl;

    int sum;//sum 
    int highest = 0 ;//highest 
    int highestIndividual;//variable that contains the person with the current highest 
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};//the array 
    for(int i = 0;i < 10;i++){//for loop that runs 10 times 
        sum = sum+ cars[i];//sum 
        if (highest < cars[i]){//if the current value is higher than what is already in highest the highest nopw has that value
            highest = cars[i];
            highestIndividual = i;
        }
    }
    cout<<"salesman #"<<highestIndividual+1<<" sold the most cars"<<"("<<highest<<" cars)"<<endl;//prints out the resulting sattement 

    string DNA;//DNa 
    cout<<"DNA enter:";//takes DNA as a string 
    cin>>DNA;
    int n = DNA.length();//finds the length of DNa 

    char DNAArray[n];//array 1
    char DNAArray1[n];//array 2 

    for (int i = 0; i < n; i++)
        DNAArray1[i] = DNA[i];//turns the string into a char array

    dna_to_rna(DNAArray1, n);//runs the void function
    return 0;
}
/*Input 8 numbers please: 1 2 3 4 5 6 7 8
2 4 6 8 
salesman #5 sold the most cars(14 cars)
DNA enter:GATT123
CUAA*/