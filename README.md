# tec-BRAIN

![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/res1.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/steps.png)

The general goal is to use Reservoir Computing to simplify the processing of spreading out a complex input signal pattern. This allows the expansion of the inputs into more dimensions where simple pattern recognition techniques are applied, in hardware and/or software. It is analogous to a RC or LC matrix, each node resonating and storing a part of the overall signal energy.

The concept of Reservoir Computing in simple terms is to input a signal into a flexible medium so that it can generate a repeating pattern long enough for a sensor to collect data that can be processed by circuit and software. The pattern that is formed will expand into high and low nodes and anit-nodes over various positions, thus expanding a complex input signal into a more simpler recognisable pattern. 

A simple version of this we have seen in school using a vibrating plate with sand sprinkled on top. For simple fixed sinusoidal inputs forms simple geometric patterns, as  the frequency or complexity changes, more complex patterns are derived. 

This effect is taking a complex input and expanding it into more dimensions or nodes etc, which are easier for hardware and software methods to analyse. 

A range of mediums can be used, from simple water in a bucket with light reflection or sophisticated optical fibre loop. We will use firm but wobbly object, in this case a soft silicon ball from Kmart. Later perhaps a brain shaped soft red silicon or gelatine for greater effect.

We mount the TX piezo 5mm above a 100x100x12 MDF from the edges. Then mount the ball atop the piezo just touching it in the middle. We erect a vertical wood 20x200 pole to the side and connect to the of ball. The 8x RX piezo’s are connected over the ball face heavenly spread.

The code will read the 8 RX inputs while the TX is pumping signal into the ball. Code will try to use AI or simple pattern recognition to capture impressions of the vibrations as numeral tables. Sample time will have to be limited. If we can the 9511 maths chip on the tec-APUS will make coding simpler (maybe) 

A simple learning and behavior system will evolve thru more coding. A range of different inputs can be gathered to create a library of recognition.


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

Gerbers; https://github.com/SteveJustin1963/tec-BRAIN/blob/master/docs/Gerber_PCB_Piezo%20TXRX.zip

![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/Schematic_Piezo%20TXRX_2021-07-12-2.png)



