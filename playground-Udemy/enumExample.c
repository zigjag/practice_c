#include <stdio.h>
#include <stdbool.h>

int main(){
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    printf("%d\n", myGender);

    return 0;
}