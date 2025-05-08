/*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

float n1, n2 = 0;
int media = 0;
int frequencia = 0;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Insira a primeira nota do aluno");
  while (! Serial.available());
  n1 = Serial.parseFloat();
  
  Serial.println("Insira a segunda nota do aluno");
  while (! Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Insira a frequencia do aluno");
  while(! Serial.available());
  frequencia = Serial.parseFloat();
  
  media = (n1+n2)/2;
  
  if(media=10 && frequencia >= 75){
    Serial.println("A media do aluno foi:" + String(media));
    Serial.println("A frequencia do aluno foi: " + String(frequencia) + "%");
  	Serial.println("Parabens! Nota maxima!");
  } else (media >= 6 && frequencia >= 75);{
    Serial.println("A media do aluno foi:" + String(media));
    Serial.println("A frequencia do aluno foi: " + String(frequencia)+ "%");
  	Serial.println("Aprovado!");
  } if(media <= 5 && frequencia >= 75){
    Serial.println("A media do aluno foi:" + String(media));
    Serial.println("A frequencia do aluno foi: " + String(frequencia)+ "%");
    Serial.println("Aluno reprovado por nota");
  } else if (media >=6 && frequencia < 75){
    Serial.println("A media do aluno foi:" + String(media));
    Serial.println("A frequencia do aluno foi: " + String(frequencia)+ "%");
    Serial.println("Aluno reprovado por falta");
  }

  
  
}