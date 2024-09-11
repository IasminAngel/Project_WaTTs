# Projeto Arduino: Controle de LED e Buzzer com Potenciômetro

Este projeto utiliza um potenciômetro para controlar o brilho de um LED e o estado de um buzzer (beep) com uma placa Arduino. O LED ajusta seu brilho com base na leitura do potenciômetro, e o buzzer emite um som quando o valor do potenciômetro é superior a um determinado limite.

## Componentes

- **Placa Arduino** (Uno, Mega, etc.)
- **Potenciômetro**
- **LED**
- **Buzzer (beep)**
- **Resistor** (para o LED, opcional)

## Esquema de Conexão

- **LED**:
  
  - Pino positivo (ânodo) conectado ao pino `3` do Arduino.
  - Pino negativo (cátodo) conectado a um resistor de 220 ohms e ao GND do Arduino.
    

- **Buzzer**:

  - Pino positivo conectado ao pino `4` do Arduino.
  - Pino negativo conectado ao GND do Arduino.

- **Potenciômetro**:
  
  - Pino central (sinal) conectado ao pino `A0` do Arduino.
  - Pino VCC do potenciômetro conectado ao pino `5V` do Arduino.
  - Pino GND do potenciômetro conectado ao pino `GND` do Arduino.
 
## Funcionamento:

Inicialização: O pino do LED e do buzzer são configurados como saídas. O monitor serial é iniciado com uma taxa de 9600 bps.

Leitura do Potenciômetro: O valor do potenciômetro é lido e impresso no monitor serial.

Controle do LED: O brilho do LED é ajustado com base no valor do potenciômetro, mapeando o intervalo de leitura (0-1023) para o intervalo de brilho do LED (0-255).

Controle do Buzzer: O buzzer é acionado (emissão de som) se o valor do potenciômetro for maior que 700; caso contrário, o buzzer fica desligado.

Atualização: O loop é executado continuamente com um atraso de 10 milissegundos entre as iterações.

## Como Usar:

Conecte os componentes conforme o esquema acima.

Carregue o código para a sua placa Arduino usando a IDE Arduino.

Abra o monitor serial na IDE Arduino para visualizar os valores do potenciômetro.

Ajuste o potenciômetro e observe o brilho do LED e o comportamento do buzzer.

## Licença

Este projeto está disponível sob a licença MIT (ou outra licença de sua escolha).

Se você tiver alguma dúvida ou encontrar um problema, sinta-se à vontade para abrir uma issue no repositório do GitHub.

**Nota:** Substitua https://github.com/usuario/repo pelo link real do seu repositório GitHub, e adicione um arquivo de licença (LICENSE) se necessário.
