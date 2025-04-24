//Faça um programa que receba a idade de uma pessoa em ano e
//imprima essa idade em: Meses, Dias, Horas, Minutos. 

// Variáveis
int idade = 0; //inicia a idade
int idadeMeses = 0;
int idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
 Serial.begin (9600);
}

  
void loop()
{
 //entrada
  Serial.println("Digite a sua idade"); // pergunta a idade do usuário
  while( ! Serial.available() ); //Aguarda o usuário digitar
  idade = Serial.parseInt();  
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
  //saída
  Serial.println("Sua idade em meses:" + String(idadeMeses));
  Serial.println("Sua idade em dias:" + String(idadeDias));
  Serial.println("Sua idade em horas:" + String(idadeHoras));
  Serial.println("Sua idade em minutos:" + String(idadeMinutos));
}