#include<iostream>
#include <string>

using namespace std;
//public variable for the number of books which were specified in the Assignment 
const int nob = 25;

class BooksInfo
{
private:
	string Book_Title;
	string Book_authors;
	string Book_publisher;
	int noOfCopies;
	int ISBN;
	double price;
	int Publication_Year;

public:
	//constructor
	BooksInfo()
	{
		Book_Title = "";
		Book_authors = "";
		Book_publisher = "";
		noOfCopies = 0;
		ISBN = 0;
		price = 0;
		Publication_Year = 0;
	}
	//copy constructor
	BooksInfo(BooksInfo& BI)
	{
		Book_Title = BI.Book_Title;
		Book_authors = BI.Book_authors;
		Book_publisher = BI.Book_publisher;
		noOfCopies = BI.noOfCopies;
		ISBN = BI.ISBN;
		price = BI.price;
		Publication_Year = BI.Publication_Year;
	}
	//set functions
	void setBook_Title(string BT) { Book_Title = BT; }
	void setBook_authors(string BA) { Book_authors = BA; }
	void setBook_publisher(string BP) { Book_publisher = BP; }
	void setnoOfCopies(int NOC) { noOfCopies = NOC; }
	void setISBN(int IS) { ISBN = IS; }
	void setprice(double pr) { price = pr; }
	void setPublication_Year(int PY) { Publication_Year = PY; }
	//get functions
	string getBook_Title() { return Book_Title; }
	string getBook_authors() { return Book_authors; }
	string getBook_publisher() { return Book_publisher; }
	int getnoOfCopies() { return noOfCopies; }
	int getISBN() { return ISBN; }
	double getprice() { return price; }
	int getPublication_Year() { return Publication_Year; }

	//searching for a book function by its Title and ISBN and passing the array of books
	void search(string bt, int is, BooksInfo bi[nob])
	{

		for (int i = 0; i < nob; i++)
		{

			if (bt == bi[i].Book_Title && is == bi[i].ISBN)
			{

				cout << "The book's info you searched for is: " << endl;
				cout << bi[i].Book_Title << endl;
				cout << bi[i].Book_authors << endl;
				cout << bi[i].Book_publisher << endl;
				cout << bi[i].noOfCopies << endl;
				cout << bi[i].ISBN << endl;
				cout << bi[i].price << endl;
				cout << bi[i].Publication_Year << endl;


			}
		}
	}
	//function to show the number of copies in stock, set the number of copies in stock, update the number of copies in stock

	int copiesStock()
	{
		char yn;
		int newC;
		cout << "Number of copies in stock for the book is: " << getnoOfCopies() << endl;
		cout << "Do you want to set a new number for the copies in stock? (y/n) " << endl;
		cin >> yn;
		if (yn == 'y' || yn == 'Y')
		{
			cout << "Please Set the number of copies in stock: ";
			cin >> newC;
			setnoOfCopies(newC);
		}
		else if (yn == 'n' || yn == 'N')
		{
			return noOfCopies;
		}
		return noOfCopies;
	}
	//function to modify the book's information
	void modify()
	{
		string ba, bp;
		double pri;
		cout << "Enter the new name of the book author: ";
		cin >> ba;
		cout << endl;
		cout << "Enter the new name of the book publisher: ";
		cin >> bp;
		cout << endl;
		cout << "Enter the new price of the book: ";
		cin >> pri;
		Book_authors = ba;
		Book_publisher = bp;
		price = pri;
	}
	//print function
	void print()
	{
		cout << "Book Title: " << Book_Title << endl;
		cout << "Book authors: " << Book_authors << endl;
		cout << "Book publisher: " << Book_publisher << endl;
		cout << "noOfCopies: " << noOfCopies << endl;
		cout << "ISBN: " << ISBN << endl;
		cout << "price: " << price << endl;
		cout << "Publication Year: " << Publication_Year << endl;
	}

