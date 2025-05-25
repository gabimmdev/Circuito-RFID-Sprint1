[![Typing SVG](https://readme-typing-svg.herokuapp.com/?color=3CB371&size=35&center=true&vCenter=true&width=1000&lines=+Sprint1+-+Sistema+de+pátio+com+Arduino+e+App+Mobile+)](https://git.io/typing-svg)


Este repositório apresenta a solução desenvolvida para o **Challenge Sprint 1**, integrando um aplicativo mobile com a simulação de um circuito físico no Tinkercad. O objetivo é controlar o fluxo de entrada e saída de motos em um pátio, com funcionalidades tanto no app quanto na lógica embarcada do Arduino. <br>
Nessa sprint não foi implementado o circuito no App mobile e sim, uma simulação do resultado. A implementação será feita na próxima sprint!


### 🔗 Link para simulação no Tinkercad

👉 [Acessar circuito no Tinkercad](https://www.tinkercad.com/things/dBk2te2Rpgu-challenge-sprint-1?sharecode=xzDfQHQLuNq-XuK_96t6nwzJorCGCsKm9vlqR_vDLx0)


### 🗂️ Estrutura do Projeto (Mobile)

| Caminho                    | Descrição                                            |
|---------------------------|------------------------------------------------------|
| `src/components/`         | Componentes reutilizáveis                            |
| `src/screens/`            | Telas da aplicação (Login, Cadastro, Home, etc.)     |
| `src/services/`           | Comunicação com a API backend em Java                |
| `src/storage/`            | Manipulação de dados locais com AsyncStorage         |
| `src/utils/`              | Validações, máscaras e funções auxiliares            |
| `src/App.tsx`             | Ponto de entrada da aplicação                        |
| `assets/`                 | Imagens, logos e ícones usados no app                |
| `app.json`                | Configurações do projeto Expo                        |
| `package.json`            | Dependências e scripts do projeto                    |


### 🛠️ Tecnologias Utilizadas

### 📱 Mobile (Frontend)
- React Native + Expo
- TypeScript
- React Navigation
- AsyncStorage

### 🔌 Hardware (Simulado)
- Arduino UNO no Tinkercad
- LEDs (vermelho e verde)
- Botões (entrada e saída)
- Buzzer


### ▶️ Como Executar o Projeto Mobile

1. Clone o repositório:
```bash
git clone https://github.com/seu-usuario/mottu-patio-app.git
cd mottu-patio-app
```
2. Instale as dependências:
```bash
npm install
```
3. Execute com Expo:
```bash
npx expo start
```
4. Escaneie o QR Code com o app Expo Go no celular.


### 📸 Demonstrações
👉 [Acessar vídeo]()
