#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
typedef struct voterInformation
{
	char id[10];
	char name[20];
	char birthDate[15];
	char fatherName[20];
	char motherName[20];
	struct voterInformation *next;
}node;

node *head;
int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;
void mainLoad();
void voterInsert();
void voting();
void admin();
void show();
void winner();
void notAgain();
void stop();
void exi();
int main()
{
	int v;
	clrscr();
	printf("\n\n\n");
	printf("\t\t\t\tWelcome to Voting System\n\n");
	printf("Please Press One(1),For Loging Vote Mainu \n\n\n");
	printf("Press Zero(0),For Exit\n");
	scanf("%d",&v);
	if(v==1)
	{
			mainLoad();
	}
	return 0;
}
void mainLoad()
{
	int ch;
	clrscr();
	printf("\n\n\n");
	printf("\t\t\t1.For Vote Entry	---|||\n");
	printf("\t\t\t2.For Admin Panel	---|||\n");
	printf("\t\t\t3.For Winner		---|||\n");
	printf("\t\t\t4.For Exit		---|||\n");
	printf("\t\t-----------Please Choose Options-----------\n\n\n");

	scanf("%d",&ch);
	if(ch==1)
	{
		voterInsert();
	}
	if(ch==2)
	{
		admin();
	}
	if(ch==3)
	{
		winner();
	}
	if(ch==4)
	{
		exi();
	}
}
int cunt=0;
int count=0,t=3;
void voterInsert()
{
	node *temp;
	char name[20],bDate[15],fName[25],mName[25],nid[10];
	clrscr();
	printf("\n\n\n\n");
	printf("\tIf national id,Your name,Birth date,Your father name,Your mother name-\n\tMatch You Can Give Vote Otherwise Not\n\n");
	printf("\tIf you do worng (%d) times, The programe will be stop automatically\n\n\n",t);
	printf("\n\t\tEnter Your National Id Number:	");
	gets(nid);
	gets(nid);
	printf("\n\t\tEnter Your Name:");
	gets(name);
	printf("\n\t\tEnter Your Birth Date:");
	gets(bDate);
	printf("\n\t\tEnter Your Father Name:");
	gets(fName);
	printf("\n\t\tEnter Your Mother Name:");
	gets(mName);
	temp=(node *)malloc(sizeof(node));
	strcpy(temp->id,nid);
	strcpy(temp->name,name);
	strcpy(temp->birthDate,bDate);
	strcpy(temp->fatherName,fName);
	strcpy(temp->motherName,mName);

	temp->next=NULL;
	head=temp;
	while(temp!=NULL)
	{
		if((strcmp(temp->id,"10001")==0 && strcmp(temp->name,"Aditya")==0 && strcmp(temp->birthDate,"11-07-1997")==0 && strcmp(temp->fatherName,"Shiv Kumar")==0 &&strcmp(temp->motherName,"Kiran")==0)||

			(strcmp(temp->id,"10002")==0 && strcmp(temp->name,"Rizwan Alam")==0 && strcmp(temp->birthDate,"11-08-1997")==0 && strcmp(temp->fatherName,"MD.Alam")==0 &&strcmp(temp->motherName,"Rizwana")==0)||

			(strcmp(temp->id,"10003")==0 && strcmp(temp->name,"Abhishek")==0 && strcmp(temp->birthDate,"11-07-1997")==0 && strcmp(temp->fatherName,"Jack")==0 &&strcmp(temp->motherName,"Lusi")==0)||

			(strcmp(temp->id,"10004")==0 && strcmp(temp->name,"Abhimanyu Raj")==0 && strcmp(temp->birthDate,"11-07-1997")==0 && strcmp(temp->fatherName,"Suresh")==0 &&strcmp(temp->motherName,"Mina")==0)||

			(strcmp(temp->id,"10005")==0 && strcmp(temp->name,"Rakesh")==0 && strcmp(temp->birthDate,"11-07-1997")==0 && strcmp(temp->fatherName,"Suresh")==0 &&strcmp(temp->motherName,"Mina")==0)||

			(strcmp(temp->id,"10006")==0 && strcmp(temp->name,"Toney")==0 && strcmp(temp->birthDate,"11-07-1997")==0 && strcmp(temp->fatherName,"Caption")==0 &&strcmp(temp->motherName,"Arena")==0))
		{
			cunt++;
			if(cunt>1)
			{
			   notAgain();
			   break;
			}
			else
			{
				system("pause");
				voting();
			}
		}
		else
		{
			t--;
			count++;
			if(count==3)
			{
				stop();
				break;
			}
			printf("\n\n\n\n");
			printf("\t\tYou voter Id or Name or Date of Birth or Father's Name is Worng\n\n");
			printf("\t\t\t\t\tPlease Re enter\n\n");
			system("pause");
			mainLoad();
		}
		temp=temp->next;
	}
}
void voting()
{
	int b,j;
	int r;
	clrscr();
	printf("\n\n\n\n");
	printf("\t\t	***List Of Candidates ***	\n\n\n");
	printf("\t\t\t Name - - - - - - - - - - - -Symbol\n\n");
	printf("\t\t\t 1.Modi			   1.Kamal\n");
	printf("\t\t\t 2.Rahul			   2.Hath\n");
	printf("\t\t\t 3.Arvind			   3.Teer\n");
	printf("\t\t\t 4.Mamta			   4.Mala\n");
	printf("\t\t\t 5.APBP			   5.Book\n\n\n");
	printf("\t\t\tPlease Choose Your Voter\n");
	printf("\t\t\tPlease Enter Your Choice:");
	for(j=1;j<=1;j++)
	{
		scanf("%d",&b);
		if(b==1)
		{
			cunt1++;
		}
		if(b==2)
		{
			cunt2++;
		}
		if(b==3)
		{
			cunt3++;
		}
		if(b==4)
		{
			cunt4++;
		}
		if(b==5)
		{
			cunt5++;
		}
		if(b!=1 && b!=2 && b!=3 && b!=4 && b!=5)
		{
			printf("\t\t\tYour vote is invalid\n");
			mainLoad();
		}
	}
	clrscr();
	printf("\n\n\n\n");
	printf("\t\t\t If you want to see present winner Enter One (1) Or\n\n\n \t\tZero (0) For Main Loges\n\n\n");
	scanf("%d",&r);
	if(r==1)
	{
		winner();
	}
	if(r!=1)
	{
		mainLoad();
	}
}
void admin()
{
		int b;
		printf("\n\n\n\n");
		printf("\t\t\tEnter Password To Unlock Admin Panel\n\n");
		scanf("%d",&b);
		if(b==10101)
		{
			show();

		}
		else
		{
			printf("Wrong Password\n");
			getch();
			mainLoad();
		}
}
void show()
{
	int r;
	clrscr();
	printf("\n\n\n");
	printf("\t\t\t  How Many Votes Who Get\n\n\n");
	printf("\t\t\t  Modi got   %d  votes\n",cunt1);
	printf("\t\t\t  Rahul got  %d  votes\n",cunt2);
	printf("\t\t\t  Arvind got %d  votes\n",cunt3);
	printf("\t\t\t  Mamta got  %d  votes\n",cunt4);
	printf("\t\t\t  ABPB got  %d  votes\n",cunt5);
	printf("\t\t\t Enter One(1) For Main Loges Or \n\n\n \t\tZero(0) For Exit\n");
	scanf("%d",&r);
	if(r==1)
	{
		mainLoad();
	}
	else
	{
		exi();
	}
}
void winner()
{
	int t;
	clrscr();
	printf("\n\n\n\n");
	if(cunt2<cunt1 && cunt3<cunt1 && cunt4<cunt1 &&cunt5<cunt1)
		printf("\t\tThe present Winner Person is Modi and he is got %d votes\n\n\n\n\n",cunt1);
	if(cunt1<cunt2 && cunt3<cunt2 && cunt4<cunt2 && cunt5<cunt2)
		printf("\t\tThe present Winner Person is Rahul and he is got %d votes\n\n\n\n\n",cunt2);
	if(cunt1<cunt3 &&cunt2<cunt3 &&cunt4<cunt3 &&cunt5<cunt3)
		printf("\t\tThe present Winner Person is Arvind and he is got %d votes\n\n\n\n\n",cunt3);
	if(cunt1<cunt4 &&cunt2<cunt4 &&cunt3<cunt4 && cunt5<cunt4)
		printf("\t\tThe present Winner Person is Mamta and she is got %d votes\n\n\n\n\n",cunt4);
	if(cunt1<cunt5 && cunt2<cunt5 && cunt3<cunt5 &&cunt4<cunt5)
		printf("\t\tThe present Winner Person is Other and he is got %d votes\n\n\n\n\n",cunt5);
	printf("\t\t\tEnter One(1) for Main Loges or Zero(0) for exit\n");
	scanf("%d",&t);
	if(t==1)
	{
		mainLoad();
	}
	if(t!=1)
	{
		exi();
	}
}
void stop()
{
	clrscr();
	printf("\n\n\n");
	printf("\t- - - - - - - (:-Sorry you can not give vote for your worng entry three(3) Times -:)- - - -\n\n\n");
	printf("\t\t\t* * * * *~~~~~~Please Try Again After A Few Moment ~~~~~~~* * * *\n\n\n");
	printf("\t\t\t\t* * * * *~~~~~~~Thank You ~~~~~~`* * * * \n\n\n\n");
}
//Its function for not again more vote
void notAgain()
{
	clrscr();
	printf("\n\n\n");
	printf("\t\tSorry You Have Already Given Vote Sucessfully.\n\t\tSo You can't ! Give Vote More Then One Time.\n\n");
	printf("\t\t\t  If You Want To See Present Winner Enter One(1) Or \n\t\t\t\tTwo(2) For Main Loges\n");
	printf("\t\t\t\tZero (0) For Exit\n\n");
	scanf("%d",&t);
	if(t==1)
	{
		winner();
	}
	if(t==2)
	{
		mainLoad();
	}
	if((t!=1) || (t!=2))
	{
		exi();
	}
}
void exi()
{
	clrscr();
	printf("\n\n\n");
	printf("\t\t - - - - @You Have To Given ");
	printf("\t\t\t\t*****Thank You*****\n\n\n");
}