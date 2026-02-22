#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    int n1, n2, n3, n4, n5, n8, n10, total=0;

    printf("Enter a word: "); /*"A"→ string (type: char *)
                               'A'→ character (type: char)
                               "\n"→ string
                               '\n'→ character*/

    while( (ch=getchar()) != '\n' ){
        
        ch = toupper(ch);

        if (ch== 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' ||
                    ch ==  'O' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U')
            n1 = 1;
        else n1 = 0;
        
        if (ch == 'D' || ch == 'G')
            n2 = 2;
        else n2 = 0;

        if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
            n3 = 3;
        else n3 = 0;

        if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
            n4 = 4;
        else n4 = 0;

        if (ch == 'K')
            n5 = 5;
        else n5 = 0;
        
        if (ch == 'J' || ch == 'X')
            n8 = 8;
        else n8 = 0;
        
        if (ch == 'Q' || ch == 'Z')
            n10 = 10;
        else n10 = 0;

        total = total + n1 + n2 + n3 + n4 + n5 + n8 + n10;
    }
    
    printf("Scrabble value: %d", total);

    return 0;
}