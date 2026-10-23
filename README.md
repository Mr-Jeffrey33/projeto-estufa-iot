# 🌿 Sistema Automatizado de Controle de Estufa com Arduino (IoT)

Projeto desenvolvido como parte do Desafio de Projeto da trilha **Princípios de Eletrônica para IoT** da **Formação IoT Specialist** na [DIO (Digital Innovation One)](https://dio.me).

---

## 📌 Sobre o Projeto

O objetivo deste projeto é simular o sistema de monitoramento e controle térmico de uma estufa de hortaliças. O sistema monitora a temperatura ambiente em tempo real e toma decisões automáticas para ventilação e acionamento de alarme em caso de superaquecimento.

### ⚙️ Regras de Funcionamento:
- **Temperatura normal (< 30 °C):** Sistema em repouso (ventilador e alarmes desligados).
- **Ventilação ativa ($\ge$ 30 °C):** Aciona o motor CC simulando o ventilador da estufa para refrigerar o ambiente.
- **Alerta de Emergência (> 50 °C):** Mantém a ventilação e aciona simultaneamente um **LED vermelho** e uma **buzina (piezoelétrica)** alertando risco crítico para as hortaliças.

---

## 🛠️ Componentes e Tecnologias

- **Microcontrolador:** Arduino Uno R3
- **Sensor:** Sensor de temperatura analógico TMP36
- **Atuadores:** 
  - Motor CC (Ventilador)
  - Buzzer / Piezo (Alarme sonoro)
  - LED Vermelho (Alarme visual)
- **Componentes passivos:** Resistor de 220 $\Omega$ (para o LED) e Resistor de 200 $\Omega$ (para proteção de corrente da porta do motor)
- **Simulador:** [Autodesk Tinkercad](https://www.tinkercad.com/)
- **Linguagem:** C / C++ (Arduino Framework)

---

## 🔌 Esquema do Circuito

![Circuito no Tinkercad](assets/circuito.png)

### Pinagem utilizada:
| Componente | Pino no Arduino | Função |
| :--- | :---: | :--- |
| **TMP36 (Vout)** | `A0` | Entrada analógica de temperatura |
| **LED Vermelho** | `D6` | Alerta visual de emergência |
| **Buzzer (Piezo)** | `D7` | Alerta sonoro de emergência |
| **Motor CC** | `D9` | Acionamento da ventilação |

---

## 💻 Código-Fonte

O código completo do projeto está disponível na pasta [`src/estufa_iot.ino`](src/estufa_iot.ino).

A lógica realiza a conversão da tensão lida no sensor TMP36 para graus Celsius e comanda as portas digitais com estruturas condicionais `if/else`.

---

## 🚀 Como Executar o Projeto

1. Acesse o simulador [Tinkercad](https://www.tinkercad.com/).
2. Monte o circuito conforme o esquema apresentado na seção de componentes.
3. Copie o código presente em `src/estufa_iot.ino` e cole na aba de código (modo Texto).
4. Clique em **Iniciar Simulação**.
5. Abra o **Monitor Serial** e clique sobre o sensor TMP36 para variar a temperatura e visualizar o acionamento dos atuadores.

---

## 👤 Autor
Mr Jeffrey

Desenvolvido por **[Seu Nome Aqui]**  
- LinkedIn: [Seu Perfil](https://www.linkedin.com)
- GitHub: [@seu-usuario](https://github.com)
