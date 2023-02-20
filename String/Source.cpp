//8.Составить алгоритм, исключающий из строки А символы строки Б.
/*
#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string sA = "abcdefaabb";
    std::string charsB = "acbj";
    for (char c : charsB) {
        sA.erase(std::remove(sA.begin(), sA.end(), c), sA.end());
    }
    std::cout << sA;
    return 0;
}
*/


/*
//12.Составить алгоритм, заменяющий в тексте слова “правда” на “ложь”.
#include <iostream>
#include <string>
int main(){
std::string text="true true true true true true";
std::string trueE="true";
std::string falseE="false";
int pos=text.find(trueE);
while(pos!=std::string::npos){
text.replace(pos,4,falseE);
pos=text.find(trueE);
}
std::cout << text;
return 0;
}
*/


/*
//21.Дан текст. Заменить все цифры соответствующими словами.
#include <iostream>
#include <string>
int main() {
int le1, le2, le3, le4;

std::string A = "In the End, we will 1 not the 2 of our 3, but the silence of our 4"; // In the End, we will remember not the words of our enemies, but the silence of our friends
std::string B = "remember";
std::string C = "words";
std::string D = "enemies";
std::string F = "friends";

A.resize( 72, ' ' );

le1 = A.find("1");
A.replace(le1, 1, B);

le2 = A.find("2");
A.replace(le2, 1, C);

le3 = A.find("3");
A.replace(le3, 1, D);

le4 = A.find("4");
A.replace(le4, 1, F);

std::cout<<A<<std::endl;
}
*/


//17.Дан массив строк. Упорядочить массив по длине строк.
#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;
int main() {
    const int size = 5;
    array<string, size> arr;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    string temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].length() > arr[j + 1].length()) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}