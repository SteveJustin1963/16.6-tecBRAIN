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
 

 

### Steps to Build the **tec-BRAIN**

#### **Phase 1: Research and Concept Development**
1. Define the project goals:
   - Simplify complex input signals.
   - Generate and classify repeating patterns.
2. Research **reservoir computing**:
   - Understand dynamical systems theory and neural networks.
   - Explore methods for simplifying input signals.
3. Identify and procure components:
   - Input sources (vision, sound, tactile, EEG).
   - Output devices (speech synthesizer, LED matrix, animatronic parts).
   - ADC, piezo disks, and custom circuitry.

---

#### **Phase 2: Medium and Signal Experimentation**
4. Experiment with mediums:
   - Test vibrating water, elastic objects, or other resonant materials.
5. Inject signals into the medium:
   - Use a piezo disk or alternative transmitters.
6. Analyze medium behavior:
   - Observe formation of standing waves (nodes and antinodes).
   - Refine the signal input to optimize wave patterns.

---

#### **Phase 3: Signal Reception and Classification**
7. Design the receiving system:
   - Use multiple piezo disks to capture standing waves.
   - Connect them to an **8-port ADC** for signal processing.
8. Develop signal classification:
   - Write **Mint code** for pattern regression.
   - Use hash tables to store and recognize classified patterns.
9. Integrate the **AP9511 chip**:
   - Perform advanced mathematical operations efficiently.

---

#### **Phase 4: Input Source Integration**
10. Implement input devices:
    - **Vision**: Integrate the ADNS2620 chip.
    - **Sound**: Configure microphones or sound sensors.
    - **Tactile**: Use pressure or touch-sensitive sensors.
    - **Mind**: Integrate EEG or voice command modules.
11. Test input data flow:
    - Ensure proper signal transmission to the medium.

---

#### **Phase 5: Output Development**
12. Program output systems:
    - **Speech**: Interface with the SP0256 synthesizer.
    - **Display**: Animate the 8x8 LED matrix.
    - **Movement**: Control animatronic components (head, arms).
13. Create feedback loops:
    - Allow classified signals to modify outputs dynamically.

---

#### **Phase 6: Circuit Design and Optimization**
14. Build custom circuits:
    - Transmit and receive circuits for piezo disks.
    - ADC integration for signal capture.
15. Test and refine circuits:
    - Address frequency interference and optimize signal clarity.

---

#### **Phase 7: System Integration**
16. Connect all components:
    - Link input sources, medium, receiving system, and output devices.
17. Develop main loop logic:
    - Process classified signals to trigger actions.
    - Implement real-time feedback for adaptive behavior.

---

#### **Phase 8: Testing and Iteration**
18. Test the full system:
    - Ensure inputs generate meaningful patterns.
    - Verify outputs correspond to classified signals.
19. Refine based on results:
    - Adjust inputs, mediums, or algorithms for better performance.
20. Document findings and improve:
    - Record experimental data and refine design iteratively.

---

#### **Phase 9: Advanced Features**
21. Introduce learning capabilities:
    - Incorporate dynamic adjustments to the reservoir or output layers.
22. Explore additional mediums or input sources:
    - Experiment with novel ways to expand functionality.

---

#### **Phase 10: Finalization**
23. Optimize for stability and efficiency:
    - Ensure all components operate smoothly together.
24. Package and document:
    - Create a cohesive design and detailed documentation for the system.




 
