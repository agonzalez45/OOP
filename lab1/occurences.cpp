#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string toLowerCase(string word){
	for(int i = 0; i<word.length(); i++)
	{
		word[i] = tolower(word[i]);
	}
	return word;
}

int main()
{
	ifstream in("words.txt");
	int count=0;
	string word,user;
	cin >> user;
	user = toLowerCase(user);

	while(in >> word) //>> is used to read word by word
	{
        
		word = toLowerCase(word);
        for(int i = 0; i<word.length(); i++)
        {
            if(word[i] <97 || word[i] >122)
                word.erase(i,1);
        }
      
        if(user == word)
		{
			count++;
		}
		
	}
	cout << count << endl;
return 0;
}
