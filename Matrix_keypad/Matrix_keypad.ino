#include <Keypad.h>

// Define the rows and columns of the keypad
const byte ROWS = 4;  // Four rows
const byte COLS = 4;  // Four columns

// Define the symbols on the buttons of the keypad
char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

// Connect keypad ROW0, ROW1, ROW2, and ROW3 to these Arduino pins
byte rowPins[ROWS] = { 9, 8, 7, 6 };

// Connect keypad COL0, COL1, COL2, and COL3 to these Arduino pins
byte colPins[COLS] = { 5, 4, 3, 2 };

// Create the Keypad
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String inputPassword = "";
String correctPassword = "2084#";

void setup() {
  Serial.begin(9600);  // Start communication
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print(key);  // For debugging purposes
    inputPassword += key;

    if (key == '#') {
      checkPassword();
      inputPassword = "";  // Clear the input for the next attempt
    }
  }
}

void checkPassword() {
  if (inputPassword == correctPassword) {
    //the extra code
  } else {
    Serial.println(" - Password is incorrect!");
  }
}
