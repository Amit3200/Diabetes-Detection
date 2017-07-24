#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<time.h>
#include<iomanip>
using namespace std;
int wholecheck=0;
int counter1=0,counter;
fstream fin,fout,fturndoc,ftemp,fadmin,fcross,fsum;
class problems;
class Login;
class diabetes
{
        int id;
     	char name[200];
    	int age;
    	float height;
    	float weight;
	    char sex;
     	long long int phn;
     	public:
		friend class doctor;
		friend class problems;
		friend class Login;
		friend class adminstration;
		friend class patient;
		void twist();                                //after thinking a lot i decided;
		void welcome();
		void enterdata();
		void doctorlist();
		void test();
		void totaltest();
		void search();
		void deldata();
		void prereport();
		void aboutme();
		void admin();
		void reply();
		void setlock();
		void queries();
		int report();
		int display(int,int);
		void showqu();
		void update();
		void adminre();
	    void patientlogin();
		void treatrecord();//left
}mainobj;


class Login
{
	public:
		friend class doctors;
		friend class problems;
		friend class diabetes;
		void password();
}passo;


class doctor
{
	public:
		friend class diabetes;
		int id;
		int idofdoc;
		struct date
		{
			int d,m,y;
		}st;
}docp;


class problems
{
	public:
		friend class diabetes;
    int id,vision,thirst,hunger,furine;//furine=urine frequency//
    char bg[2];
	int headche,fatigue;
	char fam,weight;
	char food;
	float sugarlevel;
	float blpressurenum,blpressuredem;
	float bloodcount;
	float glucoselevel;	
	float glucose1;
}objp;
class bill
{
		friend class doctor;
		friend class problems;
		friend class Login;
		friend class adminstration;
		friend class patient;
	public:
    int id;	
    int billid;
	int sum;
	enum fee{Thakur=1000,Grover=1500,Chawla=1500,Joradan=2000,JazzyB=3000};
    void total();

}bobj;
class patient
{
	    public:
		friend class problems;
		friend class diabetes;
		friend class quick;
		friend class doctor;
		int buyid;
		void updatemine();
		void buy();
		void medicare();
		void diseaselevel();
		void seem();
		void complaints();
		void docchange();
		char comp[2000];
		char send[2000];
}pa;

class adminstration
{
	    private:
		int id;                    //patientid
		int stid;                  //staffid  
        char name[30];             //staffname
        char dname[30];            //doctorname   1st thought of in doctorlist but failed
        int  did;                  //doctor id
        long long int phna;
        char userid[30];           //staff user id
        char password[30];         //password staff
        public:
        int medid;                 //medicine id    
        char medicines[300];       //medicine name
        float medprice;              //price	
        char re[200];
        friend class problems;
		friend class diabetes;
		friend class doctor;
		friend class paitent;	
        void stpassword();
		void medi();               //medicine name provider along price
		void calcbill();           //along with medicines and doctor fees if no medi then only that	
		void adddoc();             //junior doctors
        void adminsi();
        void count();
        void duty();
        void complains();
        void msgs();
		//class risk
		//{
		//	public:
			
			
			
				
		//};
}admino;
class discuss
{
    public:
	friend class diabetes;
	friend class doctors;
	friend class patient;
	friend class problems;
	friend class adminstration;
	int id;
	char name[20];
	char reply[200000];
	char input[200000];	
}q;
class finalreport

