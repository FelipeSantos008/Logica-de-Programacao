/*Faca um programa que receba um codigo de origem de um produto e informe sua procedencia conforme a lista

CÓDIGO DE ORIGEM			PROCEDÊNCIA 
    	1							Sul
        2							Norte
        3							Leste
        4							Oeste
        5 ou 6 						Nordeste
        7, 8 ou 9 					 Sudeste
        10 até 20 					Centro-Oeste
        acima de 20 				Código ainda sem definição
*/

int codigoOrigem = 0;
void setup()
{
	Serial.begin(9600);
}

void loop()
{
  //Entrada
  
  Serial.println("Digite um numero");
  while(! Serial.available());
  codigoOrigem = Serial.parseInt();
  
  if (codigoOrigem == 1){
  	Serial.println("A origem do codigo eh SUL");
  } 	else if(codigoOrigem == 2){
    Serial.println("A origem do codigo eh NORTE");
  } else if(codigoOrigem == 3){
    Serial.println("A origem do codigo eh LESTE");
  } else if (codigoOrigem == 4){
    Serial.println("A origem do codigo eh OESTE");
  } 	else if(codigoOrigem <= 6) {
    Serial.println("A origem do codigo eh NORDESTE");
  }  else if (codigoOrigem <=9){
     Serial.println("A origem do codigo eh SUDESTE");
  } else if (codigoOrigem >= 10 && codigoOrigem <= 20 ) {
  	 Serial.println("A origem do codigo eh CENTRO-OESTE");
  } else {
       Serial.println("A origem do codigo ainda nao foi definido");
}
  delay(2010
       )/
  
}