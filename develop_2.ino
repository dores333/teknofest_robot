const int trigPin1 = 11; // orta sensör

const int echoPin1 = 10; // orta sensör

const int trigPin2 = A3;  // sağ sensör

const int echoPin2 = A4; // sağ sensör

const int trigPin3 = A2; // sol sensör

const int echoPin3 = A5; // sol sensör

const int in1 = 9; // motor 1 ileri 

const int in2 = 8; // motor 1 geri

const int in3 = 4; // motor 2 ileri

const int in4 = 3; // motor 2 geri

const int enA = 5; // motor 1 hız 

const int enB = 6; // motor 2 hız 

#define PWM1 100 // motorlarımızın hızları

#define PWM2 105 // motorlarımızın hızları

#define DIS1 15 // sensörun gorus mesafesi

#define DIS2 10 // sensörun gorus mesafesi

#define DIS3 3 // sensörun gorus mesafesi

void setup() {

pinMode(trigPin1, OUTPUT); // cıkış olarak 

pinMode(echoPin1, INPUT);  // giriş olarak


pinMode(trigPin2, OUTPUT);

pinMode(echoPin2, INPUT);


pinMode(trigPin3, OUTPUT);

pinMode(echoPin3, INPUT);

 

pinMode (in1, OUTPUT);

pinMode (in2, OUTPUT);
 
pinMode (in3, OUTPUT);

pinMode (in4, OUTPUT); // çıkış olarak 

pinMode (enA, OUTPUT);

pinMode (enB, OUTPUT);

}

void loop() {

if (FrontSensor()>DIS3 && RightSensor()<DIS2 && LeftSensor()<DIS2)
{
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
  
}

else if (FrontSensor()>DIS3 && RightSensor()<DIS2 && LeftSensor()>DIS2)
{
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()>DIS3 && RightSensor()>DIS2 && LeftSensor()>DIS2)
{
  saga_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()>DIS3 && RightSensor()>DIS2 && LeftSensor()<DIS2)
{
  saga_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()<DIS3 && RightSensor()>DIS2 && LeftSensor()<DIS2)
{
  saga_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()<DIS3 && RightSensor()>DIS2 && LeftSensor()>DIS2)
{
  saga_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()<DIS3 && RightSensor()<DIS2 && LeftSensor()>DIS2)
{
  sola_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

else if (FrontSensor()<DIS3 && RightSensor()<DIS2 && LeftSensor()<DIS2)
{
  geri_don();
  stop();
  if (RightSensor()>LeftSensor())
  {
    bir_hucre_ileri_gita();
    stop();
  }

  else if (RightSensor()<LeftSensor())
  {
    bir_hucre_ileri_gitb();
    stop();
  }

  else
  {
    bir_hucre_ileri_git();
    stop();
  }
}

}

void bir_hucre_ileri_git ()

{

 delay(10); 

 digitalWrite(in1, HIGH);

 digitalWrite(in2, LOW);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM1);

 delay (450);

} 

void bir_hucre_ileri_gita ()

{

 delay(10); 

 digitalWrite(in1, HIGH);

 digitalWrite(in2, LOW);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM2);

 delay (450);

} 

void bir_hucre_ileri_gitb ()

{

 delay(10); 

 digitalWrite(in1, HIGH);

 digitalWrite(in2, LOW);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM2); 

 analogWrite(enB, PWM1);

 delay (450);

} 

void stop()

{

 digitalWrite(in1, LOW);

 digitalWrite(in2, LOW);

 digitalWrite(in3, LOW);

 digitalWrite(in4, LOW);

 analogWrite(enA, LOW);

 analogWrite(enB, LOW);

 delay(3000);

}


void saga_don()

{

 delay(10);

 digitalWrite(in1, LOW);

 digitalWrite(in2, HIGH);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM1);

 delay (305);

} 

void sola_don()

{

 delay(10);

 digitalWrite(in1, HIGH);

 digitalWrite(in2, LOW);

 digitalWrite(in3, HIGH);

 digitalWrite(in4, LOW);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM1);

 delay (305);

} 

void geri_don()

{

 delay(10);

 digitalWrite(in1, LOW);

 digitalWrite(in2, HIGH);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM1);

 delay (500);

} 

void ileri_git ()

{
  
 delay(10); 

 digitalWrite(in1, HIGH);

 digitalWrite(in2, LOW);

 digitalWrite(in3, LOW);

 digitalWrite(in4, HIGH);

 analogWrite(enA, PWM1); 

 analogWrite(enB, PWM1);

} 

long FrontSensor ()

{

long dur;

 digitalWrite(trigPin1, LOW); 

 delayMicroseconds(5); 

 digitalWrite(trigPin1, HIGH);

 delayMicroseconds(10); 

 digitalWrite(trigPin1, LOW);

 dur = pulseIn(echoPin1, HIGH);

 return (dur/58.2);

}

long RightSensor () 

{

long dur;

 digitalWrite(trigPin2, LOW);

 delayMicroseconds(5); 

 digitalWrite(trigPin2, HIGH);

 delayMicroseconds(10); 
 
 digitalWrite(trigPin2, LOW);

 dur = pulseIn(echoPin2, HIGH);

 return (dur/58.2);

}

long LeftSensor ()    
{

long dur;

 digitalWrite(trigPin3, LOW); 

 delayMicroseconds(5); 

 digitalWrite(trigPin3, HIGH);

 delayMicroseconds(10); 

 digitalWrite(trigPin3, LOW);

 dur = pulseIn(echoPin3, HIGH);

 return (dur/58.2);

}
