//  Lire un nombre hexadécimale et afficher son écriture en base 10.

#include <stdio.h>

int main(void) {
    int num;
    printf("Veillez introduire un nombre héxadécimal: ");
    scanf("%x", &num);
    printf("Le nombre héxadécimal %x est: %i en décimal \n", num, num);
    return 0;
}
/*  Again I'm not using arrays but I could. Here:

 #include <stdio.h>
 #include <ctype.h>
 #define inputSize 2
 int checkForValues(char);
 int main() {
 char    input[inputSize];
 int     result[inputSize];

 printf("Please insert %i hexadecimal values \n", inputSize);
 for (int i = 0; i < inputSize; ++i) {
 scanf("%c", &input[i]);
 result[i] = checkForValues(input[i]);
 printf("Hexadecimal: %c \t Decimal: %i \n", input[i], result[i]);
 }

 return 0;
 }
 int checkForValues(char e){
 char    hexValues[17] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','\0'};
 int result = 'G';
 for (int x = 0; x < 16; ++x) {
 result = toupper(e) == hexValues[x] ? x : result;
 }
 if(result == 'G')
 printf("Value not in table");
 return result;
 }

 *  It's ugly.
 *  And here it is even uglier in c++:


 #include <iostream>
 #include <string>

 using namespace std;

 class hexadicimal{
 string  hexInput;
 long    decOutput;

 public:
 void askForHexValue(){
 cout    << "Please type hexadecimal values then press enter. Type Q to quit" << endl;
 getline(cin, hexInput);
 if (hexInput == "Q") {
 cout<< "Goodbye." << endl;
 return;
 }else{
 decOutput = stol(hexInput,nullptr, 16);
 cout    << "Hexadecimal: '" << hexInput << "' \t"
 << "Decimal: " << decOutput << endl;
 askForHexValue();
 }
 }
 };

 int main(int argc, const char * argv[]) {
 hexadicimal hex;
 hex.askForHexValue();

 return 1;
 }

 *  I know I didn't use arrays on that one. But if you want to see one using arrays just ask.
 *  (It's already done and even uglier).
 */
