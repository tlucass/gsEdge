# 💧 Sistema de Irrigação Automatizado
O sistema de irrigação automatizado é um sistema que utiliza tecnologia para monitorar constantemente a umidade do solo e, de forma automática, acionar o processo de irrigação quando a umidade atinge um valor pré-estabelecido. O objetivo desse projeto é oferecer uma solução eficiente e econômica para o cuidado das plantas, assegurando que elas recebam a quantidade adequada de água, evitando tanto a escassez quanto o desperdício.

<br>

![Circuito do Projeto](./img/circuito.png)

<br>

---

<br>

## ✅ Funcionalidades:
- Controle contínuo da umidade do solo: O sistema realiza leituras periódicas da umidade do solo utilizando um sensor de umidade do solo, que fornece informações precisas sobre as condições de umidade;
- Ativação automática da irrigação: Quando a umidade do solo atinge um valor inferior ao estabelecido, o sistema aciona a irrigação automaticamente, fornecendo água às plantas de forma controlada e precisa;
- Desligamento quando a umidade do solo estiver acima do valor limite.

<br>

---

<br>

## ⚙️ Requisitos:
- Arduino;
- 2x Protoboard's;
- Display LCD 16x2;
- Potenciômetro;
- Resistor 330 Ω
- Sensor de umidade do solo;
- Módulo de relé: Utilizado para controlar o acionamento do motor da irrigação;
- Motor de irrigação: Responsável por bombear a água para irrigar as plantas;
- Jumpers

<br>

---

<br>

## 👤 Instruções de Uso:

<br>

1. Carregue o código: Utilize a IDE do Arduino para carregar o código do projeto no Arduino.
<br>

2. Configure os parâmetros: No código, defina o valor limite de umidade do solo desejado para ativar a irrigação.
3. Alimente o sistema: Conecte a fonte de alimentação ao Arduino e aos componentes do sistema.
4. Inicie o sistema: Ligue o Arduino e aguarde a inicialização.
5. Acompanhe o monitoramento: O sistema realizará leituras da umidade do solo e exibirá os valores no monitor serial da IDE do Arduino.
6. Ativação da irrigação: Quando a umidade do solo atingir um valor abaixo do definido, o sistema acionará o motor de irrigação automaticamente.
7. Ajustes e personalização: Se necessário, ajuste os parâmetros do código conforme suas necessidades e teste diferentes valores de umidade do solo para ativar a irrigação.

<br>

---

<br>

## Informações Adicionais:

1. Calibração do Sensor de Umidade do Solo: Para obter leituras precisas da umidade do solo, pode ser necessário realizar uma calibração inicial do sensor. Cada sensor pode ter características e respostas diferentes, portanto, é importante seguir as instruções específicas do fabricante para calibrar o sensor adequadamente.
2. Segurança Elétrica: Ao trabalhar com eletricidade, é fundamental tomar precauções de segurança. Desligue a alimentação antes de fazer qualquer alteração no circuito ou nos componentes. Certifique-se de seguir as diretrizes de segurança elétrica recomendadas e, se necessário, consulte um profissional qualificado.

<br>

---

<br>

## Considerações Finais:

O sistema de irrigação automatizado oferece uma solução prática e eficiente para manter a umidade adequada do solo, garantindo o crescimento saudável das plantas. Ao utilizar a plataforma Arduino e os componentes mencionados, é possível construir um sistema personalizado e adaptável às necessidades específicas de cada projeto. Certifique-se de seguir as instruções de uso corretamente, tomar as precauções de segurança necessárias e realizar testes para otimizar o funcionamento do sistema.
