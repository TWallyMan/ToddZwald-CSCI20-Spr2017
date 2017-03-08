// Todd Zwald
// 3/7/17
/*
    This program has a class of BookInfo that holds its variables and functions
    that are then called in the main function. This allows the user to input
    an authors name, the title of their book, and the year it was copyrighted.
    There is also a function that outputs all of that information in a cleaner
    form than when it was input.
*/

#include <iostream>
#include<cstring>
using namespace std;

/*  Class that holds variables and function names with parameters as well as the
    accessors and mutators for those functions. The functions are defined 
    outside of the class.
*/
class BookInfo{
    
    private:
        
        string nameOfAuthor; //Holds the authors name for each object
        string nameOfBook; //Holds name of book for each object
        int yearOfCopyright; //Holds year book was copyrighted for each object
    
    public:
        
        // The Set and Get for Book names that are input and output in main
        void SetBookTitle(string bookName);
        string GetBookTitle();
        
        //The Set and Get for Author name that are input and output in main
        void SetAuthorName(string personsName);
        string GetAuthorName();
        
        //The Set and Get for Copyright date that are input and output in main
        void SetCopyrightYear(int year);
        int GetCopyrightYear();
        
        void PrintBookInfo(); //Print function for all data from all functions
};
//The set function for Authors name
void BookInfo::SetAuthorName(string personsName){
    nameOfAuthor = personsName;
    return;
};
//Get function for Authors name
string BookInfo::GetAuthorName(){
    return nameOfAuthor;
};
//The set function for Book titles
void BookInfo::SetBookTitle(string bookName){
    nameOfBook = bookName;
    return;
};
//Get function for Book titles
string BookInfo::GetBookTitle(){
    return nameOfBook;
};
//The set function for Copyright dates
void BookInfo::SetCopyrightYear(int year){
    yearOfCopyright = year;
    return;
};
//Get function for Copyright functions
int BookInfo::GetCopyrightYear(){
    return yearOfCopyright;
};
//Print function using cout for all book information
void BookInfo::PrintBookInfo(){
    cout << GetAuthorName() << endl;
    cout << GetBookTitle() << endl;
    cout << GetCopyrightYear() << endl;
}

int main(){
    
    string a; // data location for author name
    string b; // data location for book name
    int y;    // data location for copyright date
    
    // Decleration for each object
    BookInfo firstBook;
    BookInfo secondBook;
    BookInfo thirdBook;
    BookInfo fourthBook;
    BookInfo fifthBook;
    
    cout << "FIRST BOOK" << endl;
    cout << "Enter in a name of an author: ";
    getline(cin, a);
    firstBook.SetAuthorName(a);
    cout << firstBook.GetAuthorName() << endl;
    
    cout << "Enter in a title of a book they wrote: ";
    getline(cin, b);
    firstBook.SetBookTitle(b);
    cout << firstBook.GetBookTitle() << endl;
    
    cout << "Enter in the year it was copyrighted: ";
    cin >> y;
    firstBook.SetCopyrightYear(y);
    cout << firstBook.GetCopyrightYear() << endl;
    
    cin.clear();
    cin.ignore();
    
    cout << "SECOND BOOK" << endl;
    cout << "Enter in a name of an author: ";
    getline(cin, a);
    secondBook.SetAuthorName(a);
    cout << secondBook.GetAuthorName() << endl;
    
    cout << "Enter in a title of a book they wrote: ";
    getline(cin, b);
    secondBook.SetBookTitle(b);
    cout << secondBook.GetBookTitle() << endl;
    
    cout << "Enter in the year it was copyrighted: ";
    cin >> y;
    secondBook.SetCopyrightYear(y);
    cout << secondBook.GetCopyrightYear() << endl;
    
    cin.clear();
    cin.ignore();
    
    cout << "THIRD BOOK" << endl;
    cout << "Enter in a name of an author: ";
    getline(cin, a);
    thirdBook.SetAuthorName(a);
    cout << thirdBook.GetAuthorName() << endl;
    
    cout << "Enter in a title of a book they wrote: ";
    getline(cin, b);
    thirdBook.SetBookTitle(b);
    cout << thirdBook.GetBookTitle() << endl;
    
    cout << "Enter in the year it was copyrighted: ";
    cin >> y;
    thirdBook.SetCopyrightYear(y);
    cout << thirdBook.GetCopyrightYear() << endl;
    
    cin.clear();
    cin.ignore();
    
    cout << "FOURTH BOOK" << endl;
    cout << "Enter in a name of an author: ";
    getline(cin, a);
    fourthBook.SetAuthorName(a);
    cout << fourthBook.GetAuthorName() << endl;
    
    cout << "Enter in a title of a book they wrote: ";
    getline(cin, b);
    fourthBook.SetBookTitle(b);
    cout << fourthBook.GetBookTitle() << endl;
    
    cout << "Enter in the year it was copyrighted: ";
    cin >> y;
    fourthBook.SetCopyrightYear(y);
    cout << fourthBook.GetCopyrightYear() << endl;
    
    cin.clear();
    cin.ignore();
    
    cout << "FIFTH BOOK" << endl;
    cout << "Enter in a name of an author: ";
    getline(cin, a);
    fifthBook.SetAuthorName(a);
    cout << fifthBook.GetAuthorName() << endl;
    
    cout << "Enter in a title of a book they wrote: ";
    getline(cin, b);
    fifthBook.SetBookTitle(b);
    cout << fifthBook.GetBookTitle() << endl;
    
    cout << "Enter in the year it was copyrighted: ";
    cin >> y;
    fifthBook.SetCopyrightYear(y);
    cout << fifthBook.GetCopyrightYear() << endl;
    
    
    cout << "Information for each book start with authors name, then title and then year" << endl;
    
    cout << "Book 1" << endl;
    firstBook.PrintBookInfo();
    cout << "Book 2" << endl;
    secondBook.PrintBookInfo();
    cout << "Book 3" << endl;
    thirdBook.PrintBookInfo();
    cout << "Book 4" << endl;
    fourthBook.PrintBookInfo();
    cout << "Book 5" << endl;
    fifthBook.PrintBookInfo();
    
}