{
	public:
	friend class diabetes;
	friend class doctors;
	friend class patient;
	friend class problems;
	int id;                         // to detect	
	char dbresult;                  //level		
}freport;
class quick
{
char name[300];
int gid;
int age;
float sugar;
float weight;
float bodytemp;
	int mchoice;
	void buy();
	public:
		friend class diabetes;
		friend class patient;
		quick()
		{
			char ch;
	system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	cout<<"\n\n Enter the name : ";
	fflush(stdin);
	gets(name);
	srand((time(NULL)));
	gid=rand()%1161400+200000;	
	cout<<"\n\n ID Generated : ";	
	cout<<gid;
	cout<<"\n\n Enter Age : ";
	cin>>age;	
	cout<<"\n\n Do you Symptons like becoming//having :\n\n 1>THIRSTY 2>Weight Loss 3>Fatigueness 4>Vision Problem 5>Frequent Urine 6>Increased Hunger ??\n\n";
	cout<<" Enter Y for Yes : ";
	cin>>ch;	
	if(ch=='y'||ch=='Y')
	cout<<"\n\n You may have the chances of diabetes, as Because these are the key symptons of it!!";
	else
	cout<<"\n\n You may not have the diabetes  but it is still not sure!!";	
	cout<<"\n\n Let the nurse take your blood sample  ";
    sleep(2);
	cout<<"\n\n Please Wait Taking Blood Sample  ";
	sleep(2);
	cout<<"\n\n Analyzing Blood Samples  ";
	sleep(2);
	cout<<"\n\n Thanks for being paitent ";
	sleep(2);
	cout<<"\n\n TEST INITIALIZED : ";
	cout<<"\n\n Enter the weight : ";
	cin>>weight;
	cout<<"\n\n Enter the glucometer readings : ";
	cin>>sugar;
	cout<<"\n\n Enter the body temperature : ";
	cin>>bodytemp;
	cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t Generating Report ";
	cout<<"\n\n Analyzing Symtons ";
	sleep(1);
	cout<<"\n\n Analyzing Blood Sample ";
	sleep(1);
	cout<<"\n\n Analyzing Body temperature ";
	sleep(1);
    cout<<"\n\n Getting things done ";
    sleep(2);
    system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tREPORT";
	cout<<"\n\n Name : "<<name;
	cout<<"\n\n Age : "<<age;
	cout<<"\n\n Weight : "<<weight;
	cout<<"\n\n Body Temp : "<<bodytemp;
    cout<<"\n\n";
	int blood;
srand(time(NULL));
blood=rand()%1+7;
if(blood==1)
{
	cout<<" Blood Group : "<<" A+ ";
}
else if(blood==2)
{
	cout<<" Blood Group : "<<" A-"; 
}
else if(blood==3)
{
	cout<<" Blood Group : "<<" B+"; 
}
else if(blood==4)
{
	cout<<" Blood Group : "<<" B-"; 
}
else if(blood==5)
{
	cout<<" Blood Group : "<<" O+"; 
}
else if(blood==6)
{
	cout<<" Blood Group : "<<" O-"; 
}
else if(blood==7)
{
	cout<<" Blood Group : "<<" AB+"; 
}
else if(blood==8)
{
	cout<<" Blood Group : "<<" AB-"; 
}
else
{
    cout<<" Blood Group : "<<" O+"; 
}
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Hameogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Hameogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Hameogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%25+100;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

if(sugar>=5.00 && sugar<=7.5)	
cout<<"\n\n Normal Sugar Level : ->No signs of Diabetes till now ";
else if(sugar>7.5 && sugar<8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 1 :->May led to heart stroke ";
else if(sugar>=8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 2 :->Can led to heart attack ";
else
cout<<"\n\n Low Sugar Level : ";	
cout<<"\n\n This is on the basis of a simple test only please take appointment from doctor for much more and clear understanding and for complete treatment\n\n";		
cout<<"\n\n Generating Medicine Suggestions ";	
	sleep(5);
if(sugar>7.5 && sugar<8.5)	
{
    system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";   
	cout<<"\n\n 1. NovoLog \n\n 2. Novolin \n\n 3. Humulin \n\n 4. Humalog \n\n 5. Apidra \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Novolog";
	else if(mchoice==2)
	cout<<"Novolin";
	else if(mchoice==3)
	cout<<"Humulin";
	else if(mchoice==4)
	cout<<"Humalog";
	else if(mchoice==5)
	cout<<"Apidra";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else 
	mainobj.twist();
}
else if(sugar>=8.5)
{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";   
	cout<<"\n\n 1. Precose \n\n 2. Miglitol \n\n 3. Kazano \n\n 4. Glucovance \n\n 5. Actoplus \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Precose";
	else if(mchoice==2)
	cout<<"Miglitol";
	else if(mchoice==3)
	cout<<"Kazano";
	else if(mchoice==4)
	cout<<"Glucovance";
	else if(mchoice==5)
	cout<<"Actoplus";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else 
	mainobj.twist();
}
else
{
	cout<<" No Medicine Required But keep Good Health and Diet";
}
	}
};

class diet
{
	public:
	diet()
	{
		system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	char name[300],ch;
	cout<<"\n\n Enter Your Name Please : ";
	fflush(stdin);
	gets(name);
	cout<<"\n\n Enter weather you have diabetes or not(Y/N) ? ";
	cout<<"\n\n Your Choice : ";
	cin>>ch;
	if(ch=='Y'||ch=='y')
	{
	cout<<" Special Diet is to be followed !!";
	cout<<"\n\n Here We Go";
	sleep(1);cout<<"\n\n1\t\t";sleep(1);cout<<"2\t\t";sleep(1);cout<<"3\t\t";
		system("cls");
  char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	 l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	
	cout<<"\n\n Healthy fats from nuts, olive oil, fish oils\n\n flax seeds, or avocados Fruits and vegetables—ideally fresh\n\n the more colorful the better\n\n whole fruit rather than juices High-fiber cereals and breads made from whole grains or legumes Fish and shellfish\n\n organic chicken or turkey\n\n High-quality protein such as eggs, beans, low-fat dairy, and unsweetened yogurt";
	cout<<"\n\n";
	cout<<" Brown or wild rice, riced cauliflower\n\n Sweet potatoes, yams, cauliflower mash \n\n Whole-wheat pasta, spaghetti squash \n\n High-fiber, low-sugar cereal \n\n Steel-cut or rolled oats";
	cout<<"\n\n";
     }
     else
     {
     	cout<<"\n\n You can continue your normal diet : ";
	 }
	 sleep(8);
	 mainobj.twist();
	}	
};

void Login::password()
{
	system("cls");
	int i;
	char alogin[8],apassword[13];
	char login[]="tushar06";
	char pass[]="tusharamit06";
	char iot;
	iot=getch();
system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	char take[]={"\n\n Enter Login_id: "};
	int d1=strlen(take);
	for(kk=0;kk<d1;kk++)
	{
	Sleep(15);	
	cout<<take[kk];
    }
	char a;
		cin>>alogin;
	if(strcmp(alogin,login)==0)
	{
	
		char take1[]={"\n\n Enter Password: "};
	    d1=strlen(take1);
		for(kk=0;kk<=d1;kk++)
		{
			Sleep(15);
			cout<<take1[kk];
		}
		for(i=0;i<13;i++)
		{
			a=getch();
			if(a==13)
			break;
			else if(a==8)
		    {
			if(i>0)	
			cout<<"\b \b";
			i=i-2;
		    continue;
		    }
		    if(i<0)
		    i=0;
			else
			putchar('*');
			apassword[i]=a;
		}
		apassword[i]='\0';
    if(strcmp(apassword,pass)==0)
		{
			char re[]={"\n\n\n Login Successfull\n\n "};
			int rp=strlen(re);
			int u;
			for(u=0;u<rp;u++)
			{
				Sleep(14);
				cout<<re[u];
			}
			sleep(2);
			wholecheck=1;
		}
		else
		{
			wholecheck=2;
		 cout<<"\n\n Incorrect password";
		}
	}
	else
	{
		cout<<"\n\n Invalid Login_id\\Username\n\n";
	}
}
void diabetes::twist()
{
	system("cls");
	int ch;
		char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
    cout<<"\t\t\t\t\t\t\t\t\tChoose the operation \n\n\n 1-> PATIENT \n\n 2-> ADMIN \n\n 3-> QUERIES \n\n 4-> QUERIES REPLY \n\n 5-> Quick Checkup\n\n 6-> Diet Planner \n\n 7-> Log Out\n\n 8-> Exit";
    cout<<"\n\n Your Choice-> ";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	welcome();
    	break;
    	
    	case 2:
    	setlock();	
     	if(counter1!=0)
    	admin();
    	else
    	cout<<"\n\n\n Access Denied!! Terminating ";
    	sleep(3);
    	twist();
    	break;
    	case 3:
    	queries();
		break;
		case 4:
		showqu();
		break;
		case 5:
		quick();
		break;	
		case 6:
		diet();
		break;	
		case 7:
		cout<<"\n Logging Out.....\n\n";
		sleep(2);
		passo.password();
		break;
		case 8:
		cout<<"\n\n Exiting...\n\n";
		sleep(2);
		exit(0);
		break;	
		default:
		cout<<" You have entered wrong key \n\n";	
		break;	
	}
}   
void diabetes:: welcome()
{
	system("cls");
	
	cout<<"\n";
	int ch;
	char check;
	A:	
		char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	cout<<"\t\t\t\t\t\t\t\t   CHOOSE THE OPTIONS FROM MENU\n\n 1: ENTER DATA\n\n 2: GET\\TAKE APPOINTMENT\n\n 3: LIST OF PAITENTS\n\n 4: TEST\n\n 5: Pre-Report\n\n 6: FINAL REPORT\n\n 7: PATIENT-LOGIN\n\n 8: ABOUT DEVELOPER OF THIS CODE\n\n 9: EXIT\n\n";
    cout<<"\n YOUR CHOICE : ";
	cin>>ch;
    switch(ch)
    {
    	    case 1:
    		enterdata();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 2:
    		doctorlist();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }	
		    case 3:
    		display(10,20);
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 4:
    		test();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{   
			system("cls"); 
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;	
		    }
		    case 5:
		    prereport();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 6:
		    report(); 
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 7:
			patientlogin();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
				
		    case 8:
		    aboutme();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 9:
		    cout<<" Exiting.... \n\n ";
			sleep(2);
			twist();
			exit(0);	
	}
}
main()
{
	int i=3;
	diabetes o;
	d:
	system("cls");
	passo.password();
		if(wholecheck==1)
	    {
	    mainobj.twist();	
        }
        else if(wholecheck==2)
        {
        cout<<"\n\n Server Crashed due to heavy traffic or You Entered Incorrect Password\n";	
        cout<<"\n\n Try Again in few seconds\n\n";
        char ch12[]={"\n\n Reloading in 5 seconds\n\n"};
        int kk,l;
		for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch12[kk];
		}
        char ch13[]={"\n\n Reloading in 4 seconds\n\n"};
        l=strlen(ch13);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch13[kk];
		}
        char ch14[]={"\n\n Reloading in 3 seconds\n\n"};
        l=strlen(ch14);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch14[kk];
		}
        char ch15[]={"\n\n Reloading in 2 seconds\n\n"};
        l=strlen(ch15);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch15[kk];
		}
        char ch16[]={"\n\n Reloading in 1 seconds\n\n"};
        l=strlen(ch16);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch16[kk];
		}
        if(i>=1)
        {
        goto d;
        i--;
        }
        else
        cout<<"\n\n Interface Locked due to many invalid tries\n\n";
        }
}
void diabetes::enterdata()
{
	int i,num=0;
	fout.open("DIABETESDATA.txt",ios::app);
	system("cls");
	cout<<"\t\t\t\t\tWelcome!\n";
	cout<<"\n\t\t\tPLEASE FILL ALL THE REQUIRED DATA\n";
	cout<<"\n\n ";
	cout<<" Enter The no. of paitents : ";
	cin>>num;
	cout<<"\n\n ";
	for(i=0;i<num;i++)
	{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    cout<<" PLEASE ASK THE IDno. AND ENTER IT : ";
    cin>>id;
    cout<<"\n\n";
	cout<<" 1 : ENTER NAME : ";
	scanf("%s",name);
	fflush(stdin);
	cout<<"\n\n 2 : AGE : ";
	cin>>age;
	cout<<"\n\n 3 : SEX(M/F) : ";
	cin>>sex;
	cout<<"\n\n 4 : Height : ";
	cin>>height;
	cout<<"\n\n 5 : Weight : ";
	cin>>weight;
	cout<<"\n\n 6 : Phone number : ";
	cin>>phn;
	fout.write((char*)&mainobj,sizeof(mainobj));
    }
	fout.close();
}
int diabetes::display(int a,int b)
{
	fin.open("DIABETESDATA.txt",ios::in);
	system("cls");
	cout<<"\t\t\t\tHere's the Data of all paitents\n\n\n";
	
	
	cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
    }
	fin.close();
}
void diabetes::search()
{
	system("cls");
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}	
if(mainobj.id==tempid)
{
			cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n ";
}
else
{
	cout<<" YOU HAVE ENTERED THE INVALID ID PLEASE TRY AGAIN \n";
}
fin.close();
}
void diabetes::test()
{
	system("cls");
	int dd,mm,yyyy;
	cout<<"\t\t\t\tDIABETES HEALTH CARE!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	fout.open("problems.txt",ios::app);
	fturndoc.open("Doctors1.txt",ios::in);
	int tempid,k=0,count=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}	
