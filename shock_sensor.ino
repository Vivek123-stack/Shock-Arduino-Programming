int Led = 13; // define LED Interface
int Shock = 3; // define the vibration sensor interface
int val; // define numeric variables val

void setup () {
pinMode(Led, OUTPUT); // define LED as output interface
pinMode(Shock, INPUT); // output interface defines vibration sensor
}

void loop () {
val = digitalRead(Shock); // read digital interface is assigned a value of 3 val

// When the shock sensor detects a signal, LED flashes
if (val == HIGH) {
digitalWrite(Led, LOW);
}
else {
digitalWrite(Led, HIGH);
}
}
