//Programming Challenge 3.7 pg. 143
//Box Office.
#include <iostream>
#include <iomanip>
#include <string>
int main()
{
	std::string movieName;
	const double adultTicketPrice = 10.00;
	const double childTicketPrice = 6.00;
	double percentageKept = 0.20;
	int adultTicket, childTicket;
	double gross_box_office_profit, net_box_office_profit, amount_paid;

	//ask user name of movie
	std::cout << "Movie name: \n";
	std::getline(std::cin, movieName);

	//ask the user how many tickets were sold.
	std::cout << "How many adult tickets were sold: ";
	std::cin >> adultTicket;
	std::cout << "How many child tickets were sold: ";
	std::cin >> childTicket;

	//calculating Gross Box Office profit.
	gross_box_office_profit = (adultTicketPrice * adultTicket) + (childTicketPrice * childTicket);
	//calculating net box office profit.
	net_box_office_profit = percentageKept * gross_box_office_profit;
	//calculating amount paid to distributor.
	amount_paid = gross_box_office_profit - net_box_office_profit;

	//displaying all the information.
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n__________________________________";
	std::cout << "\nMovie Name: " << movieName;
	std::cout << "\nAdult tickets sold: " << adultTicket;
	std::cout << "\nChild tickets sold: " << childTicket;
	std::cout << "\nGross box office profit: $" << gross_box_office_profit;
	std::cout << "\nNet box office profit: $" << net_box_office_profit;
	std::cout << "\nAmount paid to distributor: $" << amount_paid;

	return 0;
}