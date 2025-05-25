#include <LiquidCrystal.h>

#define RS 12
#define E 11
#define DB4 8
#define DB5 9
#define DB6 10
#define DB7 13
#define lin 2
#define col 16

#define TRIGGER 5
#define ECHO 4
float distancia;
char tag;
int pir;
LiquidCrystal lcd(RS, E, DB4, DB5, DB6, DB7);
void setup()
{
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  Serial.begin(9600);
}

long lerDistancia(int trigger, int echo){
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);
  return pulseIn(echo, HIGH);
}

void loop()
{
  pir = digitalRead(2);
  if(pir == HIGH){
  	lcd.clear();
  	lcd.print("Aproxime uma tag");
  	distancia = 0.01723 * lerDistancia(TRIGGER, ECHO);
  	lcd.setCursor(0, 0);
  	proximidade(distancia);
  	pegaSerial();
  	//Serial.println(distancia);
  }
  lcd.clear();
}

void proximidade(float valor){
  if(valor >= 30 && valor <= 40){
    Serial.write('s');
    delay(2000);
  }
}

void pegaSerial(){
  tag = Serial.read();
  if(tag == 'A'){
    digitalWrite(7, HIGH);
    lcd.clear();
    lcd.print("RECONHECIDA");
    delay(1000);
    digitalWrite(7, LOW);
  }else if(tag == 'B'){
    digitalWrite(7, LOW);
    lcd.clear();
    lcd.print("DESCONHECIDO");
    delay(1000);
  }
}