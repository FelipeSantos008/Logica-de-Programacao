// Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.

//variavel
float salario = 0;
float acrescimo = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu salario: ");
  while (! Serial.available());
  salario = Serial.parseInt();
  
  if (salario <= 500) {
   acrescimo = salario * 1.3;
   Serial.println("O salario acrescido eh: " + String(acrescimo));
} else {
   Serial.println("Funcionario sem direito a aumento.");
   delay(1000); 
  }
}
  
 