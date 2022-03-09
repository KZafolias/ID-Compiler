<include> #iostream
<include> #string

using namespace std;

int main() {
	//vars
	String name;
	int age;
	string surname;
	string gender;
	string nationality;
	string fname; //fathers name
	string mname; //mother's name
	string dob; //date of birth

	//questions start here
	cout << "Type your name";
	cin >> name;
	cout << "Type your age";
	cin >> age;	
	cout << "Type your surname";
	cin >> surname;
	cout << "Type your gender";
	cin >> gender;	
	cout << "Type your nationality";
	cin >> nationality;
	cout << "Type your mother's name";
	cin >> mname;
	cout << "Type your father's name";
	cin >> fname;
	cout << "Type your date of birth";
	//save the awnsers in to a txt
	
	int a, b;
    
ifstream bd; 
myfile.open("file.txt");

if (myfile.is_open())
	while (bd >> a >> b)
    	cout << a << b << endl;

else cout << "ERROR";
}
