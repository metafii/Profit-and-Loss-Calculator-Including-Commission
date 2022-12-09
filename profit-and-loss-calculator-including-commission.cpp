#include <iostream>
#include <cstring>
#include <clocale>
#include <cfloat> 
#include <string>

int main()
{
	float purchase = 0.00, sales = 0.00, money_earned = 0.00;
	const float COMMISSION = 0.015;
	std::string company_name;

	std::cout << "Please write the name of the company whose share you bought, the purchase price of the share and" << std::endl << "the price at which you sold the share, with spaces in between (Commission: 0.15%):";

	std::cin >> company_name >> purchase >> sales;

	if (sales > purchase)

	{
		money_earned = (sales - purchase) - (sales - purchase) * COMMISSION;

		std::cout << "You have a profit of $" << money_earned << " for the " << company_name << " share.";

		return 0;
	}


	else if (sales < purchase)

	{
		money_earned = (purchase - sales) - (purchase - sales) * COMMISSION;

		std::cout << "You have a loss of $" << money_earned << " for the " << company_name << " share.";

		return 0;
	}

	else (sales = purchase);
	{
		money_earned = (purchase - sales) - (purchase - sales) * COMMISSION;

		std::cout << company_name << " shares have no profit or loss status.";

		return 0;
	}
}
