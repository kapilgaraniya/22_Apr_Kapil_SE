#include<iostream>
using namespace std;

class kapil
{
	public:
	int kid;
	string kt;
	
	void kinfo()
	{
		cout<<"Enter kapil ID : ";
		cin>>kid;
		cout<<"Technologies : ";
		cin>>kt;
	}
	
};

class hardik
{
	public:
	int hid;
	string ht;
	
	void hinfo()
	{
		cout<<"Enter Hardik ID : ";
		cin>>hid;
		cout<<"Technologies : ";
		cin>>ht;
	}
	
};

class chintan
{
	public:
	int cid;
	string ct;
	
	void cinfo()
	{
		cout<<"Enter Cintan ID : ";
		cin>>cid;
		cout<<"Technologies : ";
		cin>>ct;
	}
};

class tops : public kapil, public hardik, public chintan
{
	public:
	void pdata()
	{
		cout<<"\n\n-----Kapil-----";
		cout<<"\nID : "<<kid;
		cout<<"\nTechnologies : "<<kt;
		cout<<"\n\n-----Hardik-----";
		cout<<"\nID : "<<hid;
		cout<<"\nTechnologies : "<<ht;
		cout<<"\n\n-----Chintan-----";
		cout<<"\nID : "<<cid;
		cout<<"\nTechnologies : "<<ct;
	}
};
main()
{
	tops tp;
	
	tp.kinfo();
	tp.hinfo();
	tp.cinfo();
	tp.pdata();
	
}
