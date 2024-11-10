# tec-BRAIN

This is a very difficult and ambitious project that will take much iteration to work. It will be more like research than a project for a while.


![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/steps.png)

- The project aims to utilize a simplified version of reservoir computing 
  - to process complex input signals such as
    - vision, sight, tactile, mind
  - and generate a repeating pattern that can be collected and analyzed by sensors.

- Various mediums, such as
  - wobbly objects and vibrating water, will be tested to achieve this goal.
- The repeating pattern expands into nodes and antinodes over different positions
  - simplifying the complex input signal
  - and making it easier for hardware and software methods to recognize and classify.

- A piezo disk will be used to transmit the signals into the medium,
- but alternative options may be considered if the resonant frequency interferes.
- The goal is to achieve standing waves that can be collected by receiver piezo disks.
- The project will use
  - custom-made transmit and receive circuits,
  - an 8-port ADC will be used to run the 8 receivers.
  - The use of Mint code and pattern regression will be employed to
    - classify the signals into hash tables that represent the sample data.
    - The sample time will be kept short to avoid overloading the system.
    - The use of AP9511 may assist in the mathematical work.

### maths 
- The math behind reservoir computing is based on
  - the theory of dynamical systems
  - and machine learning.
- It involves the use of
  - a fixed, high-dimensional recurrent neural network called a "reservoir"
  - that is trained to output a simplified version of the input signal.
  - This is done by adjusting the weights of the connections between the neurons in the reservoir,
  - which are chosen randomly at the beginning.
- The output of the reservoir is then used as
  - the input to a simple readout layer
  - that is trained to generate a repeating pattern.
  - The readout layer can be trained using methods such as
    - linear regression
    - ridge regression


### Input sources
- Vision
  - 8x8 bit ADNS2620 vision chip
  - found in the common optical mouse
  - https://github.com/SteveJustin1963/tec-EYE
- Sound
  - https://github.com/SteveJustin1963/tec-EAR
- Tactile
  - https://github.com/SteveJustin1963/tec-TILE
- Mind
  - Voice commands
  - EEG (Electroencephalography) https://github.com/SteveJustin1963/tec-LACE

## Outputs
Classified inputs then modify the main loop to activate actions 
- Speech
  - SPO256
  - https://github.com/SteveJustin1963/tec-SPEECH
- Display
  - 8x8 LED matrix to make emoji shapes
  - or a mouth or eye animated image
  - https://github.com/SteveJustin1963/tec-8x8
- Movement
  - animatronic head with eyes, ears and mouth parts
  - https://github.com/SteveJustin1963/tec-FACE
  - Arms
    - https://github.com/SteveJustin1963/tec-ROBOT-ARM
   
  
### Circuits
- https://github.com/SteveJustin1963/tec-ADC-DAC
- https://easyeda.com/editor#id=ce6bdd0998024d589a624073c00b3b42|cf174ef8df6648e4804a04970f2bdf42
- https://easyeda.com/editor#id=8672ed23f7734ee4bfaa27882990acbf|6ef58b1dda594797a48eb9d62c0d53f2




