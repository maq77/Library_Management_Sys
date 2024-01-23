#include <bits/stdc++.h>
#include"library.h"
#include"LinkedList.h"
using namespace std;

int main()
{
    Library Library;
    int n;
do{
    cout<<"\n\t\t\t--[Library Management Sys]--\n"<<endl;
    cout<<"\t\t\t"<<endl;
    cout<<"\t\t\t1-Add Book"<<endl;
    cout<<"\t\t\t2-Show Catalog"<<endl;
    cout<<"\t\t\t3-Search Book"<<endl;
    cout<<"\t\t\t4-Delete Book"<<endl;
    cout<<"\t\t\t5-Borrow Book"<<endl;
    cout<<"\t\t\t6-Sort Books By Title"<<endl;
    cout<<"\t\t\t0-Exit"<<endl;

    cout<<"\t\t\t>>>> ";cin>>n;

    switch(n){
case 0:
    {


           break;
    }
case 1:{
           Library.add_book();
           break;
}
case 2:{
        Library.print_Catalog();
        break;
}
case 3:{
        string Title="";
        cout<<"\t\t\tEnter Title : ";
        cin>>Title;
        Library.Search_By_Title(Title);
        break;
}

case 4:
         {


        string Title="";
        cout<<"\t\t\tEnter Title : "; cin>>Title;
        Library.remove_book(Title);
        break;
         }
case 5:
        {

        string Title="";
        cout<<"\t\t\tEnter Title : "; cin>>Title;
        Library.Borrow(Title);
        break;

         }
case 6:
    {

        Library.sort_by_Title();
        cout<<"\t\t\tSorted By Title Successfully !"<<endl;


    }

//     default:
  //      break;


    }
    }while(n != 0);
    return 0;
}