	bool operator >= (BooksInfo b)
	{
		if (Publication_Year >= b.Publication_Year)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator == (BooksInfo b)
	{
		if (Publication_Year == b.Publication_Year)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};



int main()

{
	string sb;
	int sis;
	BooksInfo b[nob];

	//The 25 books information that are a part of the array ( in the assignment it said Make a record of 25 books using Arrays of type BooksInfo)

	b[0].setBook_Title("The Art of Deception");
	b[0].setBook_authors("Kevin D. Mitnick");
	b[0].setBook_publisher("John Wiley");
	b[0].setnoOfCopies(1);
	b[0].setISBN(43014);
	b[0].setprice(70);
	b[0].setPublication_Year(2001);

	b[1].setBook_Title("The Twelve Caesars");
	b[1].setBook_authors("Suetonius");
	b[1].setBook_publisher("Penguin Classics");
	b[1].setnoOfCopies(2);
	b[1].setISBN(97801);
	b[1].setprice(83);
	b[1].setPublication_Year(121);

	b[2].setBook_Title("The History of the Decline and Fall of the Roman Empire");
	b[2].setBook_authors("David P. Womersley");
	b[2].setBook_publisher("Penguin Classics");
	b[2].setnoOfCopies(3);
	b[2].setISBN(71404);
	b[2].setprice(60);
	b[2].setPublication_Year(1776);

	b[3].setBook_Title("The Roman Revolution by Ronald Syme");
	b[3].setBook_authors("Ronald Syme");
	b[3].setBook_publisher("OUP Oxford");
	b[3].setnoOfCopies(4);
	b[3].setISBN(15045);
	b[3].setprice(56);
	b[3].setPublication_Year(1939);

	b[4].setBook_Title("Cybersecurity For Dummies");
	b[4].setBook_authors("Joseph Steinberg");
	b[4].setBook_publisher("John Wiley & Sons Inc");
	b[4].setnoOfCopies(4);
	b[4].setISBN(60322);
	b[4].setprice(39);
	b[4].setPublication_Year(2019);

	b[5].setBook_Title("Hacking: The Art Of Exploitation");
	b[5].setBook_authors("Jon Erickson");
	b[5].setBook_publisher("No Starch Press");
	b[5].setnoOfCopies(4);
	b[5].setISBN(71441);
	b[5].setprice(47);
	b[5].setPublication_Year(2008);

	b[6].setBook_Title("Black Hat Python");
	b[6].setBook_authors("Justin Seitz");
	b[6].setBook_publisher("No Starch Press");
	b[6].setnoOfCopies(3);
	b[6].setISBN(75900);
	b[6].setprice(92);
	b[6].setPublication_Year(2014);

	b[7].setBook_Title("The Hacker Playbook 2: Practical Guide To Penetration Testing");
	b[7].setBook_authors("Peter Kim");
	b[7].setBook_publisher("Createspace Independent Publishing Platform ");
	b[7].setnoOfCopies(3);
	b[7].setISBN(14566);
	b[7].setprice(137);
	b[7].setPublication_Year(2015);

	b[8].setBook_Title("The Hacker Playbook 3: Practical Guide to Penetration Testing");
	b[8].setBook_authors("Peter Kim");
	b[8].setBook_publisher("Independently Published");
	b[8].setnoOfCopies(2);
	b[8].setISBN(69444);
	b[8].setprice(135);
	b[8].setPublication_Year(2018);

	b[9].setBook_Title("Rtfm: Red Team Field Manual");
	b[9].setBook_authors("Ben Clark");
	b[9].setBook_publisher("Createspace Independent Publishing Platform");
	b[9].setnoOfCopies(5);
	b[9].setISBN(15504);
	b[9].setprice(82);
	b[9].setPublication_Year(2014);

	b[10].setBook_Title("Metasploit Penetration Testing Cookbook");
	b[10].setBook_authors("Abhinav Singh");
	b[10].setBook_publisher("Packt Publishing Limited");
	b[10].setnoOfCopies(7);
	b[10].setISBN(18428);
	b[10].setprice(94);
	b[10].setPublication_Year(2012);

	b[11].setBook_Title("Metasploit");
	b[11].setBook_authors("David Kennedy Jr.");
	b[11].setBook_publisher("No Starch Press");
	b[11].setnoOfCopies(4);
	b[11].setISBN(17288);
	b[11].setprice(159);
	b[11].setPublication_Year(2011);

	b[12].setBook_Title("Penetration Testing");
	b[12].setBook_authors("Georgia Weidman");
	b[12].setBook_publisher("No Starch Press");
	b[12].setnoOfCopies(8);
	b[12].setISBN(15641);
	b[12].setprice(158);
	b[12].setPublication_Year(2014);

	b[13].setBook_Title("Cult of the Dead Cow: How the Original Hacking Supergroup Might Just Save the World");
	b[13].setBook_authors("Joseph Menn");
	b[13].setBook_publisher("PublicAffairs");
	b[13].setnoOfCopies(2);
	b[13].setISBN(12363);
	b[13].setprice(58);
	b[13].setPublication_Year(2020);

	b[14].setBook_Title("The Psychology of Money: Timeless lessons on wealth, greed, and happiness");
	b[14].setBook_authors("Morgan Housel");
	b[14].setBook_publisher("Harriman House Publishing");
	b[14].setnoOfCopies(10);
	b[14].setISBN(87681);
	b[14].setprice(83);
	b[14].setPublication_Year(2020);

	b[15].setBook_Title("How Psychology Works: The Facts Visually Explained");
	b[15].setBook_authors("DK");
	b[15].setBook_publisher("DK Publishing");
	b[15].setnoOfCopies(12);
	b[15].setISBN(14617);
	b[15].setprice(39);
	b[15].setPublication_Year(2020);

	b[16].setBook_Title("influence: The Psychology of Persuasion");
	b[16].setBook_authors("Robert B Cialdini PhD");
	b[16].setBook_publisher("HarperBusiness");
	b[16].setnoOfCopies(7);
	b[16].setISBN(30189);
	b[16].setprice(93);
	b[16].setPublication_Year(2007);

	b[17].setBook_Title("Anubis: The History and Legacy of the Ancient Egyptian God of the Afterlife");
	b[17].setBook_authors("Markus Carabas");
	b[17].setBook_publisher("Createspace Independent Publishing Platform");
	b[17].setnoOfCopies(9);
	b[17].setISBN(30659);
	b[17].setprice(40);
	b[17].setPublication_Year(2018);

	b[18].setBook_Title("The Hermetica: The Lost Wisdom of the Pharaohs");
	b[18].setBook_authors("Timothy Freke");
	b[18].setBook_publisher("Jeremy P Tarcher");
	b[18].setnoOfCopies(10);
	b[18].setISBN(12692);
	b[18].setprice(36);
	b[18].setPublication_Year(2008);

	b[19].setBook_Title("The Cosmic Serpent: DNA and the Origins of Knowledge");
	b[19].setBook_authors("Jeremy Narby");
	b[19].setBook_publisher("Tarcher/Putnam");
	b[19].setnoOfCopies(15);
	b[19].setISBN(87642);
	b[19].setprice(52);
	b[19].setPublication_Year(1999);

	b[20].setBook_Title("Mystery of the Egyptian Scroll");
	b[20].setBook_authors("Scott Peters");
	b[20].setBook_publisher("Best Day Books for Young Readers");
	b[20].setnoOfCopies(8);
	b[20].setISBN(95283);
	b[20].setprice(59);
	b[20].setPublication_Year(2016);

	b[21].setBook_Title("Barbarians to Angels: The Dark Ages Reconsidered");
	b[21].setBook_authors("Peter S. Wells");
	b[21].setBook_publisher("W. W. Norton & Company");
	b[21].setnoOfCopies(9);
	b[21].setISBN(35399);
	b[21].setprice(67);
	b[21].setPublication_Year(2009);

	b[22].setBook_Title("Attila the Hun: Arch-Enemy of Rome");
	b[22].setBook_authors("Ian Hughes");
	b[22].setBook_publisher("Pen & Sword Military");
	b[22].setnoOfCopies(20);
	b[22].setISBN(93452);
	b[22].setprice(39);
	b[22].setPublication_Year(2019);

	b[23].setBook_Title("Dark Stars");
	b[23].setBook_authors("Danielle Rollins");
	b[23].setBook_publisher("HarperTeen");
	b[23].setnoOfCopies(22);
	b[23].setISBN(62605);
	b[23].setprice(29);
	b[23].setPublication_Year(2021);

	//using copy constructor
	b[24] = b[15];

	//sb is the title and sis is the isbn that the user is searching for
	cout << "Please Enter the Book title you want to search for: " << endl;
	getline(cin, sb);
	cout << endl;
	cout << "Please Enter the ISBN of the book you want to search for: " << endl;
	cin >> sis;


	//the search function will search in the whole array but i just used b[0] to call it since searching is supposed to be in the whole database for books

	b[0].search(sb, sis, b);

	//modify function for 3rd element (here I assumed that the user wanted to modify this specific book rather than being asked which one would he want to modify since all objects share the same functions)
	b[2].modify();


	//shows the information of the book after being updated
	cout << b[2].getBook_Title() << endl;
	cout << b[2].getBook_authors() << endl;
	cout << b[2].getBook_publisher() << endl;
	cout << b[2].getnoOfCopies() << endl;
	cout << b[2].getISBN() << endl;
	cout << b[2].getprice() << endl;
	cout << b[2].getPublication_Year() << endl;

	cout << endl;

	b[9].copiesStock();

	if (b[0] >= b[3])
	{
		cout << "Between " << b[0].getBook_Title() << " and " << b[3].getBook_Title() << " " << b[0].getBook_Title() << " was the one that is recently published" << endl;
	}
	else
	{
		cout << "Between " << b[0].getBook_Title() << " and " << b[3].getBook_Title() << " " << b[3].getBook_Title() << " was the one that is recently published" << endl;
	}

	//comparing the two books used in the copy constructor 
	if (b[24] == b[15])
	{
		cout << b[24].getBook_Title() << " and " << b[15].getBook_Title() << " were published on same year" << endl;
	}
	else
	{
		cout << b[24].getBook_Title() << " and " << b[15].getBook_Title() << " were NOT published on same year" << endl;
	}

	//this is to test the print function so it is just printing random books
	cout << endl;
	for (int i = 0; i < nob; i += 5)
	{
		b[i].print();
		cout << endl;
	}



	return 0;
}
