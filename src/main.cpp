#include <Arduino.h>
#include <LiquidCrystal.h>

void SONDA_1();
void SONDA_2();
void SONDA_3();
void SONDA_4();

const int PinPO_SONDA1 = A0;
const int PinPO_SONDA2 = A1;
const int PinPO_SONDA3 = A2;
const int PInPO_SONDA4 = A3;

LiquidCrystal lcd( 12, 11, 5, 4, 3, 2);


void setup(){
Serial.begin(9600);
lcd.begin(16,2);
lcd.print(" spousteni ");
lcd.setCursor ( 0, 1 );
Serial.println("konec setupu");
lcd.clear();
}

void loop() {
  Serial.print("jsem v loopu a spouštím měření");

  SONDA_1();
  SONDA_2();
  SONDA_3();
  SONDA_4();

}




void SONDA_1()
{
int pole[10];
  int zaloha;
  unsigned long int prumerVysl = 0;
  // načtení deseti vzorků po 10 ms do pole
  for (int i = 0; i < 10; i++) {
    pole[i] = analogRead(PinPO_SONDA1);
    delay(10);
  }
  // seřazení členů pole naměřených výsledků podle velikosti
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (pole[i] > pole[j]) {
        zaloha = pole[i];
        pole[i] = pole[j];
        pole[j] = zaloha;
      }
    }
  }
  // uložení 2. až 8. výsledku do
  // proměnné, z které se vypočte průměr
  // (vynechání dvou členů pole na začátku
  // a konci pro lepší přesnost)
  for (int i = 2; i < 8; i++) {
    prumerVysl += pole[i];
  }
  // výpočet hodnoty pH z průměru
  // měření a přepočet na rozsah 0-14 pH
  float prumerPH = (float)prumerVysl * 5.0 / 1024 / 6;
  float vyslednePH_sonda1 = -5.70 * prumerPH + 21.34;
  // vytištění výsledků po sériové lince
  Serial.print("Namerene pH na sonde 1: ");
  Serial.println(vyslednePH_sonda1);
  // pauza 900 ms před novým měřením, celkem tedy 1s

  // část pro zakrouhlení na jedno destinné číslo
  float zaokrouhlenepH1 = (vyslednePH_sonda1*10) / 10.0;
  char zaokrouhlenoS1[10];
  dtostrf(zaokrouhlenepH1, 4, 1, zaokrouhlenoS1);
  
  delay(900);
  lcd.setCursor(0,0);
  lcd.print("S1:");
  lcd.print(zaokrouhlenoS1);


}

void SONDA_2()
{
int pole[10];
  int zaloha;
  unsigned long int prumerVysl = 0;
  // načtení deseti vzorků po 10 ms do pole
  for (int i = 0; i < 10; i++) {
    pole[i] = analogRead(PinPO_SONDA2);
    delay(10);
  }
  // seřazení členů pole naměřených výsledků podle velikosti
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (pole[i] > pole[j]) {
        zaloha = pole[i];
        pole[i] = pole[j];
        pole[j] = zaloha;
      }
    }
  }
  // uložení 2. až 8. výsledku do
  // proměnné, z které se vypočte průměr
  // (vynechání dvou členů pole na začátku
  // a konci pro lepší přesnost)
  for (int i = 2; i < 8; i++) {
    prumerVysl += pole[i];
  }
  // výpočet hodnoty pH z průměru
  // měření a přepočet na rozsah 0-14 pH
  float prumerPH = (float)prumerVysl * 5.0 / 1024 / 6;
  float vyslednePH_sonda2 = -5.70 * prumerPH + 21.34;
  // vytištění výsledků po sériové lince
  Serial.print("Namerene pH na sonde 2: ");
  Serial.println(vyslednePH_sonda2);
  // pauza 900 ms před novým měřením, celkem tedy 1s
  delay(900);
 float zaokrouhlenepH2 = (vyslednePH_sonda2*10) / 10.0;
  char zaokrouhlenoS2[10];
  dtostrf(zaokrouhlenepH2, 4, 1, zaokrouhlenoS2);


  lcd.setCursor(0,1);
  lcd.print("S2:");
  lcd.print(zaokrouhlenoS2);
}

void SONDA_3()
{

int pole[10];
  int zaloha;
  unsigned long int prumerVysl = 0;
  // načtení deseti vzorků po 10 ms do pole
  for (int i = 0; i < 10; i++) {
    pole[i] = analogRead(PinPO_SONDA3);
    delay(10);
  }
  // seřazení členů pole naměřených výsledků podle velikosti
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (pole[i] > pole[j]) {
        zaloha = pole[i];
        pole[i] = pole[j];
        pole[j] = zaloha;
      }
    }
  }
  // uložení 2. až 8. výsledku do
  // proměnné, z které se vypočte průměr
  // (vynechání dvou členů pole na začátku
  // a konci pro lepší přesnost)
  for (int i = 2; i < 8; i++) {
    prumerVysl += pole[i];
  }
  // výpočet hodnoty pH z průměru
  // měření a přepočet na rozsah 0-14 pH
  float prumerPH = (float)prumerVysl * 5.0 / 1024 / 6;
  float vyslednePH_sonda3 = -5.70 * prumerPH + 21.34;
  // vytištění výsledků po sériové lince
  Serial.print("Namerene pH na sonde 3: ");
  Serial.println(vyslednePH_sonda3);
  // pauza 900 ms před novým měřením, celkem tedy 1s
  delay(900);

 float zaokrouhlenepH3 = (vyslednePH_sonda3*10) / 10.0;
  char zaokrouhlenoS3[10];
  dtostrf(zaokrouhlenepH3, 4, 1, zaokrouhlenoS3);



  lcd.setCursor(8,0);
  lcd.print("S3:");
  lcd.print(zaokrouhlenoS3);

}

void SONDA_4()
{
int pole[10];
  int zaloha;
  unsigned long int prumerVysl = 0;
  // načtení deseti vzorků po 10 ms do pole
  for (int i = 0; i < 10; i++) {
    pole[i] = analogRead(PInPO_SONDA4);
    delay(10);
  }
  // seřazení členů pole naměřených výsledků podle velikosti
  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (pole[i] > pole[j]) {
        zaloha = pole[i];
        pole[i] = pole[j];
        pole[j] = zaloha;
      }
    }
  }
  // uložení 2. až 8. výsledku do
  // proměnné, z které se vypočte průměr
  // (vynechání dvou členů pole na začátku
  // a konci pro lepší přesnost)
  for (int i = 2; i < 8; i++) {
    prumerVysl += pole[i];
  }
  // výpočet hodnoty pH z průměru
  // měření a přepočet na rozsah 0-14 pH
  float prumerPH = (float)prumerVysl * 5.0 / 1024 / 6;
  float vyslednePH_sonda4 = -5.70 * prumerPH + 21.34;
  // vytištění výsledků po sériové lince
  Serial.print("Namerene pH na sonde 4: ");
  Serial.println(vyslednePH_sonda4);
  // pauza 900 ms před novým měřením, celkem tedy 1s
  delay(900);

 float zaokrouhlenepH4 = (vyslednePH_sonda4*10) / 10.0;
  char zaokrouhlenoS4[10];
  dtostrf(zaokrouhlenepH4, 4, 1, zaokrouhlenoS4);

  lcd.setCursor(8,1);
  lcd.print("S4:");
  lcd.print(zaokrouhlenoS4);
}