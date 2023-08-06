
//// Before uploading the code you have to install the necessary library//
//AFMotor Library https://learn.adafruit.com/adafruit-motor-shield/library-install //

#include <AFMotor.h>
#include <VarSpeedServo.h>
void blutooth_mode()
{
for (;;)
  {
    if (Serial.available() > 0) {

      command = Serial.read();

      lowspeed = Speed / 7;
      //Speed = map(command, 0, 10, 0, 255);


      Stop(); //initialize with motors stoped
      //Change pin mode only if new command is different from previous.
      //Serial.println(command);

      switch (command) {

        case 'S':
          Stop();
          break;

        case 'F':
          forward();
          break;
        case 'B':
          back();
          break;
        case 'L':
          left();
          break;
        case 'R':
          right();
          break;

        case 'I':
          forward_right();
          break;

        case 'G':
          forward_left();
          break;

        case 'J':
          backward_right();
          break;

        case 'H':
          backward_left();
          break;

        case '0':
          speed_0();
          break;

        case '1':
          speed_1();
          break;

        case '2':
          speed_2();
          break;
        case '3':
          speed_3();
          break;
        case '4':
          speed_4();
          break;
        case '5':
          speed_5();
          break;
        case '6':
          speed_6();
          break;
        case '7':
          speed_7();
          break;
        case '8':
          speed_8();
          break;
        case '9':
          speed_9();
          break;
        case 'q':
          speed_10();
          break;
      }
    }
    if (digitalRead(mode_switch) == 0)
    {
      Alarm();
      obstacles_vanishing();
    }
  }
}
void line_follower()
{
  myservo.write(103, 200, true);
  for (;;)
  {

    if (ultrasonic() <= 15)
    {
      Stop();
      Alarm();
    }

    else if ((analogRead(Lline) > 900 && analogRead(Cline) > 900 && analogRead(Rline) > 900))
    {
      Speed = 120;
      right();
    }

    else if ((analogRead(Lline) < 900 && analogRead(Cline) < 900 && analogRead(Rline) < 900))
    {
      Stop();
    }

    else if (analogRead(Cline) < 900)
    {
      Speed = 100;
      forward();
      delay(25);


    }
    else if (analogRead(Rline) < 900 )
    { Speed = 150;
      right();
      delay(25);

    }
    else if (analogRead(Lline) < 900)
    {
      Speed = 150;
      left();
      delay(25);

    }

    if (digitalRead(mode_switch) == 0)
    {
      Alarm();
      blutoth_car() ;
    }


  }
}








void obstacles_vanishing()
{
  Speed = 255;
  for (;;)
  {
    forward();


    if (ultrasonic() <= 30)
    {
      back();
      Alarm();
      Stop();


      myservo.write(15   , 200, true);        // move to 180 degrees, use a speed of 30, wait until move is complete
      Rdistance = ultrasonic();
      delay(250);

      myservo.write(170, 200, true);        // move to 180 degrees, use a speed of 30, wait until move is complete
      Ldistance = ultrasonic();
      delay(250);

      myservo.write(103, 200, true);        // move to 180 degrees, use a speed of 30, wait until move is complete

      if (Rdistance >= Ldistance)
      {
        right();
        delay(400);
        Stop();
      }
      if (Rdistance < Ldistance)
      {
        left();
        delay(400);
        Stop();
      }

    }

    if (digitalRead(mode_switch) == 0)
    {
      Alarm();
      line_follower();
    }

  }
};
void obstacles_vanishing();
int ultrasonic(void);
void forward()
{
   motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor3.setSpeed(Speed);//Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(Speed);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}
void back(){
    motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor anti-clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor anti-clockwise
  motor3.setSpeed(Speed); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(Speed); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor anti-clockwise
}
void right();
void left();
void Stop();
void forward_right();
void   forward_left();
void  backward_right();
void backward_left();

void Alarm();
void speed_0();
void speed_1();
void speed_2();
void speed_3();
void speed_4();
void speed_5();
void speed_6();
void speed_7();
void speed_8();
void speed_9();
void speed_10();

VarSpeedServo myservo;    // create servo object to control a servo VarSpeedServo myservo;    // create servo object to control a servo VarSpeedServo myservo;    // create servo object to control a servo


//initial motors pin
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

const int buzer = A5;  // alarm
const int Lline = A2;  // lift line follower sensor
const int Cline = A3;  // right line follower sensor
const int Rline = A4;
const int mode_switch = 10; // push botun switch to change between the 3 mode
const int trigPin = A1;//Trigger Pin of Ultrasonic
const int echoPin = A0;//Echo Pin of Ultrasonic

long duration;//used by ultrasonic Function
int distance, Cdistance, Rdistance, Ldistance;
char command;
int Speed = 100 , lowspeed = 90;

void setup()
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);  //Set the baud rate to your Bluetooth module.
  pinMode(buzer, OUTPUT); // Sets the buzer as an Output
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  pinMode(Rline, INPUT);
  pinMode(Cline, INPUT);
  pinMode(Lline, INPUT);
  pinMode(mode_switch, INPUT_PULLUP);

  digitalWrite(buzer, LOW);

}

