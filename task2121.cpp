#include <iostream>

int main()
{

	char a = 'a';
	
	std::cin >> a;
	
	if((a>=65 && a <= 90) || (a >= 97 && a <= 122))
	
	{
		
			if(a==65 || a==69 || a==73 || a==79
		|| a==85 || a==97 || a==101 || a==105 ||
	       	a==111 || a==117)
				
			{
				std::cout << "vowel";
			}
			
			else
			{
				std::cout << "con";
			}
	}
			else
			{
				std::cout <<"sym";
			}


	return 0;
}
