//7. Write a program of to concatenate the two strings using Operator Overloading.

#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& other)
	const
	{
        return MyString(str + other.str);
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    string input1, input2;

    cout<<"Enter the first string: ";
    cin>>input1;

    cout<<"Enter the second string: ";
    cin>>input2;

    MyString str1(input1);
    MyString str2(input2);

    MyString concatenated = str1 + str2;

    cout<<"\nConcatenated string : ";
    concatenated.display();
}

