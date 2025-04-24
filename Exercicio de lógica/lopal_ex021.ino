//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual.

//Variáveis
int anoNascimento = 0; 
int anoAtual = 0;
int idade = 0;
int idadeSemana = 0;

  
  
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println ("Digite o seu ano de nascimento");
  while (! Serial.available() );
  anoNascimento = Serial.parseInt();
  
  Serial.println("Digite o ano atual");
  while (! Serial.available() );
  anoAtual = Serial.parseInt();
  
  //processamento
  idade = anoAtual - anoNascimento;
  idadeSemana = idade * 52;
  
  //saída
  Serial.println ("Sua idade eh: " + String(idade));
  Serial.println ("Sua idade em semanas eh: " + String(idadeSemana));  
  
}