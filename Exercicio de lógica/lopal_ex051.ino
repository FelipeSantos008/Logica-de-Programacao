// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas.

//variaveis
float cm = 0;
float polegada  = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{ 
  Serial.println("|------------------------------|");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|         LOPAL-EX02           |");
  Serial.println("|                              |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");


  Serial.println();//pula um linha
    Serial.println();//pula um linha

  
  Serial.println("Digite uma medida(cm)");
  while (! Serial.available ());
  cm = Serial.parseInt();
  
  //processamento
  polegada = float (cm) * 2.54;
    
    //Saída
    
    Serial.println("Essa medida em polegadas eh:" + String(polegada));
  
}