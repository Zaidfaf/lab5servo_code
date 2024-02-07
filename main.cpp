#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.019 //at at 0.189 it starts to vibrate
#define DUTY_MAX 0.1182 //at at 0.1183 it starts to vibrate
#define TIME_PERIOD 0.02

PwmOut Servo(PF_9);

int main(){
    Servo.period(TIME_PERIOD);
    Servo.write(DUTY_MIN);
    while(true){
    Servo.write(DUTY_MIN);
    delay(4000);
    Servo.write(DUTY_MAX);
    delay(4000);
    }

}
