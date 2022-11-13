#include "DigiKeyboard.h"


void setup() {
  // put your setup code here, to run once:
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(3000);
   DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT|MOD_ALT_LEFT);
   DigiKeyboard.delay(1000);
   DigiKeyboard.print("xdg-open https://www.youtube.com/watch?v=xvFZjo5PgG0");
   DigiKeyboard.delay(500);
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(5000);
   DigiKeyboard.sendKeyStroke(KEY_K);
}
void loop() {
   
  
}
