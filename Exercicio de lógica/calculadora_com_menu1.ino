
float numero1 = 0;
float numero2 = 0;
float soma, subtrair, multiplicar, dividir;
int escolhaDaOperacao;
int contador = 0;


void setup()
{
  Serial.begin(9600);
  
    do{
  
    Serial.println("Bem-vindo(a) a calculadora mega inteligente :p");
    Serial.println("Escolha uma das opcoes/operacao");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");


    while(! Serial.available()){} //Espera o usuário digitar
    escolhaDaOperacao = Serial.parseInt(); //Armazena o que usuário digitou  na variável

    Serial.println("Agora, para realizar a operacao digite o 1 numero: ");
    while(! Serial.available()){} 
    numero1 = Serial.parseFloat(); 

    Serial.println("Agora, digite o 2 numero: ");
    while(! Serial.available()){} 
    numero2 = Serial.parseFloat(); 

    if (escolhaDaOperacao == 1){
      	soma = numero1 + numero2;
      	Serial.println("WOW!! O resultado foi: " + String(soma));
    } else if (escolhaDaOperacao == 2){
    	subtrair = numero1 - numero2;
      	Serial.println("WOW!! O resultado foi: " + String(subtrair));
    }else if (escolhaDaOperacao == 3){
    	multiplicar = numero1 * numero2;
        Serial.println("WOW!! O resultado foi: " + String(multiplicar));
    }else if (escolhaDaOperacao == 4){
    	dividir = numero1 / numero2;
        Serial.println("WOW!! O resultado foi: " + String(dividir));  
    }
       
       Serial.println("");
       Serial.println("Voce deseja continuar? Se sim, digite [s], se nao digite [n]");
       Serial.println("");      
       while(!Serial.available());
      
      if (Serial.readString() == "s"){
		 contador++;
      }
      else{
      	contador = 0;
        Serial.println("");
        Serial.println("Ate breve, obrigado por usar a calculadora mega inteligente");
        Serial.println("Caso queria voltar, reinicie o sistema.");
      }
      
      
  }
  while(contador != 0);
  
 
}

void loop()
{
  //sem código
}