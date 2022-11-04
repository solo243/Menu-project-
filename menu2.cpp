#include <iostream>
#include <windows.h>
#include <string>
using namespace std;



class menu
{
public:
	string
		pizza1 = "Margrita",
		pizza2 = "Chef special",
		pizza3 = "Paneer Pizza ";

	string
		burgir1 = "Aloo tikki",
		burgir2 = "Veg Maharaja",
		burgir3 = "Chef Special";

	string
		cold1 = "Cola",
		cold2 = "Pepsi",
		cold3 = "Lemon";

	int
		p1 = 100,
		p2 = 120,
		p3 = 200,

		b1 = 60,
		b2 = 100,
		b3 = 140,

		c1 = 30,
		c2 = 50,
		c3 = 100;

	//this is all item string array 
	string choice[100] = { "Pizzas","Burgirs","Cold Drinks" };

	//pizza price and item 
	string pizzas[100] = { pizza1,pizza2,pizza3 };
	int    p_price[20] = { p1,p2,p3 };

	//burgir price and item 
	string burgirs[100] = { burgir1, burgir2, burgir3 };
	int   b_price[20] = { b1,b2,b3 };

	//cold price and item 
	string colds[20] = { cold1,cold2,cold3 };
	int   c_price[20] = { c1,c2,c3 };
	

	string main_choice, b_choice, c_choice, change_pizza_name,
		change_burgir_name, itemname, gg;
	int userprice, addpricecin, additem, changeoption, itempick;
	int s_choice, hh ,price[20];
	int GST=6;
	string gst_option, p_choice;

	void welcome();
	void pizza();
	void burgir();
	void cold();
	void setting();

	//function that change a item value 
	void addpizzaprice();
	void addburgirprice();
	void addcoldprice();

	void changeoptions();
	void item_add_fun();
	void add_gst();

	void add_item_cold();
	void add_item_pizza();
	void add_item_burgir();
	void size_and_price();


	//pizza template function
	void pizzatemp()
	{
		cout << "\n***************************************************************************" << endl;
		cout << "*                          Welcome to pizza section!                       *" << endl;
		cout << "***************************************************************************" << endl;
		cout << "\n";
		cout << " (1)  " << pizzas[0] << "\t\t$ " << p_price[0] << endl;
		cout << " (2)  " << pizzas[1] << "\t$ " << p_price[1] << endl;
		cout << " (3)  " << pizzas[2] << "\t$ " << p_price[2] << endl;
		cout << " (4)  Back\n" << endl;
		cout << "***************************************************************************\n" << endl;
	}

	//burgir template for burgir 
	void burgirtemp()
	{
		cout << "\n***************************************************************************" << endl;
		cout << "*                          Welcome to bergir section!                       *" << endl;
		cout << "***************************************************************************" << endl;
		cout << "\n";
		cout << " (1)  " << burgirs[0] << "\t$" << b_price[0] << endl;
		cout << " (2)  " << burgirs[1] << "\t$" << b_price[1] << endl;
		cout << " (3)  " << burgirs[2] << "\t$" << b_price[2] << endl;
		cout << " (4)  Back\n" << endl;
		cout << "***************************************************************************\n" << endl;
	}


	//template for cold drinks or etc 
	void coldtemp()
	{
		cout << "\n***************************************************************************" << endl;
		cout << "*                          Welcome to Drink section!                      *" << endl;
		cout << "***************************************************************************" << endl;
		cout << "\n";
		cout << " (1)  " << colds[0] << "\t$" << c_price[0] << endl;
		cout << " (2)  " << colds[1] << "\t$" << c_price[1] << endl;
		cout << " (3)  " << colds[2] << "\t$" << c_price[2] << endl;
		cout << " (4)  Back \n" << endl;
		cout << "**************************************************************************\n";
	}


	void changeitemfun()
	{
		cout << "\n*************************************************************************" << endl;
		cout << "*                          change options  section!                       *" << endl;

		cout << "***************************************************************************" << endl;
		cout << "\n";
		cout << " (1)  Pizza" << endl;
		cout << " (2)  Burgir" << endl;
		cout << " (3)  Cold" << endl;
		cout << " (4)  Back" << endl;
		cout << " (5)  Go to main menu\n" << endl;
		cout << "***************************************************************************\n" << endl;
		cout << " What do you want to change " << endl;
		cout << "-->> ";

	}

};


// this is a main function 
int main()
{
	menu m;
	m.welcome();
	return(0);
}



