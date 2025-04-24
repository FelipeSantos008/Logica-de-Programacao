//Faça um programa que receba um número e exiba o seu dobro.

//Variáveis

int numero1 = 0;
int numero2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite um numero");
  while (! Serial.available());
  numero1 = Serial.parseInt();
  
  //processamento
  numero2 = numero1 * 2;
    
  //saída 
    Serial.println("O dobro eh: " + String(numero2));
  
}