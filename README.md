# tec-BRAIN

![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/res1.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/steps.png)

The general goal is to use Reservoir Computing to simplify the processing of spreading out a complex input signal pattern. This allows the expansion of the inputs into more dimensions where simple pattern recognition techniques are applied, in hardware and/or software. Its analogous to a RC or LC matrix, each node resonating and storing a part of the overall signal energy.

The concept of Reservoir Computing, in simple terms is a method to induce an signal echo in a medium, that can settle into a repeating pattern long enough for a circuit to take a data reading and that can be processed by AI circuit or software. The pattern that is formed will expand into high and low points in fixed positions, thus expanding a complex input signal into a more recognisable fixed pattern. A simple version of this we have seen in school using a vibrating plate with sand sprinkled on top. For simple fixed sinusoidal inputs simple geometric patterns form, for complex sounds of short duration more complex fixed patterns can be derived. This effect is taking a complex input and expanding it into more dimensions or nodes etc, which are easier for hardware and software methods of analysis. Early uses for this were short term memory for calculators in a metal coil. This was more about persistence of a signal. What we want is to expand this signal into patterns. A range of mediums can be used, from simple water in a bucket with light reflection right upto optical loops in fibre optics. We will use firm wobbly jelly, like in silicon or edible gelatine. We will use piezoelectric transducers plates to send and read back signals. A gelatin cube is constructed, a piezo is attached to each of the six faces, the base will be the input and the other 5 are outputs. It can be housed in a glass dome to isolate from interference.

The code (asm, forth or basic) will try to use the 9511 maths chip on the tec-APUS addon; to create a simple learning and behavior system. A range of inputs can be gathered from other addons, eg


### Inputs
- Vision with 8x8 bit ADNS2620 vision chip found in the common optical mouse https://github.com/SteveJustin1963/tec-EYE
- A microphone https://github.com/SteveJustin1963/tec-EAR
- EEG (Electroencephalography) https://github.com/SteveJustin1963/tec-LACE
- tactile https://github.com/SteveJustin1963/tec-TILE

### outputs
- Output expressions can be sent to Speech SPO256 https://github.com/SteveJustin1963/tec-SPEECH
- 8x8 LED matrix addon to make emoji shapes or a mouth or eye animated image https://github.com/SteveJustin1963/tec-8x8
- Make a animatronic head that has head movement and incorporates the eyes, ears and mouth parts  https://github.com/SteveJustin1963/tec-FACE
### Both
- ADC, DAC https://github.com/SteveJustin1963/tec-ADC-DAC


### Piezo TX/RX circuit

https://easyeda.com/editor#id=8672ed23f7734ee4bfaa27882990acbf|6ef58b1dda594797a48eb9d62c0d53f2




