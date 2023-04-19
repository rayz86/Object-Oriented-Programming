#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class ITEM
{
string name, manufac;
int qty;
double price;
public:
void input(){
ofstream items;
items.open("foodItems.txt");
ITEM obj;
int n, i;
cout << "Enter the number of items : ";
cin >> n;
for(i = 0; i < n; i++){
cout << "----- ITEM " << i + 1 << "-----" << endl;
cout << "Name : ";
cin >> name;
cout << "Price : ";
cin >> price;
cout << "Manufacturer : ";
cin >> manufac;
cout << "Quantity : ";
cin >> qty;
obj.name = name;
obj.price = price;
obj.manufac = manufac;
obj.qty = qty;
items.write((char*)&obj, sizeof(obj));
}
}
void display_item(){
ifstream item;
item.open("foodItems.txt");
ITEM obj;
item.read((char *) &obj, sizeof(obj));
string searchItem;
cout << "Enter the searching Item name : ";
cin >> searchItem;
cout << "\nITEM DETAILS\n";
while(!item.eof() && !item.fail()){
if(searchItem == obj.name){
cout << "Name : " << obj.name << endl;
cout << "Price : " << obj.price << endl;
cout << "Manufacturer : " << obj.manufac << endl;
cout << "Quantity : " << obj.qty << endl << endl;
break;
}
item.read((char *) &obj, sizeof(obj));
}
item.close();
}
void display_item_in_range(){
ifstream item;
item.open("foodItems.txt");
ITEM obj;
item.read((char *) &obj, sizeof(obj));
cout << "\nITEM DETAILS\n";
while(!item.eof() && !item.fail()) {
if(obj.price >= 100 && obj.price <= 500){
cout << "Name : " << obj.name << endl;
cout << "Price : " << obj.price << endl;
cout << "Manufacturer : " << obj.manufac << endl;
cout << "Quantity : " << obj.qty << endl << endl;
}
item.read((char *) &obj, sizeof(obj));
}
item.close();
}
};
int main()
{
ITEM obj;
obj.input();
int ch;
do{
cout << "1. Displaying a particular item" << endl;
cout << "2. Displaying item from price range [100 - 500]" << endl;
cout << "3. Exit" << endl;
cout << "-> ";
cin >> ch;
switch(ch){
case 1:obj.display_item();break;
case 2:obj.display_item_in_range();break;
}
}
while(ch != 3);
return 0;
}
