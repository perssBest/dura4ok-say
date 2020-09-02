#include <iostream>
#include <cstring> 
#include <string>

using namespace std;

int main () {
	
	system("title redi u4it c++");
    string s;
	cout << "Plz write some text";
	getline(cin, s);
	if(s.length() <= 0) {
		cin >> s;
		system("title u error try again!");
	}
	
	system("cls");
	system("title u hacked!");
	cout << "dura4ok say: " << s << endl;
	
	system("pause");
    return 0;	
}