if(mainobj.id==tempid)
{
	cout<<"\n\n Enter today's date(dd/mm/yyyy) : ";
	cin>>dd>>mm>>yyyy;
	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
		 {
		 	count=1;
		 	break;
		 }
		 else
		 count=0;
    }
	if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
	{
	objp.id=tempid;
	cout<<"\n\n Please Answer The following Questions\n\n\n";
	cout<<" Patient name: ";
	cout<<mainobj.name;
	cout<<"\n\n\n";
	cout<<" 1:Are you getting thirsty frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.thirst;
	cout<<"\n\n\n";
	cout<<" 2:Are you getting hungry fast.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.hunger;
    cout<<"\n\n\n";
	cout<<" 3:Are you getting urine frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.furine;
	cout<<"\n\n\n";
	cout<<" 4:Do you get headches?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.headche;
	cout<<"\n\n\n";
	cout<<" 5:Do you feel fatiguness?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.fatigue;
	cout<<"\n\n\n";
	cout<<" 6:How is your vision?Enter the level(3-highly Blurred||2-Partially Blurred||1-Sometimes Blurred||0-no)? -> ";
	cin>>objp.vision;
	cout<<"\n\n 7.Was there anyy weight loss in your body in few days(y/n)?->";
	cin>>objp.weight;
	cout<<"\n\n\n";
	cout<<" 8.Has any body in your family had diabetes before?(y/n)?->";
	cin>>objp.fam;
	cout<<"\n\n";
	sleep(2);
	system("cls");
	cout<<"\n\n\n\t\t\t Thanks! Please Take the Test from doctor ";
	cout<<"\n\n Taking Blood Sample : ";
	cout<<"\n ";
	sleep(2);
	cout<<"\n\n Wait for some time \n ";
	sleep(2);
	cout<<"\n\n TESTING BLOOD \n ";
	sleep(2);
	cout<<"\n\n Please be patient and steady!! \n ";
	sleep(2);
	cout<<"\n\n Blood Test Complete\n ";
	sleep(2);
	cout<<"\n\n";
	cout<<" Had a Meal or not(y/n) for past three hours? : ";
	cin>>objp.food;
	cout<<"\n\n Enter Readings of Glucometer : ";
	cin>>objp.sugarlevel;
	cout<<"\n\n\n";
	cout<<" Enter the blood pressure(num) : ";
	cin>>objp.blpressurenum;
	cout<<" Enter the blood pressure(den) : ";
	cin>>objp.blpressuredem;
	cout<<"\n\n\n";
	cout<<"\n\n Enter the glucoselevel(sugar)(mg/dl)[This is Fasting Plasma Test(FPG)] -> : ";
	cin>>objp.glucoselevel;
	cout<<"\n\n Enter the glucoselevel(sugar1)(mg/dl)[This is Oral Glucose Tolerance Test(OGTT)] -> : ";
	cin>>objp.glucose1;
	sleep(2);
	cout<<"\n\n Test complete you may take the report at evening from reception.";
	cout<<"\n\n\n";
    fout.write((char*)&objp,sizeof(objp));
    }
    else
    {
    	cout<<"\n\n There's no appointment Booked for such person";
	}
}
else
{
	cout<<"\n\n Invalid id Please Check and try again ";
}
fout.close();
fin.close();
fturndoc.close();
}
int diabetes::report()
{
	float checkdb1=0,checkdb2=0,checkdb3=0;
	system("cls");
	cout<<"\t\t\t\tDIABETES HEALTH CARE!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("problems.txt",ios::in);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
	if(tempid==mainobj.id)
	{
	while(fout.read((char*)&objp,sizeof(objp)))
	{
    if(objp.id==tempid)
    {
	k++;
	break;
    }
    }
    break;
    }
}
if(mainobj.id==tempid )
{
		cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n\n";
cout<<" 1.Thirst Level : ";
if(objp.thirst==0)
cout<<" NO PROBLEM";
else if(objp.thirst==1)
cout<<" LOW";
else if(objp.thirst==2)
cout<<" MEDIUM";
else if(objp.thirst==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 2.Hunger Level: ";
if(objp.hunger==0)
cout<<" NO PROBLEM";
else if(objp.hunger==1)
cout<<" LOW";
else if(objp.hunger==2)
cout<<" MEDIUM";
else if(objp.hunger==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 3.Headche Level: ";
if(objp.headche==0)
cout<<" NO PROBLEM";
else if(objp.headche==1)
cout<<" LOW";
else if(objp.headche==2)
cout<<" MEDIUM";
else if(objp.headche==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 4.Fatigue Level: ";
if(objp.fatigue==0)
cout<<" NO PROBLEM";
else if(objp.fatigue==1)
cout<<" LOW";
else if(objp.fatigue==2)
cout<<" MEDIUM";
else if(objp.fatigue==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 5.Urine Frequency: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW";
else if(objp.furine==2)
cout<<" MEDIUM";
else if(objp.furine==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 6.Vision: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW PROBLEM";
else if(objp.furine==2)
cout<<" MEDIUM PROBLEM";
else if(objp.furine==3)
cout<<" HIGH PROBLEM";
cout<<"\n\n";



cout<<" 7.BloodPressure :";
if(objp.blpressurenum>140)
{
	if(objp.blpressuredem>80)
    {
	cout<<"High Blood Pressure\n";
    }
	else
	cout<<"High Blood Pressure(cond(II))\n";
}
else if(objp.blpressurenum<=140 && objp.blpressurenum>=120)
{
	if(objp.blpressuredem>=80 && objp.blpressuredem<=100)
	cout<<" Normal Blood Pressure";
	else
	cout<<" Normal Blood Pressure(II)";
}
else
{
	cout<<" Low Blood Pressure ";
}
cout<<"\n\n\t\t\t\t\t\t\t\t Blood Report";
cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
int blood;
srand(time(NULL));
blood=rand()%1+8;
if(blood==1)
{
	cout<<" Blood Group : "<<" A+ ";
}
else if(blood==2)
{
	cout<<" Blood Group : "<<" A-"; 
}
else if(blood==3)
{
	cout<<" Blood Group : "<<" B+"; 
}
else if(blood==4)
{
	cout<<" Blood Group : "<<" B-"; 
}
else if(blood==5)
{
	cout<<" Blood Group : "<<" O+"; 
}
else if(blood==6)
{
	cout<<" Blood Group : "<<" O-"; 
}
else if(blood==7)
{
	cout<<" Blood Group : "<<" AB+"; 
}
else if(blood==8)
{
	cout<<" Blood Group : "<<" AB-"; 
}
else
{
    cout<<" Blood Group : "<<" O+"; 
}
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Hameogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Hameogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Hameogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%90+200;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
cout<<"\n\n 8.Fasting Plasma Glucose Test(FPG) : ";
if(objp.glucoselevel<100.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucoselevel<<" mg/dl";
    checkdb1++;
}
else if(objp.glucoselevel>=100.00 && objp.glucoselevel<=125.00)
{
	cout<<" Glucose Level : Pre-Diabetes-> "<<objp.glucoselevel<<" mg/dl";
    checkdb2++;
}
else if(objp.glucoselevel>=126.00)
{
	cout<<" Glucose Level : High -> Diabetes II "<<objp.glucoselevel<<" mg/dl";
     checkdb2++;
     checkdb3++;
}
cout<<"\n\n 9.Oral Glucose Tolerance Test(OGTT) :- ";
if(objp.glucose1<140.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucose1<<" mg/dl";
	checkdb1++;
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<" Glucose Level : Higher than Normal (PRE-Diabetes)-> "<<objp.glucose1<<" mg/dl";
    checkdb2++;
}
else if(objp.glucose1>=200.00)
{
	cout<<" Glucose Level : High -> Diabetes II"<<objp.glucose1<<" mg/dl";
    checkdb2++;
    checkdb3++;
}


cout<<"\n\n 10.Sugar Level (Glucometer): ";
if(objp.food=='y'|| objp.food=='Y')
{
if(objp.sugarlevel>=9.0)
{
cout<<" High Sugar Level-II\n";
checkdb2++;
checkdb3++;
}
else if(objp.sugarlevel<9.0 && objp.sugarlevel>7.5)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<7.4)
{
cout<<" Normal Sugar Level\n";
checkdb1++;
}
else
cout<<" Low Sugar Level\n";
}
else if( objp.food=='n'|| objp.food=='N')
{
if(objp.sugarlevel>7.0)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<5.9 )
{
cout<<" Normal Sugar Level\n\n";
checkdb1++;
}
else
{
cout<<" Low Sugar Level\n\n";	
}
cout<<"\n\n During Taking test we have found that you hadn't ate something from last 2 - 3 hrs so here's a tip \n\n";	
cout<<" Health Tip 1 :";
cout<<" You should eat something in every 2 hours it is important for body\n\n";
sleep(1);	
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
if(checkdb1==3 && checkdb2<=1 && checkdb3==0)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Negative \n";
}
if(checkdb2==2 && checkdb3<=1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(I) \n";
}
if(checkdb2<2 && checkdb3>1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(II)\n";
}
if(checkdb3==2 || checkdb3==3)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(II)\n";
}
if(checkdb3==2 && checkdb2==2)
{
    cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(I)\n";
}
else if(checkdb2==1 && checkdb1==1 && checkdb2==1)
{
	cout<<"\n\n\t\t\t\t\t\t\t Meet Doctor Again due to some complications in test";
}
else
{
	cout<<"\n\n\t\t\t\t\t\t\t Consult Doctor for More Help";
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\t\t\t\t\t\t\t\t Final Result :- ";
if(objp.glucose1<140.00)
{
	cout<<"Normal";
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<"PRE-Diabetes";
}
else if(objp.glucose1>=200.00)
{
	cout<<"Diabetes II";
}
}
else
{
	cout<<"\n\n Test Report has not been made\n\n";
}
fout.close();
fin.close();
}

void diabetes::doctorlist()
{
	system("cls");
	int date,month,year;
	cout<<"\t\t\tDiabetes Health Care!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in);
	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		fout.write((char*)&docp,sizeof(docp));
	}
	fout.close();
	fturndoc.close();
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in);
	int choice;
	int tempid;
	cout<<"\n\n Enter the paitent id : ";
	cin>>tempid;
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {	
    if(tempid==mainobj.id)
    {
    break;	
	}
    }
    if(tempid==mainobj.id)
    {
    	cout<<"\n\n Paitent Name : "<<mainobj.name;
    	cout<<"\n\n";
    	B:
    		int tt=0;
    		if(tt=1)
    		{
    	     system("cls");
    	    }
    	cout<<"\n\n\t\t\t\t\t\t\t\tDoctor's List\n\n";
    	cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
	cout<<"\tId\t|\t\tDoctor Name\t\t|   \t\tTimings\t\t\t |\tDays\t|\t\tFees\t\t|\n\n";
	cout<<"\t1\t|\t\tDr.D.K.Thakur\t\t|\t\t10:00am-12:00pm\t\t|\t Mon \t|\t\tRs 1000\t\t|\n\n";
	cout<<"\t2\t|\t\tDr.N.S.Grover\t\t|\t\t05:00pm-07:00pm\t\t|\t Tue \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t3\t|\t\tDr.D.S.Chawla\t\t|\t\t11:00am-01:00pm\t\t|\t Wed \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t4\t|\t\tDr.Jordan    \t\t|\t\t11:00am-02:00pm\t\t|\t Thurs\t|\t\tRs 2000\t\t|\n\n";
	cout<<"\t5\t|\t\tDr.JazzyB    \t\t|\t\t05:00pm-08:00pm\t\t|\t Fri \t|\t\tRs 3000\t\t|\n\n";
	cout<<" Enter your Choice of Doctor to Book your Appointment\n\n";
	cout<<"\n Your Choice : ";
	cin>>choice;
	docp.id=tempid;
	docp.idofdoc=choice;
	cout<<"\n\n Enter Date to Fix appointment(dd/mm/yyyy)\n\n";
	cout<<" Your input : ";
	cin>>date;
	cin>>month;
	cin>>year;
	cout<<"\n\n Wait! Checking For Appointments ";
	cout<<"\n\n ";
	fout.read((char*)&docp,sizeof(docp));
	{
	if(docp.st.d==date && docp.st.m==month &&  docp.st.y==year)
	{
		char check;
		cout<<"\n\n Sorry for inconvenience The date you selected is not available for appointment ";
		cout<<"\n\n Press Y to try again \n ";
		cout<<"Your Choice: ";cin>>check;
		if(check=='y'||check=='Y')
		{
			tt=1;
			goto B;
		}
	}
	else
	{
	    docp.st.d=date;
		docp.st.m=month;
		docp.st.y=year;
		cout<<"\n ";
		sleep(3);
		cout<<"\n\n Thanks! Appointment Fixed on "<<date<<"/"<<month<<"/"<<year;
		fturndoc.write((char*)&docp,sizeof(docp));	
	}
    }
    }
    else
    cout<<"\n\n Appointment Not Fixed";    
    cout<<"\n\n";
    fout.close();
    fturndoc.close();
    fin.close();
    remove("Temp.txt");
}





