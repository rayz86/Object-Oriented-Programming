#include <iostream>
#include <string>
using namespace std;
int check_no_of_spam_words(string spam, string text)
{
 int count = 0, index = -1;
 while(1){
 index = text.find(spam, index+1);
 if(index ==-1) break;
 else count ++;
 }return count;
}
int main()
{
string spam[] = {"#1", "100%", "register", "free", "best", "price", "lucky", "giveaway", "top", "grossing", "Selling"};
 string text;
 int count = 0;
 cout << "Enter your text : ";
 getline(cin, text);
 for(int i=0; i<11; i++){
 count += check_no_of_spam_words(spam[i], text);
 }
 cout << "No of spam words : " << count;
}
