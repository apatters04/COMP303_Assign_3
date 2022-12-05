
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

int main() {

	map<string, string> stateDataMap;
	string user_state;

	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln")); //Add given pairs to stateDataMap
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachussetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	cout << "The map stateDataMap contains:" << endl;

	map<string, string>::iterator i;
	for (i = stateDataMap.begin(); i != stateDataMap.end(); ++i) { //output data stored in stateDataMap
		cout << i->first << ", " << i->second << endl;
	}
	cout << endl;

	stateDataMap["California"] = "Los Angeles"; //change capital of California to Los Angeles
	cout << "Changed capital of California." << endl;
	cout << endl;

	while (user_state != "quit") { //output capitalName using stateName which will be entered by user

		cout << "Enter state name or 'quit' to exit: " << endl;
		getline(cin, user_state);

		if (user_state == "quit") { //exit program
			break;
		}

		else {			
			
			auto it = stateDataMap.find(user_state); //finding stateKey to output capitalValue

			if (it == stateDataMap.end()) {
				cout << user_state << " not found - please enter a new state or check capitalization." << endl;
			}
			else {
				cout << "The Capital of " << it->first << " is " << it->second << "!!" << endl;
			}
			cout << endl;
		}
	}
	
}