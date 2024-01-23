#ifndef BOOK_H
#define BOOK_H
#include <bits/stdc++.h>
using namespace std;

class Book
{
    public:
    string Title = "";
    string Author = "";
    int ISBN = 0;
    string Genre = "";
    int Number_of_availabe = 0;
    int Number_of_Borrowed = 0;
    bool Availability_Status = false;
    void get_book(){
      cout<<"\n\t\t\tEnter Book Title : ";
      cin>>this->Title;
      cout<<"\n\t\t\tEnter Book Author : ";
      cin>>this->Author;
      cout<<"\n\t\t\tEnter Book Genre : ";
      cin>>this->Genre;
      cout<<"\n\t\t\tEnter Book ISBN : ";
      cin>>this->ISBN;
      cout<<"\n\t\t\tEnter Number of Available Books : ";
      cin>>this->Number_of_availabe;
      if(this->Number_of_availabe){
        this->Availability_Status = true;
      }
      else{
            this->Availability_Status =  false;
      }

    }
    void print_book(){
      cout<<"\n\t\t\tBook Title : "
      <<Title<<"\n\t\t\tBook Author : "<<this->Author
      <<"\n\t\t\tBook Genre : "<<this->Genre
      <<"\n\t\t\tBook ISBN : "<<this->ISBN
      <<"\n\t\t\tAvailable Books : "<<this->Number_of_availabe
      <<" \t\t\t\tBorrowed Books : "<<this->Number_of_Borrowed<<endl;
    }
    bool is_available(){

     return Availability_Status;

    }

    void availability(bool ch){
        Availability_Status = ch;
    }
    void add_borrow(){ //// Borrow Function
        cout<<"Adding....."<<endl;
        this->Number_of_availabe = (Number_of_availabe -1);
        this->Number_of_Borrowed = (Number_of_Borrowed +1);


    }
    int& Number_availabe(){
    return this->Number_of_availabe;
    }
    int& Number_Borrowed(){
    return this->Number_of_Borrowed;
    }
    string get_title(){
    return Title;
    }
    int Ascii_title(){

    return int(Title[0]);
    }

    /* Book& operator=(Book& obj){
    Title = obj.Title;
    Genre = obj.Genre;
    Author = obj.Author;
    ISBN = obj.ISBN;
    Number_of_availabe = obj.Number_of_availabe;
    Number_of_Borrowed = obj.Number_of_Borrowed;
    return *this;
    }*/



};

#endif // BOOK_H
