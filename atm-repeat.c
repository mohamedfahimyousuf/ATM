#include <stdio.h>

int main()
{
	int pin, option;
	float deposit, withdrawal, balance = 0, fund;
	printf("Please enter your PIN: ");
	scanf("%d", &pin);
	
	do
	{
		printf("\nWelcome to the ATM\n");
		printf("Please choose an option\n");
		printf("1 - Deposit\n");
		printf("2 - Withdrawal\n");
		printf("3 - Balance Inquiry\n");
		printf("0 - Exit\n");
		
		scanf("%d", &option);
		
		switch(option)
		{
			case 1: 
				printf("Enter the amount you wish to deposit: ");
				scanf("%f", &deposit);
				balance += deposit;
				printf("Your current balance is %.2f\n", balance);
				break;
				
			case 2: 
				printf("Enter the amount you wish to withdraw: ");
				scanf("%f", &withdrawal);
				fund = balance - withdrawal;
				if(fund < 0)
					printf("Insufficient Funds!\n");
				else
				{
					balance -= withdrawal;
					printf("Your current balance is %.2f\n", balance);
				}
				break;
				
			case 3: 
				printf("Your current balance is %.2f\n", balance);
				break;
				
			case 0: 
				printf("Thank you for using the ATM\n");
				break;
				
			default: 
				printf("Invalid Option!\n");
				break;
		}
	}
	while(option != 0);
	return 0;
}

	return 0;
}
else (printf"The pin is incorrect.");

	return 0;
}
