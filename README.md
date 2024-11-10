![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/steps.png)

# **tec-BRAIN Project Overview**

The **tec-BRAIN** project is an ambitious and experimental endeavor aiming to explore a simplified approach to **reservoir computing**. Given its complexity, the project will initially focus on research and iterative development.

---

## **Concept and Goals**

### **Primary Objective**
To process complex input signals—such as **vision**, **sound**, **tactile**, and **mental commands**—and generate **repeating patterns** for classification and analysis.  

### **Methodology**
- Utilize mediums like **vibrating water** and **elastic objects** to explore standing waves.
- Use **nodes and antinodes** to simplify and structure input signals, enabling easier recognition and classification by hardware and software systems.

---

### **Planned Approach**
1. **Signal Transmission**
   - A **piezo disk** will be used to inject signals into the medium.
   - Alternative transmitters may be explored to mitigate frequency interference.

2. **Signal Reception**
   - Standing waves will be captured using **receiver piezo disks**.
   - Signals will pass through:
     - Custom-built **transmit and receive circuits**.
     - An **8-port ADC** for capturing data from eight receivers.

3. **Data Processing**
   - Use **Mint code** for regression and classification of patterns into hash tables.
   - Leverage the **AP9511 chip** for advanced mathematical processing.
   - Keep sampling periods brief to avoid system overload.

---

## **Technical Foundations**

### **Mathematics of Reservoir Computing**
- Based on **dynamical systems theory** and **machine learning**:
  - A high-dimensional **recurrent neural network** (reservoir) processes input signals.
  - The reservoir’s connections are initialized randomly and remain fixed.
  - A simple **readout layer** maps the reservoir’s output to a repeating pattern.
    - Methods like **linear regression** and **ridge regression** are used for training.

---

## **Input Sources**
1. **Vision**
   - Utilize the **ADNS2620 vision chip** (commonly found in optical mice).
   - Repository: [tec-EYE](https://github.com/SteveJustin1963/tec-EYE)

2. **Sound**
   - Repository: [tec-EAR](https://github.com/SteveJustin1963/tec-EAR)

3. **Tactile**
   - Repository: [tec-TILE](https://github.com/SteveJustin1963/tec-TILE)

4. **Mind**
   - Input via **voice commands** and **EEG (Electroencephalography)**.
   - Repository: [tec-LACE](https://github.com/SteveJustin1963/tec-LACE)

---

## **Output Systems**
Classified input signals will trigger corresponding actions, such as:

1. **Speech**
   - Use the **SP0256 speech synthesizer**.
   - Repository: [tec-SPEECH](https://github.com/SteveJustin1963/tec-SPEECH)

2. **Display**
   - Generate animated images (e.g., emojis, mouths, or eyes) on an **8x8 LED matrix**.
   - Repository: [tec-8x8](https://github.com/SteveJustin1963/tec-8x8)

3. **Movement**
   - **Animatronics** (e.g., head with movable eyes, ears, and mouth).
     - Repository: [tec-FACE](https://github.com/SteveJustin1963/tec-FACE)
   - **Robotic arms**:
     - Repository: [tec-ROBOT-ARM](https://github.com/SteveJustin1963/tec-ROBOT-ARM)

---

## **Circuit References**
- [tec-ADC-DAC Circuit](https://github.com/SteveJustin1963/tec-ADC-DAC)
- EasyEDA Designs:
  - [Design 1](https://easyeda.com/editor#id=ce6bdd0998024d589a624073c00b3b42|cf174ef8df6648e4804a04970f2bdf42)
  - [Design 2](https://easyeda.com/editor#id=8672ed23f7734ee4bfaa27882990acbf|6ef58b1dda594797a48eb9d62c0d53f2)

---
 