void diabetes::prereport()
{
	int tempid,c=0;
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::in);
	cout<<" Enter The Id of paitent: ";
	cin>>tempid;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
    	if(tempid==mainobj.id)
    	{
         break;	
	    }
    }
      while(fturndoc.read((char*)&docp,sizeof(docp)))
	     {	 
         if(docp.id==tempid)
         break;
         }
    if(tempid==mainobj.id && tempid==docp.id)
    {
    cout<<"\n\n NAME: "<<mainobj.name;
	cout<<"\n\n Age: "<<mainobj.age;
	cout<<"\n\n Sex: "<<mainobj.sex;
	cout<<"\n\n Appointment date: "<<docp.st.d<<"/"<<docp.st.m<<"/"<<docp.st.y<<"\n";
	cout<<"\n\n Mobile number: "<<mainobj.phn;
	cout<<" \n\n Doctor Name: ";
	if(docp.idofdoc==1)
	{
		cout<<"Dr.D.K.Thakur";
	}
	if(docp.idofdoc==2)
	{
		cout<<"Dr.N.S.Grover";
	}
	if(docp.idofdoc==3)
	{
		cout<<"Dr.D.S.Chawla";
	}
	if(docp.idofdoc==4)
	{
		cout<<"Dr.Jordan";
	}
	if(docp.idofdoc==5)
	{
		cout<<"Dr.JazzyB";
	}
    cout<<"\n\n\n";
    }
    else
    cout<<"\n\n Invalid Id or Appointment has Not been Taken\n\n";
    fin.close();
    fturndoc.close();
}
void diabetes::aboutme()
{
		system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
		cout<<"\t\tNAME:AMIT SINGH SANSOYA\n";
		cout<<"\t\tSECTION:1656\n";
		cout<<"\t\tAND THIS IS AWESOME\n";
		cout<<" \t\tSizeof class aminstration : "<<sizeof(adminstration);
		cout<<"\n\n\t\tSizeof class diabetes : "<<sizeof(diabetes);
		cout<<"\n\n\t\tSizeof class fianlreport : "<<sizeof(finalreport);
		cout<<"\n\n\t\tSizeof class login : "<<sizeof(Login);
		cout<<"\n\n\t\tSizeof class problems : "<<sizeof(problems);
		cout<<"\n\n\t\tSizeof class doctors : "<<sizeof(doctor);
		cout<<"\n\n\t\tSizeof class discuss : "<<sizeof(discuss);
		cout<<"\n\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
		exit(1);
}
void diabetes::deldata()
{
	    int tempid,k=0;
	    system("cls");
	      	fin.open("DIABETESDATA.txt",ios::in);
	   	fout.open("Temp.txt",ios::out);
	   	fturndoc.open("Doctor1.txt",ios::in);
	   	ftemp.open("Tempdoc.txt",ios::out);
	   cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";	
	   	cout<<"\t\t\t\tHere's the Data of all paitents\n\n\n";
	
	
	cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
    }
    fin.close();
    	fin.open("DIABETESDATA.txt",ios::in);
	   	cout<<"\n Enter the id no. of patient : ";
	   	cin>>tempid;
	 
	   	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	   	{
	   	if(tempid==mainobj.id)	
	   	{
	   	k++;	
		}
		else
		{
			fout.write((char*)&mainobj,sizeof(mainobj));
		}
		}
		fin.close();
		fout.close();
		fin.open("DIABETESDATA.txt",ios::out);
	   	fout.open("Temp.txt",ios::in);
	   	while(fout.read((char*)&mainobj,sizeof(mainobj)))
	   	{
		fin.write((char*)&mainobj,sizeof(mainobj));
		}
		cout<<"\n\n Deleted Record";
		cout<<"\n\n";
		fin.close();
		fout.close();
		cout<<"\n\n UPDATED RECORDS";
		cout<<"\n\n";
		fin.open("DIABETESDATA.txt",ios::in);
		cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	    while(fin.read((char*)&mainobj,sizeof(mainobj)))
     	{
	     cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
        }
    fin.close();
}





