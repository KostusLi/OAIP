#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");


    //1

        /*const char* str = "coding ending code standing landing file";
        const char* suffix = "ing";                       
        char currentWord[256] = { '\0' };                    
        int wordIndex = 0;                                 
        int suffixLength = 0;                              

        while (suffix[suffixLength] != '\0') {
            suffixLength++;
        }

        cout << "Исходная строка: " << str << endl;
        cout << "Заданное окончание: " << suffix << endl;
        cout << "Слова с заданным окончанием: ";

        for (int i = 0; true; i++) {
            if (str[i] != ' ' && str[i] != '\0') {
                currentWord[wordIndex++] = str[i];
            }
            else if (wordIndex > 0) {
                currentWord[wordIndex] = '\0';

                bool matches = true;
                int wordLength = wordIndex;
                if (wordLength >= suffixLength) {
                    for (int j = 0; j < suffixLength; j++) {
                        if (currentWord[wordLength - suffixLength + j] != suffix[j]) {
                            matches = false;
                            break;
                        }
                    }
                    if (matches) {
                        cout << currentWord << " ";
                    }
                }

                wordIndex = 0;
            }

            if (str[i] == '\0') {
                break;
            }
        }*/



    //3

       /* const char str[] = "apple banana apple orange banana apple"; 
        char currentWord[256] = { '\0' };
        char uniqueWords[256] = { '\0' };   
        int wordIndex = 0;                
        int uniqueLength = 0;           

        cout << "Исходное предложение: " << str << endl;

        for (int i = 0; true; i++) {
            if (str[i] != ' ' && str[i] != '\0') {
                currentWord[wordIndex++] = str[i];
            }
            else if (wordIndex > 0) {
                currentWord[wordIndex] = '\0';

                bool isUnique = true;
                int start = 0;
                while (start < uniqueLength) {
                    bool wordsMatch = true;
                    for (int j = 0; j < 256; j++) {
                        if (uniqueWords[start + j] != currentWord[j]) {
                            wordsMatch = false;
                            break;
                        }
                        if (uniqueWords[start + j] == '\0' && currentWord[j] == '\0') {
                            break;
                        }
                    }
                    if (wordsMatch) {
                        isUnique = false;
                        break;
                    }
                    while (uniqueWords[start] != '\0') {
                        start++;
                    }
                    start++;
                }

                if (isUnique) {
                    for (int j = 0; j <= wordIndex; j++) {
                        uniqueWords[uniqueLength++] = currentWord[j];
                    }
                }

                wordIndex = 0;
            }

            if (str[i] == '\0') {
                break;
            }
        }

        cout << "Результат: ";
        int start = 0;
        while (start < uniqueLength) {
            cout << &uniqueWords[start] << " ";
            while (uniqueWords[start] != '\0') {
                start++;
            }
            start++;
        }*/



//4

    const char str[] = "HOW DO YOU DO"; 
    char currentWord[256] = { '\0' };    
    char result[256] = { '\0' };         
    int wordIndex = 0;                
    int wordCount = 0;                 
    int resultIndex = 0;              

    cout << "Исходное предложение: " << str << endl;

    for (int i = 0; true; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[wordIndex++] = str[i];
        }
        else if (wordIndex > 0) {
            currentWord[wordIndex] = '\0'; 
            wordCount++;                   

            if (wordCount % 2 == 0) {
                for (int j = wordIndex - 1; j >= 0; j--) {
                    result[resultIndex++] = currentWord[j];
                }
                result[resultIndex++] = ' ';
            }

            wordIndex = 0;
        }

        if (str[i] == '\0') {
            break;
        }
    }

    if (resultIndex > 0 && result[resultIndex - 1] == ' ') {
        result[resultIndex - 1] = '\0';
    }
    else {
        result[resultIndex] = '\0';
    }

    cout << "Результат: " << result << endl;




    return 0;
}
