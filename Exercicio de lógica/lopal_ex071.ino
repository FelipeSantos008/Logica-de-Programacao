// Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salario = 0.0;
float acrescimo = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  
  //Entrada
  Serial.println("Digite seu nome");
  while(! Serial.available());
  nome = Serial.readString();
  
  Serial.println("Digite seu cargo:");
  while(! Serial.available());
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario");
  while(! Serial.available());
  salario = Serial.readStringUntil('\n').toFloat();
  
  //processamento
  
  acrescimo = salario * 1.10;
    
    //Saída
    
    Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("O seu salario apos acrscimo eh: " + String(acrescimo));
  Serial.println (acrescimo, 2);
}