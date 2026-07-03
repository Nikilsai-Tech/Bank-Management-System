#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	char num[20];
	char name1[20];
	char name2[20];
	char email[20];
	char bday[20];
	char choice[20];
	char gender[10];
	int pass;
	char acc[20];
	int passcheck;
	char accnum[20];
	int editnum;
	int status;
	Start:
	printf("\t\t\t\t\t\t KATMAN Bank Management System \n");
	printf("1. Create Account\n");
	printf("2. Block/Unblock Account\n");
	printf("3. Close Account\n");
	printf("4. Search Account\n");
	printf("5. Edit Account Details\n");
	printf("6. Exit\n");
	printf("Choose any one activity(Enter their respective numbers):");
	scanf("%d",&a);
	status=1;
	switch(a)
	{
		case 1:
			{
				printf("\n\t\t\t\t\t\t\tCreate Account\n");
				printf("First Name:");
				scanf("%s",&name1);
				printf("\nLast Name:");
				scanf("%s",&name2);
				printf("\nEmail ID:");
				scanf("%s",&email);
				nu:
				printf("\nPhone Number:");
				scanf("%s",&num);
				if(strlen(num)!=10)
				{
					printf("\nInvalid phone number\n Phone number contains 10 digits");
					goto nu;
				}
				printf("\nD.O.B:");
				scanf("%s",&bday);
				printf("\nGender:");
				scanf("%s",&gender);
				numb:
				printf("\nAccount number:");
				scanf("%s",&acc);
				if(strlen(acc)!=10)
				{
					printf("\nInvalid Account number\n Account number contains 10 digits");
					goto numb;
				}
				printf("\nPassword:");
				scanf("%d",&pass);
				printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Your account has been created successfully<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
				goto Start;
				
			}
		case 2:
			{
					unblo:
					printf("\n\t\t\t\t\t\tBlock/Unblock Account\n");
					printf("Account Number:");
					scanf("%s",&accnum);
					if(strlen(accnum)!=10)
					{
						printf("\nInvalid Account number\n Account number contains 10 digits");
						goto unblo;
					}
					printf("\nPassword:");
					scanf("%d",&passcheck);
					if(strcmp(accnum,acc)==0&&passcheck==pass)
					{
						char blo[30];
						printf("You want to block/unblock");
						scanf("%s",&blo);
						if(strcmp("block",blo)==0)
						{
							block:
							printf("\nAre you sure to block your account:");
							scanf("%s",&choice);
							if(strcmp("yes",choice)==0)
							{
							status=!status;
							printf("\nYour Account has been blocked\n");
							}
							else if(strcmp("Yes",choice)==0)
							{
								status=!status;
								printf("\nYour Account has been blocked\n");
							}	
							else
							{
								printf("\n	Your Account has not been blocked\n");
							}
						}
						else if(strcmp("Block",blo)==0)
						{
							goto block;
						}
						else if(strcmp("unblock",blo)==0)
						{
							unblock:
							printf("\nAre you sure to unblock your account:");
							scanf("%s",&choice);
							if(strcmp("yes",choice)==0)
							{
							status=!status;
							printf("\nYour Account has been unblocked\n");
							}
							else if(strcmp("Yes",choice)==0)
							{
								status=!status;
								printf("\nYour Account has been unblocked\n");
							}	
							else
							{
								printf("\n	Your Account has not been unblocked\n");
							}
						}
						else if(strcmp("Unblock",blo)==0)
						{
							goto unblock;
						}
						
					}
					else 
					{
						printf("\nYour Account is not available\n");
					}
					goto Start;
			}
		case 3:
			{
					clo:
					printf("\n\t\t\t\t\t\t\tClose Account\n");
					printf("Enter your account number:");
					scanf("%s",&accnum);
					if(strlen(accnum)!=10)
					{
						printf("\nInvalid Account number\n Account number contains 10 digits");
						goto clo;
					}
					printf("\nPassword:");
					scanf("%d",&passcheck);
					if(strcmp(accnum,acc)==0&&passcheck==pass)
					{
						printf("\nAre you sure to close your account\n");
						scanf("%s",&choice);
						if(strcmp("Yes",choice)==0)
						{
							num[0];
							name1[0];
							name2[0];
							email[0];
							bday[0];
							gender[0];
							pass=0;
							printf("Your account has been closed successfully\n");
						}
						else if(strcmp("yes",choice)==0)
						{
							num[0];
							name1[0];
							name2[0];
							email[0];
							bday[0];
							gender[0];
							pass=0;
							printf("Your account has been closed successfully\n");
						}
						else
						{
							printf("Your account has not been Closed\n");
						}
					}
					else
					{
						printf("\nIncorrect Account Number Or Password\n");
					}
					goto Start;
			}
			case 4:
			{
					ser:
					printf("\n\t\t\t\t\t\t\tSearch Account\n");
					printf("Account Number:");
					scanf("%s",&accnum);
					if(strlen(accnum)!=10)
					{
						printf("\nInvalid Account number\n Account number contains 10 digits");
						goto ser;
					}
					printf("\nPassword:");
					scanf("%d",&passcheck);
					if(status==1)
					{
						if(strcmp(accnum,acc)==0&&passcheck==pass)
						{
							printf("\n\t\t\t\t\t\tAccount Details\n");
							printf("First Name:%s",name1);
							printf("\nLast Name:%s",name2);
							printf("\nEmail ID:%s",email);
							printf("\nPhone Number:%d",num);
							printf("\nD.O.B:%s",bday);
							printf("\nGender:%s\n",gender);	
						}
						else
						{
							printf("\nYour Account is not available\n");
						}
					}
					else 
					{
						printf("\nYour Account has been blocked\n");
					}
					goto Start;
			}
			case 5:
				{
						edi:
						printf("\n\t\t\t\t\t\t\tEdit Details");
						printf("\nAccount Number:");
						scanf("%s",&accnum);
						if(strlen(accnum)!=10)
						{
							printf("\nInvalid Account number\n Account number contains 10 digits");
							goto edi;
						}	
						printf("\nPassword:");
						scanf("%d",&passcheck);
						if(status==1)
						{
							if(strcmp(accnum,acc)==0&&passcheck==pass)
							{
							printf("\n>>>>>Details<<<<<");
							printf("\n1. First Name:%s",name1);
							printf("\n2. Last Name:%s",name2);
							printf("\n3. Email ID:%s",email);
							printf("\n4. Phone Number:%d",num);
							printf("\n5. D.O.B:%s",bday);
							printf("\nWhich one do you want to edit(Enter ther numbers):");
							scanf("%d",&editnum);
								if(editnum==1)
								{
									printf("\nEnter New First Name:");
									scanf("%s",name1);
									printf("\nNew First Name:%s",name1);
								}
								else if(editnum==2)
								{
									printf("\nEnter New Last Name:");
									scanf("%s",name2);
									printf("\nNew Last Name:%s",name2);
								}
								else if(editnum==3)
								{
									printf("\nEnter New Email ID:");
									scanf("%s",email);
									printf("\nNew Email ID:%s",email);
								}	
								else if(editnum==4)
								{
									printf("\nEnter New Phone Number:");
									scanf("%d",num);
									printf("\nNew Phone Number:%d",num);
								}
								else if(editnum==5)
								{
									printf("\nEnter New D.O.B:");
									scanf("%s",bday);
									printf("\nNew D.O.B:%s",bday);
								}
								else
								{
									printf("\nInvalid option");
								}
							}
							else
							{
								printf("\nAccount Not Available\n");
							}
							
						}	
						else 
						{
							printf("\nYour Account has been blocked");
						}
					goto Start;
				}
		case 6:
				{
							printf("\n\t\t\t\t\t\tThank You");
				}
		default:
				{
							printf("\nInvalid option");
							goto Start;
				}
	
				
	}
}
