// Módulo LDR
int pin_LDR = G8;
int valor_LDR = 0;

// módulo relé 

int pin_rele = 5;

void setup() {
  pinMode(pin_LDR, INPUT);
  Serial.begin(9600);

  pinMode(pin_rele, OUTPUT);
  
}

void loop() {
  valor_LDR = analogRead(pin_LDR);
  Serial.print("Valor LDR: ");
  Serial.println(valor_LDR);

  if (valor_LDR < 100){

    digitalWrite(pin_LDR, LOW);
  }
}