void loop()
{

  if (digitalRead(mode_switch) == 0)
  {
    Alarm();
    blutoth_car();
  }

}






//=================================================






void left()
{
  motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor anti-clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor anti-clockwise
  motor3.setSpeed(Speed); //Define maximum velocity
  motor3.run(BACKWARD);  //rotate the motor clockwise
  motor4.setSpeed(Speed); //Define maximum velocity
  motor4.run(BACKWARD);  //rotate the motor clockwise
}

void right()
{
  motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor clockwise
  motor3.setSpeed(Speed); //Define maximum velocity
  motor3.run(FORWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(Speed); //Define maximum velocity
  motor4.run(FORWARD); //rotate the motor anti-clockwise
  return (0);
}

void Stop()
{
  motor1.setSpeed(0); //Define minimum velocity
  motor1.run(RELEASE); //stop the motor when release the button
  motor2.setSpeed(0); //Define minimum velocity
  motor2.run(RELEASE); //rotate the motor clockwise
  motor3.setSpeed(0); //Define minimum velocity
  motor3.run(RELEASE); //stop the motor when release the button
  motor4.setSpeed(0); //Define minimum velocity
  motor4.run(RELEASE); //stop the motor when release the button
}


void forward_right()
{
  motor1.setSpeed(lowspeed); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(lowspeed); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor3.setSpeed(Speed);//Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(Speed);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}

void forward_left()
{
  motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(FORWARD); //rotate the motor clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(FORWARD); //rotate the motor clockwise
  motor3.setSpeed(lowspeed);//Define maximum velocity
  motor3.run(FORWARD); //rotate the motor clockwise
  motor4.setSpeed(lowspeed);//Define maximum velocity
  motor4.run(FORWARD); //rotate the motor clockwise
}

void backward_right()
{
  motor1.setSpeed(lowspeed); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor anti-clockwise
  motor2.setSpeed(lowspeed); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor anti-clockwise
  motor3.setSpeed(Speed); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(Speed); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor anti-clockwise
}

void backward_left()
{
  motor1.setSpeed(Speed); //Define maximum velocity
  motor1.run(BACKWARD); //rotate the motor anti-clockwise
  motor2.setSpeed(Speed); //Define maximum velocity
  motor2.run(BACKWARD); //rotate the motor anti-clockwise
  motor3.setSpeed(lowspeed); //Define maximum velocity
  motor3.run(BACKWARD); //rotate the motor anti-clockwise
  motor4.setSpeed(lowspeed); //Define maximum velocity
  motor4.run(BACKWARD); //rotate the motor anti-clockwise
}

int ultrasonic(void)  //get distance captured by ultrasonic sensor
{
  distance = 0;
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;

  delay(100);
  if (distance != 0)
  {
    return distance;
  }
  else return ;

}



void speed_0()
{
  Speed = 0;
}
void speed_1()
{
  Speed = 150;
}
void speed_2()
{
  Speed = 170;
}
void speed_3()
{
  Speed = 185;
}
void speed_4()
{
  Speed = 195;
}
void speed_5()
{
  Speed = 205;
}
void speed_6()
{
  Speed = 215;
}
void speed_7()
{
  Speed = 225;
}
void speed_8()
{
  Speed = 235;
}
void speed_9()
{
  Speed = 240;
}
void speed_10()
{
  Speed = 255;
}

void Alarm()
{
  digitalWrite(buzer, HIGH);
  delay(70);
  digitalWrite(buzer, LOW);
  delay(30);
  digitalWrite(buzer, HIGH);
  delay(150);
  digitalWrite(buzer, LOW);
  delay(50);

}


