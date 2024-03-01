// Define the pins for the columns and rows of the dot matrix display
const int NUM_COLS = 8;
const int NUM_ROWS = 8;
const int colPins[NUM_COLS] = { 2, 3, 4, 5, 6, 7, 8, 9 };          // Pins for columns
const int rowPins[NUM_ROWS] = { 10, 11, 12, 13, A0, A1, A2, A3 };  // Pins for rows

// Define some example patterns to display
byte patterns[] = {
  B00000000,
  B00011000,
  B00100100,
  B01000010,
  B10000001,
  B01000010,
  B00100100,
  B00011000
};

void setup() {
  // Set columns as outputs
  for (int i = 0; i < NUM_COLS; i++) {
    pinMode(colPins[i], OUTPUT);
  }

  // Set rows as outputs
  for (int i = 0; i < NUM_ROWS; i++) {
    pinMode(rowPins[i], OUTPUT);
  }
}

void loop() {
  // Display each pattern for a short duration
  for (int i = 0; i < sizeof(patterns); i++) {
    displayPattern(patterns[i]);
    delay(500);  // Adjust the delay as needed
  }
}

// Function to display a pattern on the dot matrix display
void displayPattern(byte pattern) {
  for (int col = 0; col < NUM_COLS; col++) {
    digitalWrite(colPins[col], bitRead(pattern, col));
  }

  for (int row = 0; row < NUM_ROWS; row++) {
    digitalWrite(rowPins[row], HIGH);
    delayMicroseconds(10);  // Adjust the delay as needed
    digitalWrite(rowPins[row], LOW);
  }
}
