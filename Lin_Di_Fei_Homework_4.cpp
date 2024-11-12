/*
Di Fei Lin 
11/12/24
Homework 4*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

void filterEven(int list[], int listSize) {
for (int index = 0; index < listSize; index++)
    if (list[index]%2 == 0){
        cout<<list[index]<<" ";
    }
}
void dna_to_rna(char list[], int listSize){
    for (int index = 0; index < listSize; index++){
        if (list[index] = 'A'){
            list[index] = 'G';
        }
        else if (list[index] = 'G'){
            list[index] = 'A';
        }
        else if (list[index] = 'C'){
            list[index] = 'T';
        }
        else if (list[index] = 'T'){
            list[index] = 'C';
        }
        else
        list.remove(list[index])

    }
}

int main(){
    int myArray[8];
    cout<<"Input 8 numbers please: ";
    for(int i = 0; i<8; i++){
        cin>>myArray[i];
    }
    filterEven(myArray, 8);
    cout<<endl;
    int sum;
    int highest = 0 ;
    int highestIndividual;
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    for(int i = 0;i < 10;i++){
        sum = sum+ cars[i];
        if (highest < cars[i]){
            highest = cars[i];
            highestIndividual = i;
        }
    }
    cout<<"salesman #"<<highestIndividual+1<<" sold the most cars"<<"("<<highest<<" cars)";
    return 0;
}