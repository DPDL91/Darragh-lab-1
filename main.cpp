// error occured because there was no way to read the position of the button.
//Had to add a flag and then the interrupt to be able to reset the flag and to get the code to work 

#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);

bool buttonFlag = false; 

void bttn_irq_handler()
{
    buttonFlag = true; 

    //we want to set the flag when the button is pushed

}


int main()
{
    bttn.rise(&bttn_irq_handler);

    //interupt handler fucntion

    while (1) {
        if (buttonFlag){
            printf("button pressed\n");
            buttonFlag = false; 

            //resets flag 

    }
}

