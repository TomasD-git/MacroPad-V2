#include <HijelHID_BLEKeyboard.h>
#include <Keypad.h>
HijelHID_BLEKeyboard keyboard("Tomik_Macropad");  // change to your prefered bluetooth name
#define ENC_CLK 4
#define ENC_DT  3
#define ENC_SW  2

const byte ROWS = 4;
const byte COLS = 4;
byte rowPins[ROWS] = {5, 6, 7, 21};
byte colPins[COLS] = {8, 9, 10, 20};
char keymap[ROWS][COLS] = {
  {'1','2','3','4'},
  {'5','6','7','8'},
  {'9','A','B','C'},
  {'D','E','F','G'}
}
;Keypad keypad = Keypad(makeKeymap(keymap), rowPins, colPins, ROWS, COLS);
int currentLayer = 1;
bool lastCLK = HIGH;
bool lastSW  = HIGH;
int8_t encState = 0;
unsigned long swDebounceTime = 0;
const unsigned long SW_DEBOUNCE = 50;
void setup() {
  pinMode(ENC_CLK, INPUT_PULLUP);
  pinMode(ENC_DT,  INPUT_PULLUP);
  pinMode(ENC_SW,  INPUT_PULLUP);

  keyboard.begin();
}
void loop() {
  if (!keyboard.isConnected()) return;
  handleKeypad();
  handleEncoder();
  delay(5);
}
// matrix
void handleKeypad() {
  char key = keypad.getKey();
  if (!key) return;
  // layer 1
  if (currentLayer == 1) {
    switch(key) {
      case '1': keyboard.print("1"); break;
      case '2': keyboard.print("2"); break;
      case '3': keyboard.print("3"); break;
      case '4': keyboard.print("+"); break;

      case '5': keyboard.print("4"); break;
      case '6': keyboard.print("5"); break;
      case '7': keyboard.print("6"); break;
      case '8': keyboard.print("-"); break;

      case '9': keyboard.print("7"); break;
      case 'A': keyboard.print("8"); break;
      case 'B': keyboard.print("9"); break;
      case 'C': keyboard.print("*"); break;

      case 'D': keyboard.print("0"); break;
      case 'E': keyboard.print("#"); break;
      case 'F': keyboard.print("/"); break;
      case 'G': keyboard.print("C"); break;
    }
  }
  // layer 2
  else {
    switch(key) {
      case '1': keyboard.write(KEY_F1); break;
      case '2': keyboard.write(KEY_F2); break;
      case '3': keyboard.write(KEY_F3); break;
      case '4': keyboard.write(KEY_F4); break;

      case '5': keyboard.write(KEY_F5); break;
      case '6': keyboard.write(KEY_F6); break;
      case '7': keyboard.write(KEY_F7); break;
      case '8': keyboard.write(KEY_F8); break;

      case '9': keyboard.write(KEY_F9); break;
      case 'A': keyboard.write(KEY_F10); break;
      case 'B': keyboard.write(KEY_F11); break;
      case 'C': keyboard.write(KEY_F12); break;

    }
  }
}
// rotary encoder
void handleEncoder() {
  bool currentCLK = digitalRead(ENC_CLK);
  bool currentDT  = digitalRead(ENC_DT);
  bool currentSW  = digitalRead(ENC_SW);
  if (currentCLK != lastCLK) {
    if (currentDT != currentCLK) encState++;
    else encState--;
    lastCLK = currentCLK;
  }
  if (encState >= 4) {
    keyboard.write(MEDIA_VOLUME_UP);
    encState = 0;
  } 
  else if (encState <= -4) {
    keyboard.write(MEDIA_VOLUME_DOWN);
    encState = 0;
  }
  if (currentSW != lastSW) {
    swDebounceTime = millis();
  }
  if ((millis() - swDebounceTime) > SW_DEBOUNCE) {
    if (currentSW == LOW && lastSW == HIGH) {
      toggleLayer();
    }
    lastSW = currentSW;
  }
}
// switch layer
void toggleLayer() {
  if (currentLayer == 1) {
    currentLayer = 2;
  } else {
    currentLayer = 1;
  }
}