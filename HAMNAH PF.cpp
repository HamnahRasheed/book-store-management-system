#include<iostream>
#include<string>
using namespace std;

struct Book{
string title;
string author;
int year;
double price;
int quantity;
};

const int MAX_BOOKS = 2;
int numBooks = 0;
Book books[MAX_BOOKS];

void Display_inventory()
{
if(numBooks==0)
{
cout<<"No books in the store."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else
{
cout<<"Book information: "<<endl;
for(int i=0;i<numBooks;i++)

{
cout<<"Title: "<<books[i].title<<endl;
cout<<"Author: "<<books[i].author<<endl;
cout<<"Year: "<<books[i].year<<endl;
cout<<"Price: "<<books[i].price<<endl;
cout<<"Quantity: "<<books[i]. quantity<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}
}

void Add_book()
{
if(numBooks==MAX_BOOKS)
{
cout<<"Inventory is full.Cannot add more books."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else{
cout<<"Enter book details: "<<endl;
cout<<"Title: ";
cin.ignore();
getline(cin,books[numBooks].title);
cout<<"Author: ";
getline(cin,books[numBooks].author);
cout<<"Year: ";
cin>>books[numBooks].year;
cout<<"Price: ";
cin>>books[numBooks].price;
cout<<"Quantity: ";
cin>>books[numBooks]. quantity;

cout<<"Book added successfully."<<endl;
numBooks++;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}

void Display_book_info()
{
if(numBooks==0)
{
cout<<"No books in the store."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else{
cout<<"Showing details of a book by title: "<<endl;
string titleName;
cout<<"Enter title: ";
cin.ignore();
getline(cin,titleName);
for(int i=0;i<numBooks;i++){
if(books[i].title==titleName){
cout<<"Author: "<<books[i].author<<endl;
cout<<"Year: "<<books[i].year<<endl;
cout<<"Quantity: "<<books[i].quantity<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
return;
}
else
{
cout<<"No books in the store with this name."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}
}
}

void Display_books_by_author()
{
if(numBooks==0)
{
cout<<"No books in the store."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else{
cout<<"Showing all books by author: "<<endl;
string authorName;
cout<<"Enter author name: ";
cin.ignore();
getline(cin, authorName);
cout<<"Books by "<<authorName<<":"<<endl;
for(int i=0;i<numBooks;i++)
{
if(books[i].author==authorName)
{
cout<<"Title: "<<books[i].title<<endl;
cout<<"Year: "<<books[i].year<<endl;
cout<<"Price: "<<books[i].price<<endl;
cout<<"Quantity: "<<books[i].quantity<<endl;

cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else
{
cout<<"No books in the store of this author."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}
}
}

void Display_Num_books_by_title()
{
if(numBooks==0)
{
cout<<"No books in the store."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else{
string titleName;
cout<<"Enter title: ";
cin.ignore();
getline(cin, titleName);
int count=0;
for(int i=0;i<numBooks;i++)
{
if(books[i].title==titleName)
{
count++;
}}
cout<<"Number of books with title "<<titleName<<":"<<count<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}

void Display_total_num_books()
{
cout<<"Total number of books in the store: "<<numBooks<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
void Sell_book()
{
if (numBooks == 0)
{
cout<<"No books available to sell.Please come back later for purchasing."<< endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
else
{
cout << "Selling a book:" << endl;
string titleName;
cout << "Enter title: ";
cin.ignore();
getline(cin, titleName);
        
for (int i = 0; i < numBooks; i++)
{
if (books[i].title == titleName)
{
if (books[i].quantity > 0)
{
books[i].quantity--;
cout << "Book sold successfully." << endl;
}
else
{
cout << "Sorry, the book is out of stock." << endl;
}
cout <<"-----------------------------------------------------"<<"\n"<< endl;
return;
}
}
cout << "Book with title " << titleName << " not found in the inventory." << endl;
cout <<"-----------------------------------------------------"<<"\n"<< endl;
}
}


int main()
{
int choice;
do {
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-                               -*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-       WELCOME TO BOOKLAND     -*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-                               -*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
cout<<"1- Display Inventory."<<endl;
cout<<"2- Add a book."<<endl;
cout<<"3- Show details of a book by title."<<endl;
cout<<"4- Show all books of a specific author."<<endl;
cout<<"5- Show the number of books with a specific title."<<endl;
cout<<"6- Display the total number of books in the store."<<endl;
cout<<"7- Sell a book. "<<endl;
cout<<"0- Exit."<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"\n"<<"Enter your choice: ";
cin>>choice;

switch(choice){

case 1:
Display_inventory();
break;
case 2:
Add_book();
break;
case 3:
Display_book_info();
break;
case 4:
Display_books_by_author();
break;
case 5:
Display_Num_books_by_title();
break;
case 6:
Display_total_num_books();
break;
case 7:
Sell_book();
break;
case 0:
cout<<"Exiting....."<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"*****************************************************"<<endl;
cout<<"***********   THANK YOU FOR VISITING.    ************"<<endl;
cout<<"*****************************************************"<<endl;
cout<<"-----------------------------------------------------"<<endl;
break;
default:
cout<<"Invalid choice.Please try again."<<endl;
cout<<"-----------------------------------------------------"<<"\n"<<endl;
}
}
while(choice!=0);

return 0;
}

