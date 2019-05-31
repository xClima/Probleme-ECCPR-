//simulare2

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	struct Mijloc {
					char tmt[2]; // a sau t
					int nr;		// numar
					int ta;		// min    - timp asteptare
					int dc;		// min    - durata calatorie
					int durata; // ta + dc
					int minute; 
					int ora;
				  } v[105],min;
	int i,j;
	
	int hh,mm,n;
	char c;
	cin>>hh>>c>>mm;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>v[i].tmt>>v[i].nr>>v[i].ta>>v[i].dc;
	}
	
	min.durata=9999;
	for(i=0;i<n;i++)
	{
		v[i].durata=v[i].ta+v[i].dc;
		if(v[i].durata<min.durata)						//CAZ GENERAL, nu ma intereseaza daca tmt e a sau t
		{
			min.durata=v[i].durata;	
			strcpy(min.tmt,v[i].tmt);
			min.nr=v[i].nr;		
		}
		if(v[i].tmt[0]=='T' && min.durata==v[i].durata)	// CAZ PARTICULAR: afisez doar T
		{
			min.durata=v[i].durata;	
			strcpy(min.tmt,v[i].tmt);
			min.nr=v[i].nr;	
		}
		
	}
	
	
	// am aflat ta+dc MINIM
	
	int minute;int ora;
	minute=min.durata+mm;   // total minute
	ora=hh;                 // ora
	while(minute>60)
	{
		minute=minute-60;
		ora++;
	}
	while(ora>24)
	{
		ora=ora-24;
	}
	
	if(ora<10 && minute <10)
	cout<<min.tmt<<" "<<min.nr<<" "<<"0"<<ora<<":0"<<minute<<endl;
	
	else
	if(ora<10 && minute>10)
	cout<<min.tmt<<" "<<min.nr<<" "<<"0"<<ora<<":"<<minute<<endl;
	
	else
	if(ora>10 && ora<23 && minute <10)
	cout<<min.tmt<<" "<<min.nr<<" "<<ora<<":0"<<minute<<endl;
	
	else
	if(ora>10 && ora<23 && minute >10)
	cout<<min.tmt<<" "<<min.nr<<" "<<ora<<":"<<minute<<endl;
	
	else
	if(ora>10 &&  ora>23 && minute<10)
	cout<<min.tmt<<" "<<min.nr<<" "<<"00"<<":0"<<minute<<endl;
	else
	if(ora>10 && ora>23  && minute>10)
	cout<<min.tmt<<" "<<min.nr<<" "<<"00"<<":"<<minute<<endl;
	
	
}

