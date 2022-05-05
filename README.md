# tec-BRAIN

This is a very difficult and ambitious project that will take many iterations to work. It will be more tike research than a project for a while.


![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/res1.png)
![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/steps.png)



The goal is to use Reservoir Computing to simplify the processing of spreading out a complex input signal pattern. This allows the expansion of the inputs into more dimensions where simple pattern recognition techniques are applied, in hardware and/or software. It is analogous to a RC or LC matrix, each node resonating and storing a part of the overall signal energy.

## Reservoir Computing

Reservoir computing is a computational paradigm that performs information processing using a dynamical system called a reservoir. The basic idea is to use a fixed (but usually high-dimensional and nonlinear) dynamical system as a computational substrate. The system’s dynamics are usually excited by input data, and the system’s current state is read out to perform a task such as pattern recognition, classification, and prediction.

The term “reservoir computing” was coined in 2001 by Jürgen Schmidhuber and Sepp Hochreiter, who applied it to a special type of recurrent neural network called an echo state network.



## Echo state network

An echo state network (ESN) is a recurrent neural network with a “reservoir” of recurrently connected neurons. The state of the reservoir at each time step is read out and used to generate the network output. The reservoir is usually “initialized” by setting the states of the neurons to small random values, and the recurrent connections are typically “trained” by adjusting the connection weights so that the ESN performs a desired task, such as pattern recognition or prediction.

ESNs have been found to be competitive with, or even superior to, traditional recurrent neural networks for a variety of tasks. They are also much simpler to train, since the only “training” required is to adjust the recurrent connection weights; the states of the reservoir neurons are usually set to small random values and are not updated during training.

The term “echo state network” was coined by Jaeger in 2001.

## Liquid state machine

A liquid state machine (LSM) is a recurrent neural network with a “reservoir” of spiking neurons. The state of the reservoir at each time step is read out and used to generate the network output. The reservoir is usually “initialized” by setting the membrane potentials of the neurons to small random values, and the recurrent connections are typically “trained” by adjusting the connection weights so that the LSM performs a desired task, such as pattern recognition or prediction.

LSMs have been found to be competitive with, or even superior to, traditional recurrent neural networks for a variety of tasks. They are also much simpler to train, since the only “training” required is to adjust the recurrent connection weights; the membrane potentials of the reservoir neurons are usually set to small random values and are not updated during training.

The term “liquid state machine” was coined by Maass et al. in 2002.

## Gated recurrent unit

A gated recurrent unit (GRU) is a type of recurrent neural network that has been found to be very effective for modeling sequential data, such as text, speech, and time series data. GRUs are similar to Long Short-Term Memory (LSTM) networks, but they are simpler and have fewer parameters.

GRUs have been used to build successful models for a variety of tasks, including machine translation, speech recognition, and time series prediction.

The term “gated recurrent unit” was coined by Cho et al. in 2014.

## Applications

Reservoir computing has been applied to a variety of tasks, including:
- classification
- clustering
- prediction
- control
- forecasting
- modeling
- feature extraction
- pattern recognition
- signal processing
- time series analysis

Reservoir computing has also been used to build successful models for a variety of tasks, including:
- machine translation
- speech recognition
- handwriting recognition
- time series prediction
- image classification
- object recognition
- facial recognition

## Pros and cons

Reservoir computing has a number of advantages over traditional neural networks, including:
- simpler training – only the connection weights need to be trained, not the neuron states
- fewer parameters – since the neuron states are not updated during training, there are fewer parameters to optimize
- more robust – since the neuron states are not updated during training, the network is less likely to overfit the training data
- better generalization – since the network is not “memorizing” the training data, it is more likely to generalize to new data

However, reservoir computing also has a number of disadvantages, including:
- more complex hardware – since the network states are not updated during training, the hardware needs to be able to store and update the states of the neurons
- more data required – since the network states are not updated during training, more data is required to train the network
- longer training time – since the network states are not updated during training, the training process can take longer

## Conclusion

Reservoir computing is a powerful computational paradigm that has been shown to be competitive with, or even superior to, traditional neural networks for a variety of tasks. Reservoir computing is also much simpler to train, since the only “training” required is to adjust the recurrent connection weights; the states of the reservoir neurons are usually set to small random values and are not updated during training.


## Project

The goal of this tec-1 project is to use a simple version of reservoir computing to help process a complex input signal such as sound, sign and rouch and generate a repeating pattern that can be processed by a sensor. I will try a range of mediums; wobbly object like a firm gelly, vibrating water that reflects a light pattern, etc. With experimentation I am looking for something when fed an input signal, it can generate a repeating pattern long enough for sensors to collect and store that data.  The repeating pattern expands into nodes and antinodes over various positions, thus expanding a complex input signal into a more simple recognisable pattern, which are easier for hardware and software methods to analyze. It is analogous to a RC or LC matrix, each node resonating and storing a part of the overall signal energy. A simple learning and classification system can develope from this and stored in a library of recognitions.

I will use a piezo disk to transmit the signals into the medium, but this may be wrong as the resonate frequency may interfere, so tis can be replaced with a range of options. By experimenting i am aiming for standing waves to emerge long enough to be collected by receiver piezo disks. The was a TE project that used these disks to pickup sound through a wall. Experimentation is needed to get the best result. Transmit and receive circuits are custom made. The 8 receivers are run through and 8 port ADC. Mint code then runs pattern regression to classify the signals into hash tables that represent the samples data. Sample time has to be short to not overload the tiny tec-1 system. The use of AP9511 may help in the math work. 


### Input sources
- Vision with 8x8 bit ADNS2620 vision chip found in the common optical mouse https://github.com/SteveJustin1963/tec-EYE
- A microphone https://github.com/SteveJustin1963/tec-EAR
- EEG (Electroencephalography) https://github.com/SteveJustin1963/tec-LACE
- tactile https://github.com/SteveJustin1963/tec-TILE

### Outputs
Classified output expressions can be sent to 
- Speech SPO256 https://github.com/SteveJustin1963/tec-SPEECH
- Display 8x8 LED matrix to make emoji shapes or a mouth or eye animated image https://github.com/SteveJustin1963/tec-8x8
- Move an animatronic head with eyes, ears and mouth parts  https://github.com/SteveJustin1963/tec-FACE

### Circuits
- https://github.com/SteveJustin1963/tec-ADC-DAC
- https://easyeda.com/editor#id=ce6bdd0998024d589a624073c00b3b42|cf174ef8df6648e4804a04970f2bdf42
- https://easyeda.com/editor#id=8672ed23f7734ee4bfaa27882990acbf|6ef58b1dda594797a48eb9d62c0d53f2

### Iterate
- try other RC tanks
- try DOL matrix
- chaos ccts
- cellular automata
- optical loop
- neural / synthetic / organic
- put into https://github.com/SteveJustin1963/tec-BOT

### References
- http://sprott.physics.wisc.edu/pubs/paper352.pdf
- https://www.electroschematics.com/simple-surface-microphone/
- https://www.edn.com/increase-piezoelectric-transducer-acoustic-output-with-a-simple-circuit/
- http://www.datasheetdir.com/Adc0808-adc0809-8-bit-Compatible-Converters-With-8-channel-Analog-Multiplexer+Application-Notes



