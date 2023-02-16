//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	
//	int n;
//	cout << "Введите число слов: ";
//	cin >> n;
//	string* name = new string[n];
//	for (int i = 0; i < n; i++)
//		cin >> name[i];
//	bool resBool = true;
//	for (int i = 0; i < n; i++)
//	{
//		string name2 = name[i];
//		int n2 = name2.length();
//
//		for (int k = 0; k < n2; k++) 
//		{
//			if (name2[k] == 'А' || name2[k] == 'а' || name2[k] == 'И' || name2[k] == 'и' || name2[k] == 'О' || name2[k] == 'о' || name2[k] == 'У' || name2[k] == 'у' || name2[k] == 'ы' || name2[k] == 'Э' || name2[k] == 'э' || name2[k] == 'Е' || name2[k] == 'е' || name2[k] == 'Ё' || name2[k] == 'ё' || name2[k] == 'Ю' || name2[k] == 'ю' || name2[k] == 'Я' || name2[k] == 'я')
//			{
//				resBool = true;
//				break;
//			}
//			else
//				resBool = false;
//		}
//		if (!resBool) 
//			cout << name[i] << " ";
//	}
//}

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <cstring>
using namespace std;

/*Напечатать все слова,которые не содержат гласных букв.*/

//функция проверки слов в строке на наличие гласных
char* prov(char* str, char* str2)
{
    const int size = 255;                
    char str1[size];              
    int i = 0, y = 0;       
    int q = strlen(str);
    for (int s = 0; s <= q + 1; s++)    
        str1[s] = '\0';
    while (i < q)
    {
        int j, k, w, t;
        if (str[i] != ' ')
        {
            j = i;
            while ((str[j] != ' ') && (str[j] != '\0'))
            {
                str1[j] = str[j];   
                j++;               
            }
        }
        str1[j] = ' ';
        w = strlen(str1);     
        t = 0;
        for (k = i; k < w; k++)    
        {                         
            int key = str1[k];
            if (key == 'А' || key == 'а' || key == 'И' || key == 'и' || key == 'О' || key == 'о' || key == 'У' || key == 'у' || key == 'ы' || key == 'Э' || key == 'э' || key == 'Е' || key == 'е' || key == 'Ё' || key == 'ё' || key == 'Ю' || key == 'ю' || key == 'Я' || key == 'я')
                t++;
        }
        if (t == 0)                             
            for (k = i; k < w; k++)              
            {                                   
                str2[y] = str1[k];
                y++;
            }
        i = j;
        i++;
    }
    str2[y] = '\0';
    return str2;
}

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size = 255;        
    char str[size];           
    char str2[size];
    cout <<"Введите строку: ";
    gets_s(str);                             
    prov(str, str2);                         
    cout << "Полученная строка: " << str2; 
    return 0;
}