void diabetes::patientlogin()
{
	int tempid,tempotp,co;
	long long int tempno;
		system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	cout<<"\n\n Enter Your user ID : ";
	cin>>tempid;
	cout<<"\n\n Enter Your phn No.: ";
	cin>>tempno;
	cout<<"\n\n OTP has been sent Wait for 5-10 secs\n\n ";
	srand ( time(NULL) );
	tempotp=rand()%80000+10300;
	sleep(4);
	cout<<" ";
	cout<<"\n\n Your 5 digit OTP is : "<<tempotp<<" Valid for 10 seconds or the screen will go off with in next 5 seconds\n\n";
	cout<<"\n\n Enter The 5-digit OTP: ";
	cin>>co;
	cout<<"\n\n ";
	fin.open("DIABETESDATA.txt",ios::in);
	if(tempotp==co)
	 {
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
     {
    	if(tempid==mainobj.id && tempno==mainobj.phn)
    	{
	    break;
        }
     }
    if(tempid==mainobj.id && tempno==mainobj.phn) 
    {
    system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n NAME: "<<mainobj.name;
	cout<<"\n\n Age: "<<mainobj.age;
	cout<<"\n\n Sex: "<<mainobj.sex;
    cout<<"\n\n 1. Update Data \n\n 2. Change Doctor \n\n 3. Disease Level \n\n 4. Check Medicines \n\n 5. Buy\\Order Medicines \n\n 6. Register Complaints\n\n 7.See Messages//Complaint status\n\n 8.Exit";
    cout<<"\n Enter Choice : ";
    int lc;
    cin>>lc;
    switch(lc)
    {
    case 1:
    pa.updatemine();
    break;
	case 2:	
	pa.docchange();
    break;
    case 3:
    pa.diseaselevel();
    break;
    case 4:
    pa.medicare();
    break;
	case 5:
	pa.buy();
	break;
	case 6:
	pa.complaints();	
	break;
	case 7:
	pa.seem();
	break;
	//case 8:
	//bobj.totalbill();	
	//break;
	case 8:	
	cout<<"Exiting...."	;
	sleep(2);
	mainobj.twist();
	default	:
		exit(0);
	}
    }
	fin.close();
    }
    else
    {
    	cout<<"\n\n	Error While Logging...\n";
    	sleep(3);
        cout<<"\n\n Login Failed \n\n";
     	fin.close();
        
    }
}







void diabetes::admin()
{
	system("cls");
    cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	cout<<"\n\n";
	int ch;
	char check;
	BD:	
	cout<<"\t\t\t\t\t\t\t\t  WE ARE ALWAYS HERE TO HELP YOU \n\n\t\t\t\t\t\t\t\t   CHOOSE THE OPTIONS FROM MENU\n\n 1: List All data(Paitents)\n\n 2: Search for Paitent\n\n 3: Delete Record(Paitents) \n\n 4: Update Records(Paitents)\n\n 5: Count Paitents\n\n 6: Admin Records\n\n 7: Admin Signup\n\n 8: Admin Duties\n\n 9: Logout";
    cout<<"\n\n YOUR CHOICE FROM LIST : ";
	cin>>ch;	
	switch(ch)
	{
		    case 1:
    		display(10,20);
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 2:
    		search();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 3:
		    deldata();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 4:
		    update();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 5:
	        admino.count();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 6:
		    mainobj.adminre();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 7:
		    admino.adminsi();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 8:
			admino.duty();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto BD;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 9:
			cout<<"\n\n Loging out......... \n\n";
			sleep(2);
			cout<<"\n\n Logged Out Successfully.....\n";
			
			mainobj.twist();	
			default:
			cout<<"\n\n Terminated due to wrong key press\n";	
	}
}



void adminstration::adminsi()
{
	int c=0;
	system("cls");
	fadmin.open("admin.txt",ios::app);
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	cout<<"\n\n\t\t\t\t\t\t\t\t  WE ARE ALWAYS HERE TO HELP YOU \n\n\n";
	cout<<" Enter Name : ";	
	cin>>admino.name;
	cout<<"\n\n Enter the userid : ";
	cin>>admino.userid;
	cout<<"\n\n Enter the password : ";
	cin>>admino.password;
	cout<<"\n\n Enter the phone no.: ";
	cin>>admino.phna;
	cout<<"\n\n Enter The ID GENERATED : ";
	cin>>admino.stid;
	sleep(1);
	cout<<"\n\n Logging in in 3 seconds \n\n";
	sleep(1);
	cout<<"\n\n Logging in in 2 seconds \n\n";
	sleep(1);
	cout<<"\n\n Logging in in 1 seconds \n\n";
	sleep(1);
	fadmin.write((char*)&admino,sizeof(admino));
	fadmin.close();
	mainobj.admin();
}


   void adminstration::count()
    {
	int c=0;
	system("cls");
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	cout<<"\n\n\t\t\t\t\t\t\t\t  WE ARE ALWAYS HERE TO HELP YOU \n\n\n";
	fadmin.open("admin.txt",ios::in);
	fin.open("DIABETESDATA.txt",ios::in);
	cout<<" Choose : \n\n 1-> Paitents \n\n 2-> Staff \n\n ";
	int choice;
	cout<<"\n Your Choice : ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	while(fin.read((char*)&mainobj,sizeof(mainobj)))	
	{
	c++;
	}
	cout<<"\n\n The Total Count is: ";
	cout<<c;
	counter=c;
	c=0;	
		cout<<"\n\n\n";	
	break;
	case 2:	
    while(fadmin.read((char*)&admino,sizeof(admino)))	
	{
	c++;
	}
	cout<<"\n\n The Total Count is: ";
	cout<<c;
	counter=c;
	cout<<"\n\n\n";
	c=0;
	break;
    }
    }
    
    
    
