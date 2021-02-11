#include <iostream>
#include <fstream>

using namespace std;
int main() {
    
    ifstream file;
    file.open("liczby2.txt");

    int i, digit, number;
    int count10 = 0, count8 = 0;

        for(i=0; i<1000; i++) 
        {
            file >> digit;

            number = digit;
                while (number) 
                {
                    if (number%10 == 6) 
                    {
                        count10++;
                    }
                    number/= 10;
                }

            number = digit;
                while (number) 
                {
                    if (number%8 == 6) 
                    {
                        count8++;
                    }
                    number/= 8;
                }
        }
    
    file.close();
    cout << "szostek w dziesietnym " << count10 << "\n\n";
    cout << "szostek w osemkowym " << count8 << "\n";
    
    return 0;
}
