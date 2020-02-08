#include<iostream>
using namespace std;
int i=0,j;
string s;
long long int z;
class contacts{
	private:
		long long int number;
		string name;
	public:
		void display_number_with_name()
		{
			cout<<"\t\t\t  "<<name<<" = "<<number<<endl;
		}
		void display_number()
		{
			cout<<number<<endl;
		}
		void display_name()
		{
			cout<<name<<endl;
		}
		void add_contact(string s,long long int a)
		{
			name=s;
			number=a;
			cout<<"\t\t\t   CONTACT SAVED\n";
		}
		bool is_contact_exist(string y,long long int a)
		{
			if(a==number)
			return true;
			if(y==name)
			return true;
			return false;
		}
		bool find_by_name(string y)
		{
			if(y==name)
			return true;
			else
			return false;
		}
		bool find_by_number(long long int a)
		{
			if(a==number)
			return true;
			else
			return false;
		}
};
int main()
{
	contacts arr[1000];
	while(true)
	{
		cout<<"\t\t\t\t\t\t            MENU        \n";
		cout<<"\t\t\t\t\t\t---------------------------\n";
		cout<<"\t\t\t\t\t\t1.ADD NEW CONTACT\n";
		cout<<"\t\t\t\t\t\t2.SEARCH CONTACT BY NAME\n";
		cout<<"\t\t\t\t\t\t3.SEARCH CONTACT BY NUMBER\n";
		cout<<"\t\t\t\t\t\t4.SHOW ALL CONTACT\n";
		cout<<"\t\t\t\t\t\t5.TOTAL SAVED CONTACTS\n";
		cout<<"\t\t\t\t\t\t6.CLEAR PREVIOUS ENTRIES\n";
		cout<<"\t\t\t\t\t\t7.EXIT PROGRAMM\n\n";
		cout<<"\t\tENTER YOUR CHOICE\n";
		cout<<"\t\t  ";
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\t\t\tENTER THE NAME\n";
				cout<<"\t\t\t  ";
				cin>>s;
				cout<<"\t\t\tENTER THE PHONE NUMBER\n";
				cout<<"\t\t\t  ";
				cin >>z;
				for(j=0;j<i;j++)
				{
					if(arr[j].is_contact_exist(s,z))
					break;
				}
				if(j==i)
				{
					arr[i].add_contact(s,z);
					i++;
				}
				else
				{
					cout<<"CONTACT WITH THIS NAME OR NUMBER ALREADY EXIST TRY AGAIN\n";
				}
				break;	
			case 2:
				cout<<"\t\t\tENTER NAME OF THE PERSON\n";
				cout<<"\t\t\t   ";
				cin>>s;
				for(j=0;j<i;j++)
				{
					if(arr[j].find_by_name(s))
					break;
				}
				if(j==i)
				cout<<"\t\t\t  NO CONTACT FOUND\n";
				else
				{
					cout<<"\t\t\tCONTACT FOUND=";
					arr[j].display_number();
				}
				break;
			case 3:
				cout<<"\t\t\tENTER PHONE NUMBER OF THE PERSON\n";
				cout<<"\t\t\t   ";
				cin>>z;
				for(j=0;j<i;j++)
				{
					if(arr[j].find_by_number(z))
					break;
				}
				if(j==i)
				cout<<"\t\t\t  NO CONTACT FOUND\n";
				else
				{
					cout<<"\t\t\tCONTACT FOUND=";
					arr[j].display_name();
				}
				break;
			case 4:
				for(j=0;j<i;j++)
				{
					arr[j].display_number_with_name();
				}
				break;
			case 5:
				cout<<"\t\t\t  TOTAL "<<i<<" CONTACTS IN THE PHONEBOOK\n";
				break;
			case 6:
				system("cls");
				break;
			case 7:
				exit(0);
				break;
			default:
				cout<<"\t\t\t  ENTER VALID CHOICE\n";
				break;
		}
	}
}
