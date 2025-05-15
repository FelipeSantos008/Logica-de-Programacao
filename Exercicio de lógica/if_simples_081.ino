//nome, cargo e salário de um funcionário. Se o
//funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido

//vairaveis
String nome = "";
String cargo = "";
float salario = 0;
float acrescimo = 0;
  
//funçao que roda apenas uma vez
//serve para configuraçoes dos sensores, bibliotecas, etc
void setup()
{
  Serial.begin(9600); //inicia a porta serial
}

void loop()
{
 Serial.println("Digite seu nome: "); //informa uma mensagem ao usuario
 while(! Serial.available());//espera o ususario digitar e dar <Enter>
 nome = Serial.readString();//captura o dado digitado pelo usuario (resposta)
 
  
  Serial.println("Digite seu cargo: ");
  while(! Serial.available());//espera o usuario digitar e dar o <Enter>
  cargo = Serial.readString();

  
  Serial.println("Digite seu salario: ");
  while(! Serial.available());
  salario = Serial.parseInt();
  
  if (salario < 1000) { //true
    //calcular o novo salario
  acrescimo = salario * 1.10 ;
  }
  Serial.println();//pula linha
  Serial.println();//pula linha
  
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario: " + String(salario));
  Serial.println("Salario acrescido: " + String(acrescimo));
  
  Serial.println();//pula linha
  Serial.println();//pula linha
}
//FIM DO LOOOOP