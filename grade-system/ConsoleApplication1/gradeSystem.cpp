
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool userAuthentication(string username, string password) {


    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("storage.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {

        // Variables that will be used to deconstruct text file
        std::string s = myText;
        std::string delimiter = " ";
        string userInfo[4] = { "","","","" };
        int indexVal = 0;
        bool loggedIn = false;

        // Loop to get all text values individually
        size_t pos = 0;
        std::string token;
        while ((pos = s.find(delimiter)) != std::string::npos) {
            token = s.substr(0, pos);
            userInfo[indexVal] = token;
            s.erase(0, pos + delimiter.length());
            indexVal++;
        }

        // log in check
        if (username == userInfo[2] && password == userInfo[3]) {
            string fullname = userInfo[0] + " " + userInfo[1];
            cout << "Welcome " << fullname << "\n";
            loggedIn = true;
           
        }
        return loggedIn;   
    }

    // Close the file
    MyReadFile.close();

}

void addAccount(string firstname, string lastname, string username, string password) {

    // opening file so that it can be appended
    ofstream log("storage.txt", std::ios_base::app);

    // concatenating user info string
    string userInfo = firstname +" " + lastname +" "+ username +" "+ password + " end";

    // appended user info
    log << userInfo <<"\n";
}


int main()
{

    // initializing variables for user authentication process
    string username;
    string password;
    string account;
    bool loggedIn = false;


    // check for account
    cout << "Do you have an account? (y/n) ";
    getline(cin, account);

    // if account does exist
    if (account == "y") {

        // Get username
        cout << "Please input your username ";
        getline(cin, username);
        cout << "Your username is: " << username;

        // Get password
        cout << "\nPlease input your password ";
        getline(cin, password);
        cout << "Your password is: " << password << "\n";

        // authenticate user existance
        loggedIn = userAuthentication(username, password);

    }
    // if user does not have an account
    else {
        // Creating account
        string firstName;
        string lastName;

        // Get full name
        cout << "Please input your first name ";
        getline(cin, firstName);
        cout << "Please input your last name ";
        getline(cin, lastName);

        // concatenate into full name
        string fullName = firstName + " " + lastName;
        cout << "Your full name is: " << fullName;

        // Get username
        cout << "\nPlease input what your account username will be ";
        getline(cin, username);
        cout << "Your username is: " << username;

        // Get password
        cout << "\nPlease input what your account password will be ";
        getline(cin, password);
        cout << "Your password is: " << password << "\n";

        addAccount(firstName, lastName, username, password);

        loggedIn = true;
        cout << "Welcome" << fullName << "\n";

    }

}