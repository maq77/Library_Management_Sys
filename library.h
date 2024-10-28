#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include "linkedlist.h"
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class Library
{
    public:
        int Number_of_books = 0;
        Book book;
        LinkedList<Book> books;
        void add_book(){ ////////////insert
         book.get_book();
        books.push(book);
        Number_of_books++;
        }
        void print_Catalog(){///////////////print
        if(Number_of_books == 0 ){
                cout<<"\t\t\tThere is not any books added !"<<endl;
            }
        for(int i=0;i<Number_of_books;i++){
            cout<<"\n\t\t\tBook [ No."<<i+1<<" ]"<<endl;
        books.at(i).print_book();
        cout<<"\t\t\t--------------------------------------"<<endl;
        }
        }
        void Search_By_Title(string Title){/////////////Search
         bool flag=false;
         for(int i=0;i<Number_of_books;i++){
         if(books.at(i).Title == Title){
            books.at(i).print_book();
            flag = true;
            break;
         }
         }
         if(flag){
            cout<<"\t\t\tBook Matched !"<<endl;
         }
         else{
            cout<<"\t\t\tNo Books Matched !"<<endl;
         }
        }
        void remove_book(string Title){////////////remove
        bool flag=false;
        char flag_y_n;
        int index=0;
        for(int i=0;i<Number_of_books;i++){
         if(books.at(i).Title == Title){
            books.at(i).print_book();
            cout<<"\t\t\tDo you want to remove this Book (y,n) : ";
            cin>>flag_y_n;
            flag = true;
            break;
         }
         index++;
         }
         if(flag_y_n=='y'){
                books.delete_node(index);
                Number_of_books--;
                cout<<"\t\t\tDeleted Successfully !"<<endl;
         }
         if(!flag){
           cout<<"\n\t\t\tThere is not a book with this Title - No Books Matched !"<<endl;
         }
        }
        void Borrow(string Title){ //////Bowrrow
          bool flag=false;
          char flag_y_n;
          int count=0;
          for(int i=0;i<Number_of_books;i++){
          if(books.at(i).Title == Title){
            books.at(i).print_book();
            cout<<"\t\t\tDo you want to Borrow this Book (y,n) : ";
            cin>>flag_y_n;
            if(books.at(i).is_available() && flag_y_n == 'y'){
            books.at(count).add_borrow();
            flag = true;
            }
            else if(!(books.at(i).is_available())) {
            books.at(i).availability(false);
            cout<<"\n\t\t\tThere is not any book to Borrow "<<endl;
            }
            count++;
            break;
         }
         }
         if(flag){
            cout<<"\n\t\t\tBorrowed Successfully ! "<<endl;
         }

        }
        void sort_by_Title(){//////////Sort
            vector<string> sorted (123 , "!");
            for(int i =  0 ; i < Number_of_books ; i++){
                sorted[(int)(books.at(i).get_title()[0])] = books.at(i).get_title();
            }
            int count=1;
            for(int i = 65 ; i<123 ; i++){
             if(sorted[i] == "!") continue;
             cout <<"\t\t\t [ "<<count++<<" ] "<<sorted[i] << endl;
             cout<<endl;

            }
        }
        void Save(){
         ofstream myfile;
         myfile.open("Save.dat",ios::binary);
         if(myfile.is_open()){
         myfile << Number_of_books<<endl;  //////First Line is Number of Books
        for(int i=0;i<Number_of_books;i++){ //////out Books
         myfile << books.at(i);
        }
         myfile.close();
         }
         else{
            cerr<<"Unable to open the file!"<<endl;
         }
        }
        void Load(){
        Book book_read;
        ifstream myfile ("Save.dat",ios::binary);
        if(myfile.is_open()){
        myfile>>Number_of_books;  ///////////reading number of books
        myfile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        for(int i=0;i<Number_of_books;i++){ //////////reading books
        myfile >> book_read;
        myfile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << book_read;
        books.push(book_read);
        //Number_of_books++;
        }
        myfile.close();
        }
        else{
            cerr<<"Unable to open the file for reading!"<<endl;
        }
        }

};

#endif // LIBRARY_H
