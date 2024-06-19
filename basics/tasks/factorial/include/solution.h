#pragma once

int factorial(int number) {
    // Replace this with your solution
    if (number==0||number==1){
        return 1;
    }
    else if(number>1){
        return number*factorial(number-1);
    }
    else{
        return -1;
    }
}
