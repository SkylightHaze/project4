//p4.h, this is where the class BST is stored as well as declarations
//Samantha Mallett - CS260


#ifndef P4_H
#define P4_H
#include <fstream>
#include <iostream>

class bst{
    public:
        bst();
        ~bst();
        
        void add(char * NameFile, char * AddressFile, char * SummaryFile, char * ReviewFile, int StarsFile);
        bool remove(int * index);
        void displayAll();
        void TestFile();
         
    private:
        struct node{
            char * name; //stores name of address
            int * keyword; //stores the keyword of the website
            char * address; //address of website
            char * summary; //summary of website
            char * review; //review of website
            int * stars; //stars of website
            node * next; //next node pointer in chain
        };
        
        node * root;

};
#endif