// main menu or we can call that a choice function 
void menu::welcome()
{
start:
	cout << "\n" << endl;
	cout << "***************************************************************************" << endl;
	cout << "*                        Welcome to our menu                              *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "Menu is given below \n\n" << endl;
	cout << " (1)  " << choice[0] << endl;
	cout << " \n";
	cout << " (2)  " << choice[1] << endl;
	cout << " \n";
	cout << " (3)  " << choice[2] << endl;
	cout << " \n";
	cout << " (4)  settings " << endl;
	cout << " \n";
	cout << " (5)  Exit \n" << endl;
	cout << " \n";
	cout << "\n***************************************************************************\n" << endl;
	cout << " what do ypu want to order -->> ";
	cin >> main_choice;


	if (main_choice == "1")
	{
		system("cls");
		return pizza();
	}
	else if (main_choice == "2")
	{
		system("cls");
		return burgir();
	}
	else if (main_choice == "3")
	{
		system("cls");
		return cold();
	}
	else if (main_choice == "4")
	{
		system("cls");
		return setting();
	}
	else if (main_choice == "5")
	{
		cout << " \n Exiting the program " << endl;
		Beep(523, 500);
		Beep(523, 500);
		Beep(523, 500);
		exit(0);
	}
	else
	{
		cout << "\n wrong option ";
		Beep(500, 500);
		system("cls");
		goto start;
	}
}

// this function is for pizzas 
void menu::pizza()
{
start:

		
			system("cls");
			pizzatemp();
			cout << "What you want to order " << endl;
			cout << "-->> ";
			cin >> p_choice;
		
	
	if (p_choice == "4")
	{
		add_gst();
		system("cls");
		return welcome();
	}
	else if (p_choice == "1")
	{
		
		cout << "\n price and gst "<< p_price[0] + GST;
	}
	
}




// this is burgir functin 
void menu::burgir()
{
start:
	burgirtemp();
	cout << "What you want to order " << endl;
	cout << "-->> ";
	cin >> b_choice;
	if (b_choice == "4")
	{
		system("cls");
		return welcome();
	}
	
	else
	{
		system("cls");
		cout << "\n wrong option \n ";
		goto start;
	}
}





// this is cold functin 
void menu::cold()
{
start:
	coldtemp();
	cout << "What you want to order " << endl;
	cout << "-->> ";
	cin >> c_choice;

	if (c_choice == "4")
	{
		system("cls");
		return welcome();
	}
	
	else
	{
		system("cls");
		cout << "\n wrong option \n ";
		goto start;
	}
}


// this is settings functin 
void menu::setting()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          Welcome to settings section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  Change Price" << endl;
	cout << " (2)  Change Item" << endl;
	cout << " (3)  Change GST" << endl;
	cout << " (4)  Back \n" << endl;
	cout << "**************************************************************************\n";
	cout << "What you want to change" << endl;
	cout << "**>> ";
	cin >> s_choice;

	switch (s_choice)
	{
	case 1:
		system("cls");
		return changeoptions();
		break;
	case 2:
		system("cls");
		return item_add_fun();
		break;
	case 3: 
		system("cls");
		return add_gst();
	case 4:
		system("cls");
		return welcome();
		break;
	default:
		Beep(600, 250);
		system("cls");
		cout << "\n wrong option \n ";
		goto start;
	}
}


