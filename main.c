// a function, that can print how many times it has been called so far without using a global variable

#include <stdio.h>

int counterFunction(){
    static int iCounter = 0;
    printf("%02d iCounter called \n", ++iCounter);
}

int main() {
    for (int i = 0; i < 10; ++i) {
        counterFunction();
    }
}
