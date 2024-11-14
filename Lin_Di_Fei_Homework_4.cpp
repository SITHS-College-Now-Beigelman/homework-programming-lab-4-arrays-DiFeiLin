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
        if (list[index] == 'A'){
            list[index] = 'U';
        }
        else if (list[index] == 'G'){
            list[index] = 'C';
        }
        else if (list[index] == 'C'){
            list[index] = 'G';
        }
        else if (list[index] == 'T'){
            list[index] = 'A';
        }
        else{
            for(int i = index; i < listSize; i++){
                list[index] = list[index + 1];
            }
            listSize = listSize -1;
        }
    }
    for (int i = 0; i<listSize; i++)
    {
        cout<<list[i];
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
    cout<<"salesman #"<<highestIndividual+1<<" sold the most cars"<<"("<<highest<<" cars)"<<endl;
    string DNA;
    cout<<"DNA enter:";
    cin>>DNA;
    int n = DNA.length();
    char DNAArray[n];
    char DNAArray1[n];
    for (int i = 0; i < n; i++)
        DNAArray1[i] = DNA[i];
    dna_to_rna(DNAArray1, n);
    return 0;
}