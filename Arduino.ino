int data;
int k;
void setup() { 
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(10, OUTPUT); //make the LED pin (10) as output
  pinMode(11, OUTPUT);
  digitalWrite (10, LOW);//send 0 Volt signal
}
void loop() {
digitalWrite(10, LOW);
digitalWrite(11, LOW);
delay(1000); //controls time spend before next action
k=0;
if (k%5==0){ //every letter there's a 3 seconds delay
  delay(2000);
}
data = Serial.read(); //reads the input
    if (data == '1'){
      digitalWrite (10, HIGH); //send 5 Volt signal
      digitalWrite (11, HIGH);
      delay(7000);
      k=k+1;
    }
    else if (data == '3'){
      digitalWrite (10, HIGH);
      digitalWrite (11, HIGH);
      delay(3000);
      k=k+1;
    }
    else if (data == '5'){
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      delay(5000);
      k=k+1;
    }
    else if (data == '0'){
      digitalWrite (10, LOW);
      digitalWrite (11, LOW);
      delay(1);
      k=k+1;
    }
}
