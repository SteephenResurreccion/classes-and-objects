#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

	class Book{
		private:
			string title, author;
			int year;
			
		public:
			void setTitle(string a){
				title=a;
			}
			
			void setAuthor(string b){
				author=b;
			}
			
			void setYear(int c){
				year=c;
			}
			
			string getTitle(){
				return title;
			}
			
			string getAuthor(){
				return author;
			}
			
			int getYear(){
				return year;	
			}
	};
	
	



	int main(){
		int yearmain;
		int pass=0, numchoice;
		string titlemain, authormain;
		int i=0,h=0;
		Book bookarray[50];
		int enter=0;
		char temp;
		
		
		do{
			cout<<"--------------------------------------------------------------------------------------------------\n	Menu: ";
			cout<<"\n	1. Add Book";
			cout<<"\n	2. Display Book";
			cout<<"\n	3. Search Book";
			cout<<"\n	4. Exit";
			cout<<"\n	Input your choice via number[1-4]: ";
			cin>>numchoice;
			cin.ignore();
				switch (numchoice){
					case 1:
						cout<<"\n	"<<i+1<<". Add Book";
						cout<<"\n		Enter Title: ";
						getline(cin,titlemain);
						cout<<"		Enter Author: ";
						getline(cin,authormain);
						cout<<"		Enter Year: ";
						cin>>yearmain;
						cout<<"		Successful!\n		Press Enter to Continue";	
						getch();
						bookarray[i].setTitle(titlemain);
						bookarray[i].setAuthor(authormain);
						bookarray[i].setYear(yearmain);
						i=i+1;
						pass=1;
						system("cls");
					break;
					case 2:
						cout<<"\n	Display Book";
						cout<<"\n	Title			Author			Year";
						for(h=0;h<i;h++){
							cout<<"\n	"<<bookarray[h].getTitle(); 
							cout<<"			"<<bookarray[h].getAuthor(); 
							cout<<"			"<<bookarray[h].getYear(); 
						}
						cout<<"\n\n	Press Enter to Continue";	
						getch();
						pass=1;
						system("cls");
					break;
					case 3:
						cout<<"\n	3. Search Book";
						cout<<"\n		Enter Title: ";
						getline(cin,titlemain);
						for(h=0;h<i;h++){
							if(bookarray[h].getTitle().compare(titlemain)==0){
								cout<<"\n	Title				Author				Year";
								cout<<"\n	"<<bookarray[h].getTitle(); 
								cout<<"				"<<bookarray[h].getAuthor(); 
								cout<<"				"<<bookarray[h].getYear(); 
							}
							else
							cout<<"		Could not find the book you were looking for";
						}
						cout<<"\n\n	Press Enter to Continue";	
						getch();
						pass=1;
						system("cls");
					break;
					case 4:
						cout<<"\n	4. Exit";
						pass=0;
						system("cls");
					break;
					default:
						cout<<"Invalud Input, Choose Again";
						pass=1;
			}  
		}while(pass==1);
		return 0;
	}