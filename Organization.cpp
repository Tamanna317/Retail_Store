#include<iostream>
#include<string>

using namespace std;
class organization
{
    public:
    string staff,management,store1;
    void emp()
    {
        cout<<"Please select category:"<<endl;
        cout<<"1.Sales"<<endl<<"2.management"<<endl;
        cin>>staff;
        if(staff=="Sales")
        {
            cout<<"Please select store to see employee details :"<<endl;
            cout << "TVA63" << endl << "TVA86" << endl << "TVA74" << endl << "TVA71"<< endl << "TVA01" << endl << "TVA09" << endl;
	            cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                  cout << "   Employee Name    : Age    : Salary(CTC) : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 23yrs  : 2,30,000/-  : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 24yrs  : 2,50,000/-  : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 27yrs  : 2,70,000/-  : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 21yrs  : 1,90,000/-  : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 32yrs  : 2,80,000/-  : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 42yrs  : 3,80,000/-  : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 37yrs  : 3,30,000/-  : Information Technology" << endl;
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                  cout << "   Employee Name    : Age    : Salary(CTC) : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 23yrs  : 2,30,000/-  : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 24yrs  : 2,50,000/-  : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 27yrs  : 2,70,000/-  : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 21yrs  : 1,90,000/-  : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 32yrs  : 2,80,000/-  : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 42yrs  : 3,80,000/-  : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 37yrs  : 3,30,000/-  : Information Technology" << endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                  cout << "   Employee Name    : Age    : Salary(CTC) : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 23yrs  : 2,30,000/-  : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 24yrs  : 2,50,000/-  : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 27yrs  : 2,70,000/-  : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 21yrs  : 1,90,000/-  : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 32yrs  : 2,80,000/-  : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 42yrs  : 3,80,000/-  : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 37yrs  : 3,30,000/-  : Information Technology" << endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
        }
        else if(staff=="Management")
        {
            cout<<"Please select store to see employee details :"<<endl;
            cout<<"TVA63"<<endl<<"TVA86"<<endl<<"TVA74"<<endl<<"TVA71"<<endl<<"TVA01"<<endl<<"TVA09"<<endl;
	            cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                  cout << "   Employee Name    : Age     : Salary(CTC) : Designation " << endl<<endl;
	                  cout << "1. Jeethil Johny    : 36 yrs  : 9,30,000/-  : Store Manager" << endl;
	                  cout << "2. Mobin Mirza      : 34 yrs  : 4,50,000/-  : Department Manager"<< endl;
	                  cout << "3. Yogesh Kumar     : 28 yrs  : 5,70,000/-  : Department Manager" << endl;
	                  cout << "4. Pooja Saroj      : 27 yrs  : 2,90,000/-  : Team Leader" << endl;
	                  cout << "5. Ajay Nishad      : 32 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "6. Lateef Shaikh    : 34 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "7. Rohit Rokade     : 28 yrs  : 2,30,000/-  : Team Leader" << endl;
	                  cout << "7. Sharad Shinde    : 29 yrs  : 2,30,000/-  : Customer Service Manager" << endl;
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                  cout << "   Employee Name    : Age     : Salary(CTC) : Designation " << endl<<endl;
	                  cout << "1. Jeethil Johny    : 36 yrs  : 9,30,000/-  : Store Manager" << endl;
	                  cout << "2. Mobin Mirza      : 34 yrs  : 4,50,000/-  : Department Manager"<< endl;
	                  cout << "3. Yogesh Kumar     : 28 yrs  : 5,70,000/-  : Department Manager" << endl;
	                  cout << "4. Pooja Saroj      : 27 yrs  : 2,90,000/-  : Team Leader" << endl;
	                  cout << "5. Ajay Nishad      : 32 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "6. Lateef Shaikh    : 34 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "7. Rohit Rokade     : 28 yrs  : 2,30,000/-  : Team Leader" << endl;
	                  cout << "7. Sharad Shinde    : 29 yrs  : 2,30,000/-  : Customer Service Manager" << endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                  cout << "   Employee Name    : Age     : Salary(CTC) : Designation " << endl<<endl;
	                  cout << "1. Jeethil Johny    : 36 yrs  : 9,30,000/-  : Store Manager" << endl;
	                  cout << "2. Mobin Mirza      : 34 yrs  : 4,50,000/-  : Department Manager"<< endl;
	                  cout << "3. Yogesh Kumar     : 28 yrs  : 5,70,000/-  : Department Manager" << endl;
	                  cout << "4. Pooja Saroj      : 27 yrs  : 2,90,000/-  : Team Leader" << endl;
	                  cout << "5. Ajay Nishad      : 32 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "6. Lateef Shaikh    : 34 yrs  : 3,80,000/-  : Team Leader" << endl;
	                  cout << "7. Rohit Rokade     : 28 yrs  : 2,30,000/-  : Team Leader" << endl;
	                  cout << "7. Sharad Shinde    : 29 yrs  : 2,30,000/-  : Customer Service Manager" << endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
       }
    }  
};
class shipping : public organization
{
    public:
    string store1;
        void stock()
        {
            cout<<"Please select store to see Products under shipping to stores :"<<endl;
            cout << "TVA63" << endl << "TVA86" << endl << "TVA74" << endl << "TVA71"<< endl << "TVA01" << endl << "TVA09" << endl;
	        cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                    cout<<"LG 32LM626   : 1 qty"<<endl;
	                    cout<<"MI 32HOR71   : 7 qty"<<endl;
	                    cout<<"SANSUI 43QST : 1 qty"<<endl;
	                    cout<<"Samsung AR18BYNZAUR  : 3 qty"<<endl;
	                    cout<<"Daikin FTL28UV16W1  : 1 qty"<<endl;
	                    cout<<"Sony 32W672G  : 5 qty"<<endl;
	                    cout<<"Apple Iphone 12  : 2 qty"<<endl;
	                    
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                   cout<<"Sony 55X80K   : 1 qty"<<endl;
	                   cout<<"LG 55UP8000  : 3 qty"<<endl;
	                   cout<<"Samsung 65QN900   : 0 qty"<<endl;
	                   cout<<"SANSUI 43QST : 1 qty"<<endl;
	                   cout<<"Samsung AR18BYNZAUR  : 3 qty"<<endl;
	                   cout<<"Daikin FTL28UV16W1  : 1 qty"<<endl; 
	                   cout<<"Apple Iphone 13  : 2 qty"<<endl;
	                   cout<<"Apple Iphone 12  : 2 qty"<<endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                  cout<<"SANSUI 43QST : 1 qty"<<endl;
	                  cout<<"Apple Iphone 13  : 2 qty"<<endl;
	                  cout<<"Samsung AR18BYNZAUR  : 3 qty"<<endl;
	                  cout<<"Daikin FTL28UV16W1  : 1 qty"<<endl;
	                  cout<<"LG 65UP7750  : 2 qty"<<endl;
	                  cout<<"Apple Iphone 14  : 2 qty"<<endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
        }
};
class Target : public shipping
{
    public:
    string store1;
        void target()
        {
            cout<<"Please select store to see Target VS Achievement of stores :"<<endl;
            cout << "TVA63" << endl << "TVA86" << endl << "TVA74" << endl << "TVA71"<< endl << "TVA01" << endl << "TVA09" << endl;
	        cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                    cout<<"Target                 : Annual  : Quarter : Monthly "<<endl<<endl;
	                    cout<<"Store                  : 7.45 CR : 2.50 CR : 60 lacs "<<endl;
	                    cout<<"Entertainment          : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Telecom                : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	                    cout<<"Home Appliances        : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Information Technology : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	                    
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                    cout<<"Target                 : Annual  : Quarter : Monthly "<<endl<<endl;
	                    cout<<"Store                  : 7.45 CR : 2.50 CR : 60 lacs "<<endl;
	                    cout<<"Entertainment          : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Telecom                : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	                    cout<<"Home Appliances        : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Information Technology : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                    cout<<"Target                 : Annual  : Quarter : Monthly "<<endl<<endl;
	                    cout<<"Store                  : 7.45 CR : 2.50 CR : 60 lacs "<<endl;
	                    cout<<"Entertainment          : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Telecom                : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	                    cout<<"Home Appliances        : 1.80 CR : 60 lacs : 15 lacs "<<endl;
	                    cout<<"Information Technology : 1.50 CR : 40 lacs : 10 lacs"<<endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
        } 
        void emp_target()
        {
	            cout<<"Please select store to see employee details :"<<endl;
                cout << "TVA63" << endl << "TVA86" << endl << "TVA74" << endl << "TVA71"<< endl << "TVA01" << endl << "TVA09" << endl;
	            cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                  cout << "   Employee Name    : Target       : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 7,50,000/-   : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 7,50,000/-   : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 7,50,000/-   : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 7,50,000/-   : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 5,00,000/-   : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 5,00,000/-   : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 10,00,000/-  : Information Technology" << endl;
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                  cout << "   Employee Name    : Target       : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 7,50,000/-   : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 7,50,000/-   : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 7,50,000/-   : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 7,50,000/-   : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 5,00,000/-   : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 5,00,000/-   : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 10,00,000/-  : Information Technology" << endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                  cout << "   Employee Name    : Target       : Department " << endl<<endl;
	                  cout << "1. Mahesh Kumar     : 7,50,000/-   : Home Appliance" << endl;
	                  cout << "2. Aaradhya         : 7,50,000/-   : Home Appliance"<< endl;
	                  cout << "3. Aamir Qureshi    : 7,50,000/-   : Entertainment" << endl;
	                  cout << "4. Yasir Ansari     : 7,50,000/-   : Entertainment" << endl;
	                  cout << "5. Rishikesh Singh  : 5,00,000/-   : Telecom" << endl;
	                  cout << "6. Abdul Shaikh     : 5,00,000/-   : Telecom" << endl;
	                  cout << "7. Omkar Shinde     : 10,00,000/-  : Information Technology" << endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
        }
};
class complaint : public Target
{
	public:
    string store1;
        void issue()
        {
            cout<<"Please select store to see complaints :"<<endl;
            cout << "TVA63" << endl << "TVA86" << endl << "TVA74" << endl << "TVA71"<< endl << "TVA01" << endl << "TVA09" << endl;
	        cin>>store1;
	            if(store1=="TVA63" || store1=="TVA74")
	            {
	                    cout<<"   Customer Name                  : Order Id      : Date of purchase       : Product             : Complaint          :  Status " << endl<<endl;
	                    cout<<"   Sudheer Singh                  : T4215V5646    : 27-11-2022		      : Samsung AR187435    : Cooling Issue      :  OPEN (Pending with service provider) "<<endl;
	                    cout<<"   Ramesh Kumar                   : T4865V7693    : 15-12-2022		      : Sansui 32LU6PB      : Display Issue      :  CLOSED (RSO iniatited ) "<<endl;
	                    cout<<"   Ravi Prasad                    : T4215V5646    : 11-01-2023		      : Samsung A21s        : Battery Issue      :  CLOSED (DOA Registered,Replacement Provided) "<<endl;
	                    cout<<"   Al-Wahid                       : T3215V7394    : 18-01-2023		      : JBL 2.1 DB          : Woofer Issue       :  OPEN (Pending with service centre,stock unavailable) "<<endl;
	            }
	            else if(store1=="TVA86" || store1=="TVA71")
	            {
	                    cout<<"   Customer Name                  : Order Id      : Date of purchase    : Product          : Complaint        :  Status " << endl<<endl;
	                    cout<<"   Sudheer Singh                  : T4215V5646    : 27-11-2022		   : Samsung AR187435 : Cooling Issue    :  OPEN (Pending with service provider) "<<endl;
	                    cout<<"   Ramesh Kumar                   : T4865V7693    : 15-12-2022		   : Sansui 32LU6PB   : Display Issue    :  CLOSED (RSO iniatited ) "<<endl;
	                    cout<<"   Ravi Prasad                    : T4215V5646    : 11-01-2023		   : Samsung A21s     : Battery Issue    :  CLOSED (DOA Registered,Replacement Provided) "<<endl;
	                    cout<<"   Al-Wahid                       : T3215V7394    : 18-01-2023		   : JBL 2.1 DB       : Woofer Issue     :  OPEN (Pending with service centre,stock unavailable) "<<endl;
	            }
	            else if(store1=="TVA01" || store1=="TVA09")
	            {
	                    cout<<"   Customer Name                  : Order Id      : Date of purchase    : Product          : Complaint        :  Status " << endl<<endl;
	                    cout<<"   Sudheer Singh                  : T4215V5646    : 27-11-2022		   : Samsung AR187435 : Cooling Issue    :  OPEN (Pending with service provider) "<<endl;
	                    cout<<"   Ramesh Kumar                   : T4865V7693    : 15-12-2022		   : Sansui 32LU6PB   : Display Issue    :  CLOSED (RSO iniatited ) "<<endl;
	                    cout<<"   Ravi Prasad                    : T4215V5646    : 11-01-2023		   : Samsung A21s     : Battery Issue    :  CLOSED (DOA Registered,Replacement Provided) "<<endl;
	                    cout<<"   Al-Wahid                       : T3215V7394    : 18-01-2023		   : JBL 2.1 DB       : Woofer Issue     :  OPEN (Pending with service centre,stock unavailable) "<<endl;
	            }
	            else
	            {
	                  cout << "4.Oops !! we dont have any branches here " << endl;
	            }
        } 	
};

