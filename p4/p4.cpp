//p4.cpp this is where the functions go for app.cpp
//Samantha Mallett CS260 - Project4

#include "p4.h"
#include "string.h"
#include <fstream>
#include <iostream>

using namespace std;

bst::bst(){
    root = NULL;

}

bst::~bst(){
    return;
}

void bst::TestFile(){
    /*ifstream infile;
    infile.open("test.txt");

    //storage for passing things from the file to be added in the ad function
    char NameFile[100];
    char AddressFile[100];
    char SummaryFile[100];
    char ReviewFile[100];
    int StarsFile;

    int check = infile.peek(); //used to check if the file is empty
    if (check == EOF){
        infile.ignore();
        return;
    }
    while (!infile.eof()){
        infile.getline(NameFile, 99, ';');
        infile.getline(AddressFile, 99, ';');
        infile.getline(SummaryFile, 99, ';');
        infile.getline(ReviewFile, 99, ';');
        infile >> StarsFile;
        infile.ignore(); //gets rid of end delim
        infile.ignore();
        
        add(NameFile, AddressFile, SummaryFile, ReviewFile, StarsFile);

        check = infile.peek();
        if (check == EOF){
            break;
        }
    }
    infile.close();
    infile.close();*/
}



void bst::add(char*NameFile,char*AddressFile,char*SummaryFile,char*ReviewFile,int StarsFile){
    /*//site information
    node* Created = new node();
    //name
    Created->name = new char[strlen(NameFile)+1];
    strcpy(Created->name, NameFile);
    //address
    Created->address = new char[strlen(AddressFile)+1];
    strcpy(Created->address, AddressFile);
    //summary
    Created->summary = new char[strlen(SummaryFile)+1];
    strcpy(Created->summary, SummaryFile);
    //review
    Created->review = new char[strlen(ReviewFile)+1];
    strcpy(Created->review, ReviewFile);
    //stars
    Created->stars = new int;
    *Created->stars = StarsFile;
    Created->next = NULL;
    
    //keywords
    int index = 0;
    int length = strlen(NameFile);
    for (int i = 0; i < length; i++){
        index = index + int(NameFile[i]);        
    }

    Created->keyword = new int;
    *Created->keyword = index;

    //adding to binary tree
    if (root == NULL){
        root = Created;
    }
    else{
        //TODO search to find it's spot
        node * temp = root; 
    }*/
}



bool bst::remove(int * index){
    return true;
}



void bst::displayAll(){

}




