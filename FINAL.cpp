#include<iostream>
using namespace std;

class student 
{
	//SINGLE INHERITANCE
	public:
		virtual void info()
		{
		cout<<"\n************WELCOME TO************"<<endl;
	    cout << "************MITAOE, PUNE***********" << endl;
        cout<<"\nSTUDENT REGISTRATION:";
      
			int age;
			string no;
			string name;
			string city;
			cout<<"\nEnter the Student's name: "<<endl;
			cin>>name;
			cout<<"Enter the Student's PRN: "<<endl;
			cin>>no;
			cout<<"Enter the Student's roll no: "<<endl;
			cin>>age;
			cout<<"Enter the Student's Hometown: "<<endl;
        	cin>>city;
		}
};

//POLYMORPHISM

class fees : public student
{
	public:
		int s;
	
};
class developmentfee : public fees
{
	public:
		int b;	
};
//TEMPLATE
template<class basic , class all>
all bonuscal(basic p,all q)
{
    return ((p/q)*100);
}

//POINTER TO OBJECT
class scholarship
{
	int b;
	public:
		void fees(int a)
		{
			if(a<=200000)
			{
				b=a/2;
				cout<<"\n**YOUR TOTAL FEES AFTER APPLYING SCHOLARSHIP IS :**"<<b<<endl;
			}
			else
			{
				cout<<"\n**NO CHANGES IN THE FEES**";
			}
			
		}
		
};
int main()
{
   //POLYMORPHISM
	student*e;          
	student emp;        
	e=&emp;
	e->info();
	//TEMPLATE
    int bs;
    float as;
  
   cout<<"\n SSC RESULTS:";
   cout<<"\n Enter the marks scored   :";
   cin>>bs;
   cout<<"\n Total Marks out of :";
   cin>>as;
   cout<<"\n Percentage in SSC is : "<<bonuscal(bs,as)<<endl;
    
   
   cout<<"\n HSC RESULTS:";
   cout<<"\n Enter the marks scored   :";
   cin>>bs;
   cout<<"\n Total Marks out of :";
   cin>>as;
   cout<<"\n Percentage in HSC is : "<<bonuscal(bs,as)<<endl;
   
    //POLYMORPHISM
    developmentfee obj;
    
	cout<<"Enter your fees = "<<endl;
	cin>>obj.s;
	cout<<"Enter the development fees (in percentage) = "<<endl;
	cin>>obj.b;
	int total;
	total = obj.s+((obj.s*obj.b)/100);
	cout<<"Total fees = "<<total<<endl;
	
	//EXCEPTIONAL HANDLING
	int x;

	cout<<"\nEnter your annual income :";
	cin>>x;
	try
	{
		cout<<"We are in try block"<<endl;
		if(x<=500000)
		{
			throw string("You are Eligible for Scholarships");                            
		}
		if(x>500000)
		{
			throw string("You are Not eligible for Scholarships");
		}
	}
	catch(string x)
	{
		cout<<"Exception caught"<<endl;
		cout<<x<<endl;
	}
	cout<<"Finish"<<endl;
	//POINTER TO OBJECT
	int n;
	scholarship ob,*p;
	
	cout<<"\nEnter your fees :"<<endl;
	cin>>n;
	
	ob.fees(n);
	
	

    
	return(0);
}
