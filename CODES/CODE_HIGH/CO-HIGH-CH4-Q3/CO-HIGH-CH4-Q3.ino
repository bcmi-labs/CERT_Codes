const int redPin = 3;
const int bluePin =  5;
const int greenPin = 6;

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() 
{
  //Turn Purple the RGB LED
  analogWrite(3, 255);
  analogWrite(5,___);
  analogWrite(6,___);
  delay(1000);

  //Turn Cyan the RGB LED
  analogWrite(3,  0 );
  analogWrite(5,___);
  analogWrite(6,___);
  delay(1000);

  //Turn Orange the RGB LED
  analogWrite(3,___);
  analogWrite(5, 0  );
  analogWrite(6,___);
  delay(1000);

  //Turn Blue the RGB LED
  analogWrite(3, 0  );
  analogWrite(5, 255);
  analogWrite(6, 0  );
  delay(1000);
