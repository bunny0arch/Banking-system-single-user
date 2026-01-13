#include<stdio.h>
#include<string.h>
int main()
{
	int apin,ipin,count,deposit=0,n,withdraw=0,x;
	double acc_no;
	float balance=0;
	char acc_name[40], branch[20];
	
	printf("Mini Banking System:\n\n");
	printf("Creating a new account\n");
	printf(" \nEnter your Name: ");
	gets(acc_name);
	printf("\nEnter your custom account number: ");
	scanf("%d",&acc_no);
	printf("\nEnter bank location: ");
	scanf("%s",&branch);
	printf("\nEnter your security pin: ");
	scanf("%d",&apin);
	printf("\n\nAccount Created!");
	int choice;
	for(int a=1;a>0;a++)
	{
		printf("\n\nINPUT GUIDES");
		printf("\n1 to withdraw, 2 to deposit, 3 to check balance, 4 to view account details, 5 to change PIN, 6 to change account details, 7 to terminate program: ");
		scanf("%d",&choice);
		if(choice==7)
				{
					printf("\nTerminating the Program!");
					break;
				}
				if(choice>7&&choice<0)
				{
					printf("\nInvalid Choice! Choose from 1 to 7");
				}
		switch(choice)
		{
			case 1:
			{
				printf("\nEnter Account Pin: ");
				scanf("%d",&ipin);
				if(ipin!=apin)
				{
					printf("\nIncorrect Pin Entered! Try again");
				}
				else
				{
					printf("\nEnter the amount to withdraw: ");
					scanf("%d",&withdraw);
					if(balance-withdraw<0)
						{
							printf("\nTransactional Issue, Insufficient funds available!\n");
							printf("\nAdd more funds to proceed");
							printf("\nAvailable Balance is: %d",balance);
						}
						else
						{
							printf("Withdrawing %dRs from %d's Account\n",withdraw,acc_no);
							balance=balance-withdraw;
							printf("Money Withdrawed: %d\n",withdraw);
							printf("Remaining Balance: %.1f",balance);
							withdraw=0;
						}
				}
				break;
			}
			case 2:
				{
					printf("\nEnter Account Pin: ");
					scanf("%d",&ipin);
					if(ipin!=apin)
					{
						printf("\nIncorrect Pin Entered! Try again");
					}
					else
						{
						printf(" \nEnter amount to deposit: ");
						scanf("%d",&deposit);
						balance=balance+deposit;
						printf("Money deposited: %d\n",deposit);
						printf("Updated Balance: %.1f",balance);
						}
						break;
				}
			case 3:
				{
					printf("\nEnter Account Pin: ");
				scanf("%d",&ipin);
				if(ipin!=apin)
				{
					printf("\nIncorrect Pin Entered! Try again");
				}
				else
				{
					printf("\nCurrent Balance is: %.1f",balance);
				}
				break;
				}
			case 4:
				{
					printf("\nEnter Account Pin: ");
				scanf("%d",&ipin);
				if(ipin!=apin)
				{
					printf("\nIncorrect Pin Entered! Try again");
				}
				else
				{
					printf("\nAccount Holder Name: ");
					puts(acc_name);
					printf("Account Number: %d\n",acc_no);
					printf("Branch: %s\n",branch);
					printf("Account Security Pin: %d\n",apin);
				}
				break;
				}
			case 5:
				{
					printf("\nEnter Account Pin: ");
				scanf("%d",&ipin);
				if(ipin!=apin)
				{
					printf("\nIncorrect Pin Entered! Try again");
				}
				else
					{
						apin=0;
						printf("\nEnter New PIN: ");
						scanf("%d",&apin);
						printf("\nPIN Successfully updated!");
					}
					break;
				}
			case 6:
				{
					printf("\nEnter Account Pin: ");
				scanf("%d",&ipin);
				if(ipin!=apin)
				{
					printf("\nIncorrect Pin Entered! Try again");
				}
				else
				{
					printf("\nWhat do you want to change?");
					printf("\nEnter 1 to change Account Holder Name, 2 for Branch, 3 for Account Number, 4 for PIN Number, 5 to discard changes: ");
					scanf("%d",&x);
					switch(x)
					{
						case 1:
							{
								getchar();
								printf("\nEnter the New Account Holder Name: ");
								fgets(acc_name,40,stdin);
								printf("\nAccount Holder Name Updated!");
								break;
							}
						case 2:
							{
								getchar();
								printf("\nEnter the New branch location: ");
								fgets(branch,sizeof(branch),stdin);
								printf("\nBranch Updated!");
								break;								
							}
						case 3:
							{
								getchar();
								printf("\nEnter the New Account Number: ");
								scanf("%d",&acc_no);
								printf("\nAccount Number Updated!");
								break;
							}
						case 4:
							{
								getchar();
								printf("\nEnter the new PIN Number: ");
								scanf("%d",&apin);
								printf("\nPIN Updated!");
								break;
							}
					}
				}
				}
				}
			
			}
		}

