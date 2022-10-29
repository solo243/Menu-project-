#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void cincls();
void yellow();
void white();

int main() {
	int choice, pc1, bc1, cc1, pchoice, bchoice, cchoice, cto;
	char pizza1[] = "Margerita Pizza", pizza2[] = "Chef Special", pizza3[] = "Veg Pizza",
		b1[] = "Alooo Tikkie ", b2[] = "Veg Maharaja", b3[] = "Cheese Buri buri ",
		c1[] = "Cola......", c2[] = "Pepsi", yn;

	int qt, total;
	double gst;







beginning:
	yellow();
	cout << "***************************************************************************" << endl;
	cout << "*                        Welcome to our menu                              *" << endl;
	cout << "***************************************************************************" << endl;
	white();
	cout << "Menu is given below \n" << endl;
	cout << "(1)  Pizzas" << endl;
	cout << "(2)  Burgir" << endl;
	cout << "(3)  Cold drinks " << endl;
	cout << "(4)  settings \n" << endl;
	yellow();
	cout << "***************************************************************************" << endl;

	white();
	cout << "What you want to order " << endl;
	cout << "-->> ";
	cin >> choice;
	cout << "\n";

	if (choice == 1)
	{
		system("CLS");
	repizza:
		yellow();
		cout << "***************************************************************************" << endl;
		cout << "*                          Welcome to pizza section!                       *" << endl;
		cout << "***************************************************************************" << endl;
		cout << "\n";
		white();
		cout << "(1)  " << pizza1 << endl;
		cout << "(2)  " << pizza2 << endl;
		cout << "(3)  " << pizza3 << endl;
		cout << "(4)  Back\n" << endl;
		cout << "What you want to order " << endl;
		cout << "-->> ";
		cin >> pchoice;
		cout << "\n";

		if (pchoice == 4)
		{
			system("CLS");
			goto beginning;
		}

		while (pchoice != 1 && pchoice != 2 && pchoice != 3)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			system("cls");
			cout << "\n You choose wrong option pls try  agin \n" << endl;
			goto repizza;
		}


		if (pchoice >= 1 && pchoice <= 5)
		{
		presize:

			yellow();
			cout << "***************************************************************************" << endl;
			cout << "*                         Size and price of pizza                         *" << endl;
			cout << "***************************************************************************" << endl;
			white();
			cout << "(1)  Samll size        $120" << endl;
			cout << "(2)  Persnol size      $150" << endl;
			cout << "(3)  large  size       $200" << endl;
			cout << "(4)  BAck                  \n " << endl;
			cout << "What size you want " << endl;
			cout << "-->> ";
			cin >> pc1;


			if (pc1 == 4)
			{
				system("CLS");
				goto repizza;
			}
			while (pc1 != 1 && pc1 != 2 && pc1 != 3)
			{
				cincls();
				cout << " you choose wrong option \n" << endl;
				goto presize;
			}


			cout << "\n";
		maxlimit:
			cout << "How many pizza you want type quantity" << endl << "-->>";
			cin >> qt;


			if (qt >= 8)
			{
				cout << "cross max limit\n" << endl;
				goto maxlimit;
			}

			switch (pc1)
			{


			case 1:
				cto = 120 * qt;
				gst = 0.067 * cto;


				break;
			case 2:
				cto = 150 * qt;
				gst = 0.0675 * cto;

				break;
			case 3:
				cto = 200 * qt;
				gst = 0.0675 * cto;


				break;
			}


			switch (pchoice)
			{
			rechoice:
				system("CLS");
			case 1:
				system("CLS");
				yellow();
				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << qt << "          " << pizza1 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << "Thank you for ordering from us " << endl << "we hope you like our " << pizza1 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics\n ";

				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			case 2:
				system("CLS");
				yellow();
				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << qt << "          " << pizza2 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << pizza2 << " and if you visit us we glad thanks \n" << endl;

				cout << "\n Do you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			case 3:
				system("CLS");
				yellow();
				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << qt << "          " << pizza3 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << pizza3 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";

				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;

				break;


			}







			if (yn == 'y' || yn == 'Y')
			{
				system("cls");
				goto beginning;
			}





		}
	}




	else  if (choice == 2)
	{
		system("CLS");
	rebergir:
		yellow();
		cout << "***************************************************************************" << endl;
		cout << "*                          Welcome to bergir section!                       *" << endl;
		cout << "***************************************************************************" << endl;
		white();
		cout << "\n";
		cout << "(1)  " << b1 << endl;
		cout << "(2)  " << b2 << endl;
		cout << "(3)  " << b3 << endl;
		cout << "(4)  Back\n" << endl;
		cout << "What you want to order " << endl;
		cout << "-->> ";
		cin >> bchoice;
		cout << "\n";

		if (bchoice == 4)
		{
			system("CLS");
			goto beginning;
		}

		while (bchoice != 1 && bchoice != 2 && bchoice != 3)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			system("cls");
			cout << "\n You choose wrong option pls try  agin \n" << endl;
			goto rebergir;
		}



		if (bchoice >= 1 && bchoice <= 5)
		{
		bresize:
			yellow();

			cout << "***************************************************************************" << endl;
			cout << "*                         Size and price of bergir                        *" << endl;
			cout << "***************************************************************************" << endl;
			white();

			cout << "(1)  Samll size        $30" << endl;
			cout << "(2)  Persnol size      $50" << endl;
			cout << "(3)  large  size       $125" << endl;
			cout << "(4)  BAck                   " << endl;
			cout << "What size you want " << endl;
			cout << "-->> ";
			cin >> bc1;


			if (bc1 == 4)
			{
				system("CLS");
				goto rebergir;
			}
			while (bc1 != 1 && bc1 != 2 && bc1 != 3)
			{
				cincls();
				cout << " you choose wrong option \n" << endl;
				goto bresize;
			}

			cout << "\n";

		bmax:
			cout << "\n";

			cout << "How many burgie you want type quantity" << endl << "-->>";
			cin >> qt;
			if (qt >= 8)
			{
				cout << "cross max limit\n" << endl;
				goto bmax;
			}


			switch (bc1)
			{
			case 1:
				cto = 30 * qt;
				gst = 0.067 * cto;


				break;
			case 2:
				cto = 50 * qt;
				gst = 0.067 * cto;

				break;
			case 3:
				cto = 125 * qt;
				gst = 0.067 * cto;

				break;
			}


			switch (bchoice)
			{
				system("CLS");
			case 1:
				system("CLS");
				yellow();

				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();


				cout << " " << qt << "          " << b1 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << b1 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";

				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			case 2:
				system("CLS");
				yellow();

				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << " " << qt << "          " << b2 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << b2 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";

				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			case 3:
				system("CLS");
				yellow();

				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << " " << qt << "          " << b3 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << b1 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";
				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;


			}
			if (yn == 'y' || yn == 'Y')
			{
				system("cls");
				goto beginning;
			}



		}

	}



	else if (choice == 3)
	{
		system("CLS");
	recold:
		yellow();

		cout << "***************************************************************************" << endl;
		cout << "*                          Welcome to Drink section!                      *" << endl;
		cout << "***************************************************************************" << endl;
		white();

		cout << "\n";
		cout << "(1)  " << c1 << endl;
		cout << "(2)  " << c2 << endl;
		cout << "(3)  Back \n" << endl;
		cout << "What you want to order " << endl;
		cout << "-->> ";
		cin >> cchoice;
		cout << "\n";

		if (cchoice == 3)
		{
			system("CLS");
			goto beginning;
		}
		while (cchoice != 1 && cchoice != 2)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			system("cls");
			cout << "\n You choose wrong option pls try  agin \n" << endl;
			goto recold;
		}




		if (cchoice >= 1 && cchoice <= 2)
		{
		cresize:
			yellow();

			cout << "***************************************************************************" << endl;
			cout << "*                         Size and price of drink                         *" << endl;
			cout << "***************************************************************************" << endl;
			white();

			cout << "(1)  250ml        $10" << endl;
			cout << "(2)  1L     $17" << endl;
			cout << "(3)  Back" << endl;
			cout << "What size you want " << endl;
			cout << "-->> ";
			cin >> cc1;


			if (cc1 == 3)
			{
				system("CLS");
				goto recold;
			}
			while (cc1 != 1 && cc1 != 2)
			{
				cincls();
				cout << " you choose wrong option \n" << endl;
				goto cresize;
			}
		cmax:
			cout << "\n";
			cout << "How many Drinks you want type quantity" << endl << "-->>";
			cin >> qt;
			if (qt >= 8)
			{
				cout << "cross max limit\n" << endl;
				goto cmax;
			}


			switch (cc1)
			{
			case 1:
				cto = 10 * qt;
				gst = 0.067 * cto;
				break;
			case 2:
				cto = 17 * qt;
				gst = 0.067 * cto;

				break;
			default:
				cout << "wrong option";

			}


			switch (cchoice)
			{
				system("CLS");
			case 1:
				system("CLS");
				yellow();

				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << " " << qt << "          " << c1 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();

				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << "Thank you for ordering from us " << endl << "we hope you like our " << b1 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";
				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			case 2:
				system("CLS");
				yellow();

				cout << "-------------------------- Your Order ------------------------------\n" << endl;
				cout << " Quantity          Item      \t\t\t  price" << endl;
				cout << "--------------------------------------------------------------------\n" << endl;
				white();

				cout << " " << qt << "          " << c2 << "\t\t\t$" << cto << endl;
				cout << " " << "          " << " GST  6.7%" << "\t\t\t\t$" << gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << " " << "Total: " << "\t\t\t\t\t" << cto + gst << "\n" << endl;
				yellow();
				cout << "--------------------------------------------------------------------\n" << endl;
				white();
				cout << "Thank you for ordering from us " << endl << "we hope you like our " << b1 << " and if you visit us we glad thanks \n" << endl;
				cout << "Thanks for using this program this is a simple program for beginner to understand basics \n";
				cout << "\nDo you want to order somthing else (Y for order N for exit) Y/N ---->> ";
				cin >> yn;
				break;
			default:
				cout << "wrong optiopn try again";

			}
			if (yn == 'y' || yn == 'Y')
			{
				system("cls");
				goto beginning;
			}


		}


	}
	else if (choice == 4)
	{
		cout << "***************************************************************************" << endl;
		cout << "*                          Welcome to settings section!                      *" << endl;
		cout << "***************************************************************************" << endl;







	}
	else {
		cin.clear();
		cin.ignore(1000, '\n');
		system("cls");
		cout << " You did somthing wrong pls try agin and type number\n" << endl;
		goto beginning;
	}


	return 0;

}

void cincls()
{
	cin.clear();
	cin.ignore(1000, '\n');
	system("cls");
	//	cout << "\n You choose wrong option pls try  agin \n"<<endl;
}
void fordev()
{
	cout << "Hello harshil this side i hope you like this project this is just a beginner program " << endl;
	cout << " very simple project you can also update this project and do what ever you want " << endl;
	cout << " once agin thanks for using this program feel free to use this is open source";
	cout << " :) ";
}
void yellow()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
}
void white()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
}
