#include<bits/stdc++.h>

using namespace std;



class Chatbot{

private:

	vector<pair<string,string> >v;
public:

	Chatbot(){

		v = 

		{

    			{

    				"Hi",

    				"Hello"

    			},

    			{

    				"Who are you?",

    				"I am an program!"

    			},

    			{

    				"What is your name?",

    				"My name id ChatBot2.0"

    			},

    			{

    				"How are you?",

    				"I am Fine."

    			},

    			{

    				"Bye",

    				"It was nice talking to you user, Bye..."

    			}

	    	};

	}

	

	void response(string input);

};



void Chatbot::response(string input){

	if(input==""){

		cout<<"Sorry....I'm not getting..";

	}

	for(int i=0;i<v.size();i++){

		if(v[i].first==input){

			cout<<"Chatbot:   "<<v[i].second<<endl;

		}

	}

}

int main(){

	Chatbot obj;

	while(true){

		string input;

		cout<<"User: ";

		getline(cin,input);

		obj.response(input);

		if(input=="Bye")

			break;

		cout<<"\n";

	}

	return 0;

}
