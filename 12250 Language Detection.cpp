#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int n=1;
	string s;
	while(1)
                    {
		getline(cin,s);
		if(s.find('#')==0)
                              return 0;
		cout<<"Case "<<n++<<": ";
		if(s.find("HELLO")==0)
		cout<<"ENGLISH"<<endl;
		else if(s.find("HOLA")==0)
		 cout<<"SPANISH"<<endl;
		else if(s.find("HALLO")==0)
		cout<<"GERMAN"<<endl;
		else if(s.find("BONJOUR")==0)
		cout<<"FRENCH"<<endl;
		else if(s.find("CIAO")==0)
		 cout<<"ITALIAN"<<endl;
		else if(s.find("ZDRAVSTVUJTE")==0)
		 cout<<"RUSSIAN"<<endl;
		else
		cout<<"UNKNOWN"<<endl;
	}

	return 0;
}