void diabetes::setlock()
{
        int i,c=0;
        char a[20],p[13];	
        system("cls");
	    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	    cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
        cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	    cout<<"\n\n\t\t\t\t\t\t\t\t  WE ARE ALWAYS HERE TO HELP YOU \n\n\n";
	    fadmin.open("admin.txt",ios::in);
	    fout.open("admintmp.txt",ios::out);
	    fadmin.seekg(0,ios::beg);
	    fout.seekp(0,ios::beg);
		while(fadmin.read((char*)&admino,sizeof(admino)))	
	    {
	    fout.write((char*)&admino,sizeof(admino));
	    }
       fout.close(); 
	   fadmin.close();
	   fout.open("admintmp.txt",ios::in);
	   while( fout.read((char*)&admino,sizeof(admino)))
	   {
	   	c++;
	   }
	   fout.close();
	   fadmin.open("admin.txt",ios::in); 
	    if(c==0)
	    {
	   	cout<<"\n\n No id existed So please Signup to do so\n\n";
	   	sleep(3);
	    admino.adminsi();
	    } 
	    else
	    {
	    cout<<"\n\n Enter the userid : ";	
        cin>>a;
        cout<<"\n\n Enter The Password : ";
        for(i=0;i<12;i++)
	    	{
			p[i]=getch();
			if(p[i]==13)
			break;
			else if(p[i]==8)
			{
			cout<<"\b \b";
			i=i-2;
			}
			else
			putchar('*');
		    }
		p[i]='\0';	 
        while(fadmin.read((char*)&admino,sizeof(&admino)) && !fadmin.eof())
       {
    	if(strcmp(a,admino.userid)==0 && strcmp(p,admino.password)==0)
	   {
	    sleep(2);
    	cout<<"\n\n Wait for sometime\n\n";
	    break;
	   }
       }
       fadmin.close();	
       if(strcmp(a,admino.userid)==0 && strcmp(p,admino.password)==0)
	   {
	   cout<<"\n\n Login Successfull \n\n";
	   sleep(1);
	   cout<<" Redirecting \n\n";	
	   sleep(2);
	   mainobj.admin();
	   }
       else 
	   {
	   cout<<"\n\n Invalid UserId or Password \n\n";
	   counter1=0;
	   }	
       }    
}



void adminstration::duty()
{
	int choice;
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n\n";
	cout<<" 1 > Give Replies\n\n";
	cout<<" 2 > Take Complains\n\n";
	cout<<" 3 > Add Medicines\n\n";
	cout<<" 4 > Logout\n\n";
	cout<<" Choose option : \n ";
	cin>>choice;
	switch(choice)
	{
	case 1:
    mainobj.reply();	
	break;	
	case 2:
	admino.complains();
	break;
	case 3:
	admino.medi();
	break;
	case 4:
	exit(0);
	cout<<" \n\nLoging Out ....";
	sleep(2);
	mainobj.twist();	
	} 
}


void diabetes::reply()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"____________________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n\n";
    fin.open("query.txt",ios::in);
    fout.open("reply.txt",ios::app);
    while(fin.read((char*)&q,sizeof(q)))
    {
    	cout<<"\n\n Query Id No --> "<<q.id;
    	cout<<"\n\n Query --> "<<q.input;
    	cout<<"\n\n Asked By --> "<<q.name;
	}
	int tempid,k=0;
	fin.seekg(0,ios::beg);
	cout<<" \n\n ";
	cout<<" Enter The id Whom You want to give reply : ";
	cin>>tempid;
	cout<<"\n\n ";
	while(fin.read((char*)&q,sizeof(q)))
	{
		if(tempid==q.id)
		{
			break;
		}
		else
		k=1;
	}
	if(k==1)
	cout<<"Invalid Id \n\n";
	else if(tempid==q.id)
	{
	cout<<"Query Reply : ";	
	fflush(stdin);
	gets(q.reply);
	fout.write((char*)&q,sizeof(q));
	}
	fout.close();
	fin.close();
}


void diabetes::queries()
{
	system("cls");
	fout.open("query.txt",ios::app);
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"______________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n\n";
    cout<<"\n\n Enter The Name --> ";
	cin>>q.name;	
	cout<<"\n\n Enter the Query --> ";
    fflush(stdin);
	gets(q.input);
    cout<<"\n ";
	sleep(1);
	cout<<"\n\n Your Query id no. Generated --> ";
	srand(time(NULL));
	q.id=rand()%1200+9999;
	cout<<q.id;
	fout.write((char*)&q,sizeof(q));
	sleep(2);
	cout<<"\n\n Your Query Registered\n ";
	sleep(1);
	cout<<"\n\n Press Y to logout ";
	char ch;
	cout<<"\n\n Enter The Key : ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	fout.close();
	sleep(2);	
	mainobj.twist();
    }
	else
	{
	cout<<" Exit\n\n";
	mainobj.welcome();	
    fout.close();
	exit(0); 
    }
}

void diabetes::showqu()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_______________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n\n";
    fin.open("query.txt",ios::in);
    fout.open("reply.txt",ios::in);	
	while(fin.read((char*)&q,sizeof(q)))
	{
		cout<<" Query Id : "<<q.id;
		cout<<"\n\n QUERY ASKED BY : "<<q.name;
		cout<<"\n\n Query : "<<q.input;
		cout<<"\n\n";
	}
	cout<<"-----------------------------------------------------------------------------Replies---------------------------------------------------------------------------------------\n\n\n";
	while(fout.read((char*)&q,sizeof(q)))
	{
		cout<<" Query Id : "<<q.id;
		cout<<"\n\n Queries Solved : "<<q.reply;
		cout<<"\n\n";
	}
	sleep(2);
	fout.close();
	fin.close();
	cout<<"\n Press Y to Logout \n ";
	char ch;
	cout<<"\n\n Enter The Key : ";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	mainobj.twist();
	
}
	else
	exit(0);
}



void adminstration::medi()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_______________________________________________________________________________________________________________________________________________________________________________\n\n\n";
	int n,i;
	fin.open("Medicines.txt",ios::app);
	cout<<" Enter The Number of Medicines to Enter : ";	
	cin>>n;cout<<"\n\n ";
	for(i=0;i<n;i++)
	{
	cout<<"\n\n Enter The Medicine Id : ";
	cin>>medid;cout<<"\n\n";	
	cout<<" Enter The Medicine Name : ";
	fflush(stdin);
	gets(medicines);
	cout<<"\n\n Enter The Price : ";
	cin>>medprice;
	fin.write((char*)&admino,sizeof(admino));
    }
    fin.close();
}

