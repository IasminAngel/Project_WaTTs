// C++ code
// Iasmin Angel


int led = 3;
int beep = 4; 
int portaPotenciometro = A0; 
int valorPotenciometro = 0; 

void setup()
{
	pinMode (led, OUTPUT);
  	pinMode (beep, OUTPUT); 
  	Serial.begin (9600);
}

void loop()
{
  	valorPotenciometro = analogRead (portaPotenciometro);
  	Serial.println(valorPotenciometro);
  	int brilho = map(valorPotenciometro, 0, 1023, 0, 255);
  	analogWrite(led, brilho);
  
  	// IF PARA O BEEP
    if(valorPotenciometro > 700)
    {
      digitalWrite(beep, HIGH);  	
    } else 
      
    {
      digitalWrite(beep, LOW);
    }
  
  	delay(10); 
}