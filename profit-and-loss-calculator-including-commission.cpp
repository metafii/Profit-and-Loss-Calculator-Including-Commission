//Profit and Loss Calculator Including Commission
#include <iostream>
#include <cstring>
#include <cfloat> 

int main()
{
	float purchase = 0.00, sales = 0.00, money_earned = 0.00, commission = 0.00;
	std::string company_name;

    std::cout << "What percentage of commission is taken from this share: ";
    std::cin >> commission;
	std::cout << "Please write the name of the company whose share you bought, the purchase price of the share and\nthe price at which you sold the share, with spaces in between (Commission: " << commission << "%):";
	std::cin >> company_name >> purchase >> sales;

    money_earned = (sales - purchase) - ((sales - purchase) * commission);

	if (money_earned > 0)
	{
		std::cout << "\nYou have a profit of $" << money_earned << " for the " << company_name << " share.";
	}


	else if (money_earned < 0)
	{
		std::cout << "\nYou have a loss of $" << (-1)*(money_earned)<< " for the " << company_name << " share.";
	}

	else
		std::cout << "\n" << company_name << " shares have no profit or loss status.";
	
}