void patient::medicare()
{
	system("cls");
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_______________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    fout.open("Medicines.txt",ios::in);
	cout<<" Here's the medicines list \n\n ";
	cout<<setw(10)<<"Medicine ID"<<setw(10)<<"|"<<setw(15)<<"MEDICINE NAMES"<<setw(15)<<"|"<<setw(10)<<"PRICE"<<"|";
	cout<<"\n\n________________________________________________________________________________________________________________________________________________________________________________\n\n";
    while(fout.read((char*)&admino,sizeof(admino)))
    {
    cout<<"|"<<setw(9)<<admino.medid<<setw(10)<<"|"<<setw(15)<<admino.medicines<<setw(15)<<"|"<<setw(10)<<admino.medprice<<"|\n\n";	
	}
   fout.close();
}
void patient ::buy()
{
	system("cls");
	int temp,localid,qty,i,tempid;
	float sum=0;
	char ch;
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_______________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    fcross.open("DIABETESDATA.txt",ios::in);
	fout.open("Medicines.txt",ios::in);
    fin.open("Medbuy.txt",ios::out);
    ftemp.open("empty.txt",ios::in);
    cout<<"\n\n Enter your id : ";
    cin>>tempid;
    while(fcross.read((char*)&mainobj,sizeof(mainobj)))
    {
    	if(tempid==mainobj.id)
    	break;
	}
    while(ftemp.read((char*)&admino,sizeof(admino)))
    {
    	fin.write((char*)&admino,sizeof(admino));
	}
	fout.close();
	ftemp.close();
	fin.close();
	fout.open("Medicines.txt",ios::in);
	cout<<" Here's the medicines list \n\n ";
		cout<<setw(10)<<"Medicine ID"<<setw(10)<<"|"<<setw(15)<<"MEDICINE NAMES"<<setw(15)<<"|"<<setw(10)<<"PRICE"<<"|";
	cout<<"\n\n_____________________________________________________________________________________________________________________________________________________________________________\n\n";
    while(fout.read((char*)&admino,sizeof(admino)))
    {
   cout<<"|"<<setw(9)<<admino.medid<<setw(10)<<"|"<<setw(15)<<admino.medicines<<setw(15)<<"|"<<setw(10)<<admino.medprice<<"|\n\n";		
	}
    fout.close();
    fout.open("Medicines.txt",ios::in);
	T:
	cout<<"\n\n Enter the id of medicine you want to Buy?\n\n ";
    cin>>temp;
    cout<<"\n\n Enter the quantity of medicine bought?\n\n ";
    cin>>qty;
    while(fout.read((char*)&admino,sizeof(admino)))
    {
    for(i=0;i<qty;i++)
    {
    if(temp==admino.medid) 
    {
    sum=sum+admino.medprice;
    }
    }
    }
    fout.seekg(0,ios::beg);
    fout.close();
    fout.open("Medicines.txt",ios::in);
    while(fout.read((char*)&admino,sizeof(admino)))
    {
    if(temp==admino.medid)
    {
     		 fin.open("Medbuy.txt",ios::app);
     		 fin.write((char*)&admino,sizeof(admino));
     		 fin.close();
	}
	}
	fout.close();
	fout.open("Medicines.txt",ios::in);
    cout<<"\n\n \t\t\t\tFOR MORE PRESS Y or FOR BILL PRESS ANY OTHER KEY\n\n ";
    cout<<"Your Choice : ";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
    goto T;
    }
    else
    {
    system("cls");
    int billid;
    srand(time(NULL));
    billid==rand()%1000000+2000000;
    fin.open("Medbuy.txt",ios::in);
    fsum.open("Bill.txt",ios::app);
    cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Bill id : "<<billid;
    cout<<setw(20)<<"Medicine ID"<<setw(20)<<"|"<<setw(25)<<"MEDICINE NAMES"<<setw(25)<<"|"<<setw(20)<<"PRICE"<<"|";
	cout<<"____________________________________________________________________________________________________________________________________________________________________________\n\n";
    while(fin.read((char*)&admino,sizeof(admino)))
    {
    cout<<"|"<<setw(19)<<admino.medid<<setw(20)<<"|"<<setw(25)<<admino.medicines<<setw(25)<<"|"<<setw(20)<<admino.medprice<<"|\n\n";	
	cout<<"_____________________________________________________________________________________________________________________________________________________________________________\n\n";   
    }
    cout<<"\n\n\t\t\t\t\t\t\t Total Bill of Medicine is : "<<sum;
	cout<<"\n________________________________________________________________________________________________________________________________________________________________________________\n\n";
    bobj.billid=billid;
	bobj.sum=sum;
	bobj.id=tempid;	
	fin.close();  
	fsum.write((char*)&bobj,sizeof(bobj));
	fsum.close();
	}
	fout.close();
	fcross.close();
	remove("Medbuy.txt");
    }    
void diabetes::update()
{
	ftemp.open("send1.txt",ios::in);
	fout.open("DIABETESDATA.txt",ios::in);
	system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    int tempid;
    fin.open("update.txt",ios::out);
    cout<<"\n\n You may have requests to update record ";
    cout<<"\n\n Press Y to see them ";
    char tp;
    cin>>tp;
    if(tp=='y'||tp=='Y')
    {
	    cout<<"\n\n Requests : ";
    	while(ftemp.read((char*)&pa,sizeof(pa)))
    	{
    	cout<<" "<<pa.send;
        }
	}
else
cout<<"\n\n You may be suspended for illegal access or change in data";	
	cout<<"\n\n Enter The ID to be updated \n";
	cin>>tempid;
	while(fout.read((char*)&mainobj,sizeof(mainobj)))
	{
if(mainobj.id==tempid)
	{
	cout<<"\n\n Enter the new name : ";
	fflush(stdin);
	gets(mainobj.name);
	cout<<"\n\n Enter the new age : ";
	cin>>mainobj.age;
	cout<<"\n\n Enter the new height : ";
	cin>>mainobj.height;
	cout<<"\n\n Enter the new weight : ";
	cin>>mainobj.weight;
	fin.write((char*)&mainobj,sizeof(mainobj));
    }
   else if(mainobj.id!=tempid)	
	fin.write((char*)&mainobj,sizeof(mainobj)); 
	}
	fout.close();
	fin.close();
	fin.open("update.txt",ios::in);
	fout.open("DIABETESDATA.txt",ios::out);
	fout.seekg(0,ios::beg);
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
		fout.write((char*)&mainobj,sizeof(mainobj));
	}
	fin.close();
	fout.close();
	cout<<"\n\n Updating...";
	sleep(2);
	cout<<"\n\n UPDATED...";
	sleep(1);
}
  
  void patient::updatemine()
  {
  	system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
  ftemp.open("send.txt",ios::app);
  cout<<"\n\n Write the msg to admin to update and what to update and give reason for it : ";
  fflush(stdin);	
  gets(pa.send);
  ftemp.write((char*)&pa,sizeof(pa));
  ftemp.close();
  cout<<"\n\n WAIT";
   sleep(2);
  cout<<"\n\n Request for change submitted\n";	
  }  
  
  void patient::complaints()  
{
	system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    ftemp.open("comp.txt",ios::app);
    cout<<"\n\n Write the complaint to admin : ";
    fflush(stdin);
	gets(pa.comp); 
  	ftemp.write((char*)&pa,sizeof(pa));
	ftemp.close();
	sleep(2);
	cout<<"\n\n Mail sent !!";
} 
 void adminstration::complains()  
 {
 	system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    fout.open("recomp.txt",ios::app);
    fin.open("comp.txt",ios::in);
    cout<<"\n\n Complains : ";
    while(fin.read((char*)&pa,sizeof(pa)))
    {
    cout<<" "<<pa.comp;
    cout<<"\n\n Write a Reply ";
	cout<<"\n\n "<<admino.re;	
	}
    fflush(stdin);
	gets(admino.re); 
  	fout.write((char*)&pa,sizeof(pa));
	fin.close();
	fout.close();
 }
 void patient::seem()
 {
    system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";	
 	fin.open("recomp.txt",ios::in);
 	while(fin.read((char*)&pa,sizeof(pa)))
 	{
 	cout<<" "<<admino.re;	
	}
	cout<<"\n\n Only latest Replies are Available \n";
	fin.close();
 }
 void diabetes::adminre()
 {
 	 system("cls");	
	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
 	fadmin.open("admin.txt",ios::in);
 	while(fadmin.read((char*)&admino,sizeof(admino)))
 	{
 	cout<<"\n\n ";
	 cout<<"Name : "<<admino.name;
	 cout<<"\n\n ";
	 cout<<"User Id : "<<admino.userid;
	 cout<<"\n\n ";
	 cout<<"ID no. : "<<admino.stid;
	 cout<<"\n\n";	
	 fadmin.close();
	}
 }
 
 
 void patient :: diseaselevel()
 {
 	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    fin.open("DIABETESDATA.txt",ios::in);
    fout.open("problems.txt",ios::in);
    cout<<"Enter Your Id : ";
    int tempid;
    cin>>tempid;
    int check=0;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
    	if(tempid==mainobj.id)
    	break;
	}
	while(fout.read((char*)&objp,sizeof(objp)))
	{
		if(tempid==objp.id)
		break;
	}
		if(tempid==mainobj.id)
		{
		cout<<"\n\n Sugar Level : "<<objp.sugarlevel;	
		if(objp.sugarlevel>=9.0)
{
	check=1;
cout<<" High Sugar Level-II\n";
}
else if(objp.sugarlevel<9.0 && objp.sugarlevel>7.5)
{
	check=2;
cout<<" High Sugar Level\n";
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<7.4)
{
	check=3;
cout<<" Normal Sugar Level\n";
}
else
cout<<" Low Sugar Level\n";
      }
      if(check==1)
