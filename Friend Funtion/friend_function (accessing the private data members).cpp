// Q no. 2. You are working on a library management system. Your task is to implement two classes, Book and Library, such that the library’s member function becomes a friend function of Book. Class Book represents a book in the library. It has private data members for the book's title, author, and book ID. Class Library represents the library itself. It has an array to store Book objects and a member function called 'displayBookDetails' that takes a Book object as input and displays its details. Your task is to implement the classes and their member functions so that 'displayBookDetails' in Library becomes a friend function of Book, allowing it to access the private data members of the Book and display its details.

#include <iostream>
#include <string>
using namespace std;

class Book;

class Library
{
    Book *B1;
public:
    void displayBookDetails(Book);
    
};

class Book
{
    string title, author;
    int id;
public:
    void input()
    {
        cout << "Enter the title of the book: ";
        getline(cin>>ws,title);
        cout << "Enter the author of the book: ";
        getline(cin>>ws,author);
        cout << "Enter the ID: ";
        cin >> id;
    }
    friend void Library::displayBookDetails(Book);
};



void Library :: displayBookDetails(Book B)
{
    cout << "The title of the book is " << B.title << endl;
    cout << "The author of the book is " << B.author << endl;
    cout << "The id of the book is " << B.id << endl;
}

int main()
{
    Book B;
    B.input();
    Library L;
    L.displayBookDetails(B);
    return 0;
}