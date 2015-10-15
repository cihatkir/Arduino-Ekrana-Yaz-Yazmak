/*
*******************************************************************************************
**                                                                                       **
**                                 Arduino 3. Proje                                      **
**                                 Ekrana yazı yazma                                     **
**                                                                                       **
**                                                                                       **
**                                       Cihat                                           **
**                                                                                       **
*******************************************************************************************
*/
#include <LiquidCrystal.h> //Ekranın class'ını tanıtıyoruz.
LiquidCrystal lcd(12,11, 5, 4, 3, 2); // Ekranın pinleri sırasıyla Arduino üzerindeki 12,11,5,4,3,2 numaralı pinlere takılı.

void setup() {
     lcd.begin(16, 2); // Ekranın kullanılacağı alan 16 harf 2 satır.
     lcd.print("Merhaba, dünya !"); // Ekrana yazılacak yazı.
}
void loop() {

}
