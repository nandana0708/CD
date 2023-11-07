include <iostream>

int main() {
    int x = 10;
    float y = 3.14;
    string name = "John";
    bool flag = true;
    
    if (x < 5) {
        print "x is less than 5";
    } else {
        print "x is greater than or equal to 5";
    }
    
    while (y > 2.0) {
        y = y - 1.0;
    }
    
    for (int i = 0; i < 5; i = i + 1) {
        print "i is: " + i;
    }
    
    return 0;
}
