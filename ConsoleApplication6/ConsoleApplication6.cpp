#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");


	char* str1 = new char[200] {"Lorem Ipsum is simply dummy text, of th, printing and typesetting industry. Lorem Ipsum has been the industrys standard dummy text ever since the 1500s.\0"};
	char* str2 = new char[200] {"Lorem Ipsum is simply dummy text, of th, printing and is typesetting industry is . Lorem Ipsum has been the industrys standard dummy text ever since the 1500s.\0"};
	char* tmp; 
	char* tmp1;
	char* tmp12 = new char[3]{"is"};
	//2,3

	/*bool d = true;
	int com = 0;
	int toch = 0;
	while (d)
	{
		tmp = strpbrk(str1, ".,");
		if (tmp == nullptr) d = 0;
		else {
			if (*tmp == '.')toch++;
			if (*tmp == ',')com++;
			
			str1 = tmp;
			int sz = strlen(str1);
			memmove(str1, str1 + 1, sz - 1);
			str1[sz - 1] = 0;
			
		
			
		}
	}
	cout << com+ toch <<"Количесво предложений " <<"количество точек:"<<toch <<", количество ком:"<<com;
	delete[] tmp;
	delete[] str1;*/


	//1
  bool l = true;
  int i = 0;
  while (l)
  {
	  tmp1 = strstr(str2, "is");
	  if (tmp1 == nullptr || tmp1 ==0) l = false;
	  else
	  {
		  str2 = tmp1;
		  int sz = strlen(str2);
		  memmove(str2, str2 + strlen(tmp12), sz - strlen(tmp12));
		  str2[sz - strlen(tmp12)] = 0;
		  i++;
	  }
	 
  }
  cout << "количество схоств " << i;
}
