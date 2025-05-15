 /*Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
*/

float precoProduto = 0;
float percentual = 0;
float valorVenda = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o preco da compra: ");
  while(! Serial.available());
  precoProduto = Serial.parseFloat();
  
  Serial.println("Digite o percentual a ser aplicado: ");
  while(! Serial.available());
  percentual = Serial.parseFloat();
  
   valorVenda = precoProduto + (precoProduto / 100 * percentual);  
  Serial.println();
  
  Serial.println("O valor do produto eh: R$ " + String(precoProduto));
  Serial.println("O perdcentual eh: " + String(percentual) + "&");
  Serial.println("preco de venda: R$ " + String(valorVenda));
                 
 if (percentual < 50) {
 Serial.println("O lucro da sua venda sera muito pequeno:");
 }             
                 
  
                 
                 
                 
                 
   
  
}