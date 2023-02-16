#include <iostream>
#include <string>
#include <string_view>

using namespace std;

int main() 
{
    
    // Объект типа int
	int* num = new int(123);  
	cout << *num << endl;
	delete num;


    // Объект типа string
	string* str = new string("Cats and Dogs"); 
	cout << *str << endl;
	delete str;


    // Массив объектов типа Int 
	int* int_arr = new int[5]{10, 20, 30, 40, 50};
	for (int i = 0; i <= 4; i++) {
		cout << int_arr[i] << " ";
	}
	cout << endl;
	delete[] int_arr;


    // Массив объектов типа string
	string* str_arr = new string[3]{"Cat", "Dog", "Mouse"};
	for (int i = 0; i <= 2; i++){
		cout << str_arr[i] << " ";
	}
	cout << endl;


    // Массив объектов типа string_view
        string_view* view_arr = new string_view[3];
	for (int i = 0; i <= 2; i++) {
		view_arr[i] = str_arr[i];
	}
	for (int i = 0; i <= 2; i++) {
		cout << view_arr[i] << " ";
	}
	delete[] view_arr;
	delete[] str_arr;
}