cout<<"\n\n\n\t\t\t\t\t\t Diabetes Level-2 \n\n";
      else if(check==2)
cout<<"\n\n\n\t\t\t\t\t\t Diabetes Level-1\n\n";
else if(check==3)
cout<<"\n\n\n\t\t\t\t\t\t No Diabetes\n\n";
else
cout<<"\n\n\n\t\t\t\t\t\t Low sugar\n\n";
cout<<" Loading\n\n";
sleep(2);
cout<<" Health tip 2: Take medicines on time \n";
sleep(4);
fin.close();
fout.close();
mainobj.twist();
}

void patient::docchange()
{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
	cout<<" Sorry for the inconvenience caused Currently this interface is disabeled by admin\n\n";
    sleep(4);
    mainobj.twist();
}

void quick::buy()
{
	int sum;
	int billid;
	int mid;
	int qty;
	char ch1;
	int mod;
	B:
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
	cout<<"\t\t\t\t\t\t\t\t Medicines\n\n";
		static int j=0;
	cout<<setw(5)<<"ID"<<setw(5)<<"|"<<setw(20)<<"Name"<<setw(20)<<"|"<<setw(5)<<"Price/package"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"1"<<setw(5)<<"|"<<setw(20)<<"NOVOLOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1200"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"2"<<setw(5)<<"|"<<setw(20)<<"NOVOLIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1100"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"3"<<setw(5)<<"|"<<setw(20)<<"HUMULIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"4"<<setw(5)<<"|"<<setw(20)<<"HUMALOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1400"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"5"<<setw(5)<<"|"<<setw(20)<<"APIDRA"<<setw(20)<<"|"<<setw(5)<<"Rs 2000"<<setw(5)<<"|\n\n";				
	cout<<setw(5)<<"6"<<setw(5)<<"|"<<setw(20)<<"PRECOSE"<<setw(20)<<"|"<<setw(5)<<"Rs 2500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"7"<<setw(5)<<"|"<<setw(20)<<"MIGLITOL"<<setw(20)<<"|"<<setw(5)<<"Rs 3500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"8"<<setw(5)<<"|"<<setw(20)<<"KAZANO"<<setw(20)<<"|"<<setw(5)<<"Rs 4500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"9"<<setw(5)<<"|"<<setw(20)<<"GLUCOVANCE"<<setw(20)<<"|"<<setw(5)<<"Rs 5500"<<setw(5)<<"|\n\n";
	cout<<setw(5)<<"10"<<setw(5)<<"|"<<setw(20)<<"ACTOPLUS"<<setw(20)<<"|"<<setw(5)<<"Rs 6000"<<setw(5)<<"|\n\n";				
    cout<<"\n\n Enter the id you want to buy : ";
    cin>>mid;
    if(mid==1)
    {
    	sum=sum+1200;
	}
	if(mid==2)
    {
    	sum=sum+1100;
	}
	if(mid==3)
    {
    	sum=sum+1500;
	}
	if(mid==4)
    {
    	sum=sum+1400;
	}
	if(mid==5)
    {
    	sum=sum+2000;
	}
	if(mid==6)
    {
    	sum=sum+2500;
	}
	if(mid==7)
    {
    	sum=sum+3500;
	}
	if(mid==8)
    {
    	sum=sum+4500;
	}
	if(mid==9)
    {
    	sum=sum+5500;
	}
	if(mid==10)
    {
    	sum=sum+6000;
	}
	cout<<"\n\n You can buy only 2 medicines at a time as per Medical Department Rules: ";
	cout<<"\n\n Do you want more?(Y/N) ";
	cin>>ch1;
	if(ch1=='Y'||ch1=='y')
	{
		j++;
		mod=mid;
	    goto B;
   }
	else
	{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
cout<<setw(5)<<"ID"<<setw(5)<<"|"<<setw(20)<<"Name"<<setw(20)<<"|"<<setw(5)<<"Price/package"<<setw(5)<<"|\n\n";	
	
	
	if(mid==1 || mod==1)
    {
    	cout<<setw(5)<<"1"<<setw(5)<<"|"<<setw(20)<<"NOVOLOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1200"<<setw(5)<<"|\n\n";
	}
	if(mid==2 || mod==2)
    {
    cout<<setw(5)<<"2"<<setw(5)<<"|"<<setw(20)<<"NOVOLIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1100"<<setw(5)<<"|\n\n";	
	}
	if(mid==3|| mod==3)
    {
    cout<<setw(5)<<"3"<<setw(5)<<"|"<<setw(20)<<"HUMULIN"<<setw(20)<<"|"<<setw(5)<<"Rs 1500"<<setw(5)<<"|\n\n";	
	}
	if(mid==4 || mod==4)
    {
    cout<<setw(5)<<"4"<<setw(5)<<"|"<<setw(20)<<"HUMALOG"<<setw(20)<<"|"<<setw(5)<<"Rs 1400"<<setw(5)<<"|\n\n";
	}
	if(mid==5|| mod==5)
    {
    cout<<setw(5)<<"5"<<setw(5)<<"|"<<setw(20)<<"APIDRA"<<setw(20)<<"|"<<setw(5)<<"Rs 2000"<<setw(5)<<"|\n\n";				
	}
		if(mid==6 || mod==6)
    {
    	cout<<setw(5)<<"1"<<setw(5)<<"|"<<setw(20)<<"PRECOSE"<<setw(20)<<"|"<<setw(5)<<"Rs 1200"<<setw(5)<<"|\n\n";
	}
	if(mid==7 || mod==7)
    {
    cout<<setw(5)<<"2"<<setw(5)<<"|"<<setw(20)<<"MIGLITOL"<<setw(20)<<"|"<<setw(5)<<"Rs 1100"<<setw(5)<<"|\n\n";	
	}
	if(mid==8|| mod==8)
    {
    cout<<setw(5)<<"3"<<setw(5)<<"|"<<setw(20)<<"KAZANO"<<setw(20)<<"|"<<setw(5)<<"Rs 1500"<<setw(5)<<"|\n\n";	
	}
	if(mid==9 || mod==9)
    {
    cout<<setw(5)<<"4"<<setw(5)<<"|"<<setw(20)<<"GLUCOVANCE"<<setw(20)<<"|"<<setw(5)<<"Rs 1400"<<setw(5)<<"|\n\n";
	}
	if(mid==10|| mod==10)
    {
    cout<<setw(5)<<"5"<<setw(5)<<"|"<<setw(20)<<"ACTOPLUS"<<setw(20)<<"|"<<setw(5)<<"Rs 2000"<<setw(5)<<"|\n\n";				
	}
	cout<<"\t\t\t\t\t\t\t\t Total Bill : "<<sum;
	sleep(5);
	cout<<"\t\t\t\t\t\t\t Thanks!for taking Quick test and buying  medicines";
	sleep(3);
	mainobj.twist();
	}	
}	