int main()
{
    int org,m;
    string selection,password,uid;
    complaint c;
    cout<<"Please enter user ID :";
    cin>>uid;
    cout<<"Please enter your password :";
    cin>>password;
    if(uid=="TVAN123" && password=="123456")
    {
    	cout<<"***********************************Login Successfully*************************************"<<endl;
		cout<<"\t\t\t\t\t\t\tWelcome Mr. TVAN\t\t\t\t\t\t"<<endl;
	while(m>0)
    {
    cout<<"Please Select option :"<<endl<<endl;
    cout<<"1.Employee Details"<<endl<<"2.Product under shipping for store"<<endl<<"3.Target and Achievement"<<endl<<"4.Customer Complaint"<<endl;
    cin>>org;
    m=1;
    
      switch(org)
      {
        case 1:
        {
            c.emp();
            break;
        }
        case 2:
        {
            c.stock();
            break;
        }
        case 3:
        {
            cout<<"Please select option to view the target"<<endl;
            cout<<"1. Store Target "<<endl<<"Employee Target"<<endl;
            cin>>selection;
            if(selection=="Store")
            {
                c.target();
            }
            else if(selection=="Employee")
            {
                c.emp_target();
            }
            break;
        }
        case 4:
        {
        	c.issue();
		}
      }
      cout<<"Press 1 to continue else press 0 :";
      cin>>m;
    }
	}
	else
	{
		cout<<"Oops!!!! Please Enter correct Id and password";
	}
	cout<<"Press 1 to continue else press 0 :";
    cin>>m;
    return 0;
}
