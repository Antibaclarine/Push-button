// C++ code
//
// EXAMPLE APP - use button to toggle LED light on and off

// global variables
int led = 6;
int button = 7;
String ledStatus = "off";

void setup() {
    pinMode(button, INPUT_PULLUP);
    pinMode(led, OUTPUT);

    // turn off light at start to match ledStatus
    digitalWrite(led, LOW);
}

void loop() {
    // check button
    int buttonState = digitalRead(button);

    // LOW means button is being pushed
    if(buttonState == LOW) {

        // if light is currently off, switch to on
        if(ledStatus == "off") {
            ledStatus = "on";
            digitalWrite(led, HIGH);
        }
        // else light must be on, so switch to off
        else {
            ledStatus = "off";
            digitalWrite(led, LOW);
        }
    }

    // wait 0.2 seconds before checking button again
    delay(200);
}