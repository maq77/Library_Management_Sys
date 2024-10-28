
//Files operation  in System

void Save(){ /////////////Save file
         ofstream myfile;
         myfile.open("Save.dat",ios::binary);
         if(myfile.is_open()){
         //while(C){
         myfile << books.at(0);              /////////////////// Example to Save
      // myfile << books.at(1);  //////////////////  Example to Save
        //}
         myfile.close();
         }
         else{
            cerr<<"Unable to open the file!"<<endl;
         }
        }
void Load(){ ///////////////////////Load File
        Book book_read;                        //////Example to load from
        ifstream myfile ("Save.dat",ios::binary);
        if(myfile.is_open()){
        //while(C){
        myfile >> book_read;                     //////////////////Example to load from
        myfile.close();
        cout << book_read;                         //////Example to load from
        books.push(book_read);                     //////////////////////Example to load from
        Number_of_books++;
        //}                      //////////////////////////////////Example to load from
        }
        else{
            cerr<<"Unable to open the file for reading!"<<endl;
        }
        }


//////////////////////////////////////////////////////////////////////////////////

//////////important Functions to include for cin and cout operation in files

friend ifstream& operator>>(ifstream &infile,Book &b){  ////////////// cin file  /// Load From File
      infile>>b.Title;
      infile>>b.Author;
      infile>>b.Genre;
      infile>>b.ISBN;
      infile>>b.Number_of_availabe;
      infile>>b.Number_of_Borrowed;
      infile>>b.Availability_Status;
    return infile;
    }
friend ofstream& operator<<(ofstream &outfile,Book &b){  //////////// cout file  //////// Save at File
    outfile<<b.Title
      <<"\n"<<b.Author
      <<"\n"<<b.Genre
      <<"\n"<<b.ISBN
      <<"\n"<<b.Number_of_availabe
      <<"\n"<<b.Number_of_Borrowed
      <<"\n"<<b.Availability_Status<<endl;
    return outfile;
    }
/////////////////////////////////////////////////////////////// [ End ] //////////////////////////////////////////