//change option between pizza burgir and cold 
void menu::changeoptions()
{
start:
	changeitemfun();
	cin >> changeoption;

	switch (changeoption)
	{
	case 1:
		system("cls");
		return addpizzaprice();
	case 2:
		system("cls");
		return addburgirprice();
	case 3:
		system("cls");
		return addcoldprice();
	case 4:
		system("cls");
		return setting();
	case 5:
		system("cls");
		return welcome();
	default:
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}



//change pizza price 
void menu::addpizzaprice()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << pizzas[0] << "\t\t$" << p_price[0] << endl;
	cout << " (2)  " << pizzas[1] << "\t$" << p_price[1] << endl;
	cout << " (3)  " << pizzas[2] << "\t$" << p_price[2] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;
	cout << " pls choose the pizza to change the price " << endl;
	cout << "-->> ";
	cin >> addpricecin;

	switch (addpricecin)
	{
	case 4:
		system("cls");
		return setting();
		break;
	}
	cout << "pls enetr your price \n -->> " << endl;
	cin >> userprice;

	switch (addpricecin)
	{
	case 1:
		p_price[0] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		p_price[1] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		p_price[2] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << " unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


//chnage burgir price 
void menu::addburgirprice()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << burgirs[0] << "\t$" << b_price[0] << endl;
	cout << " (2)  " << burgirs[1] << "\t$" << b_price[1] << endl;
	cout << " (3)  " << burgirs[2] << "\t$" << b_price[2] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;
	cout << " pls choose the burgir to change the price " << endl;
	cout << "-->> ";
	cin >> addpricecin;

	switch (addpricecin)
	{
	case 4:

		system("cls");
		return setting();
		break;
	case 5:
		system("cls");
	}

	cout << "pls enetr your price \n -->> " << endl;
	cin >> userprice;

	switch (addpricecin)
	{
	case 1:
		b_price[0] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		b_price[1] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		b_price[2] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << " unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


//change cold price
void menu::addcoldprice()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << colds[0] << "\t\t$" << c_price[0] << endl;
	cout << " (2)  " << colds[1] << "\t$" << c_price[1] << endl;
	cout << " (3)  " << colds[2] << "\t$" << c_price[2] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;
	cout << " pls choose the cold drink to change the price " << endl;
	cout << "-->> ";
	cin >> addpricecin;

	switch (addpricecin)
	{
	case 4:
		system("cls");
		return setting();
		break;
	}
	cout << "pls enetr your price \n -->> " << endl;
	cin >> userprice;

	switch (addpricecin)
	{
	case 1:
		c_price[0] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		c_price[1] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		c_price[2] = userprice;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << "\n unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


void menu::item_add_fun()
{
start:
	changeitemfun();
	cin >> changeoption;

	switch (changeoption)
	{
	case 1:
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		return add_item_pizza();
	case 2:
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		return add_item_burgir();
	case 3:
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		return add_item_cold();
	case 4:
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		return setting();
	case 5:
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		return welcome();
	default:
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


void menu::add_item_pizza()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << pizzas[0] << "\t\t$" << p_price[0] << endl;
	cout << " (2)  " << pizzas[1] << "\t$" << p_price[1] << endl;
	cout << " (3)  " << pizzas[2] << "\t$" << p_price[2] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;

	cout << " what do you pizza do you want to change " << endl;
	cout << "-->> " << endl;
	cin >> hh;
	if (hh == 4)
	{
		system("cls");
		return item_add_fun();

	}
	else if (hh == 5)
	{
		system("cls");
		return welcome();
	}

	cout << "\n";
	cout << " pls enter your pizza name you want to change \n -->> " << endl;
	cin >> gg;
	switch (hh)
	{
	case 1:
		pizzas[0] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		pizzas[1] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		pizzas[2] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << "\n unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


void menu::add_item_burgir()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << burgirs[0] << "\t$" << b_price[0] << endl;
	cout << " (2)  " << burgirs[1] << "\t$" << b_price[0] << endl;
	cout << " (3)  " << burgirs[2] << "\t$" << b_price[0] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;

	cout << " what do you burgiru want to change " << endl;
	cout << "-->> " << endl;
	cin >> hh;
	if (hh == 4)
	{
		system("cls");
		return item_add_fun();

	}
	else if (hh == 5)
	{
		system("cls");
		return welcome();
	}

	cout << "\n";
	cout << " pls enter your pizza name you want to change \n -->> " << endl;
	cin >> gg;
	switch (hh)
	{
	case 1:
		burgirs[0] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		burgirs[1] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		burgirs[2] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << "\n unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}


void menu::add_item_cold()
{
start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                          change   price  section!                       *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << " (1)  " << colds[0] << "\t$" << c_price[0] << endl;
	cout << " (2)  " << colds[1] << "\t$" << c_price[1] << endl;
	cout << " (3)  " << colds[2] << "\t$" << c_price[2] << endl;
	cout << " (4)  Back" << endl;
	cout << " (5)  Go to main menu\n" << endl;
	cout << "***************************************************************************\n" << endl;

	cout << " what do you cold to change " << endl;
	cout << "-->> " << endl;
	cin >> hh;
	if (hh == 4)
	{
		system("cls");
		return item_add_fun();

	}
	else if (hh == 5)
	{
		system("cls");
		return welcome();
	}

	cout << "\n";
	cout << " pls enter your colde you want to change \n -->> " << endl;
	cin >> gg;
	switch (hh)
	{
	case 1:
		colds[0] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 2:
		colds[1] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 3:
		colds[2] = gg;
		cout << " Change is succesfully save !! \n" << endl;
		Beep(600, 250);
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		return welcome();
		break;
	default:
		cout << "\n unknown command pls try again \n" << endl;
		Beep(600, 250);
		system("cls");
		cin.clear();
		cin.ignore(10000, '\n');
		goto start;
	}
}



void menu::add_gst()
{
	start:
	cout << "\n***************************************************************************" << endl;
	cout << "*                        Welcome to change GST section!                    *" << endl;
	cout << "***************************************************************************" << endl;
	cout << "\n";
	cout << "  Gst Options \n"<<endl;
	cout << " (1) Change GST "<<endl;
	cout << " (2) Back "<<endl;
	cout << " (3) Main Menu \n"<<endl;
	cout << "***************************************************************************" << endl;
	cout << "\n  What opton do you want to choose  \n";
	cout << "  -->> ";
	cin >> gst_option;
	if (gst_option == "1")
	{
		cout << "  The default GST is " << GST << "% do you want to change this " << endl;
		cout << " \n  -->> ";
		cin >> GST;
		goto start;
	}
	else if (gst_option == "2")
	{
		system("cls");
		return setting();
	}
	else if (gst_option == "3")
	{
		system("cls");
		return welcome();
	}
	else
	{
		system("cls");
		cout << "\n unknown command pls try angin !!\n";
		goto start;
	}
	
}


