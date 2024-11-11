![](https://github.com/SteveJustin1963/tec-BRAIN/blob/master/pics/jelly-brain.png) ![image](https://github.com/user-attachments/assets/ef697a15-2fd5-4998-b684-a706c5836a2a)
![image](https://github.com/user-attachments/assets/bd599212-a03d-47c2-bf62-7cb53c18909e) ![image](https://github.com/user-attachments/assets/b4fb3921-aa3f-4346-b37b-b75451d935dc)


 

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



## **code outline** 
for simplifying complex input signals and generating/classifying repeating patterns, structured to be adaptable across different platforms (e.g., MINT, Python, Forth):

---

### **Code Outline**

#### **1. Initialization**
- **Setup Environment**
  - Define global variables and constants for signal parameters (e.g., input range, sampling rate).
  - Initialize hardware interfaces (e.g., ADC, piezo disks, sensors).

```plaintext
DEFINE input_channels = 8   // Number of input sources
DEFINE sample_rate = 1000   // Samples per second
DEFINE signal_length = 256  // Length of each signal sample window
DEFINE output_nodes = 16    // Number of classification nodes
```

#### **2. Input Signal Acquisition**
- **Read Input Data**
  - Collect raw signals from input devices (vision, sound, tactile, EEG).
  - Store the data into a buffer for processing.

```plaintext
FOR channel = 1 TO input_channels
    raw_signal[channel] = READ_ADC(channel, signal_length)
END FOR
```

#### **3. Preprocessing**
- **Normalize Signals**
  - Scale raw input to a common range (e.g., `0` to `1`).
  - Apply noise reduction filters if necessary.

```plaintext
FOR i = 1 TO signal_length
    normalized_signal[i] = (raw_signal[i] - MIN_VALUE) / (MAX_VALUE - MIN_VALUE)
END FOR
```

#### **4. Feature Extraction**
- **Transform Input Data**
  - Use signal processing techniques like FFT (Fast Fourier Transform) or wavelet transforms to extract features.
  - Identify repeating patterns, peaks, or frequency components.

```plaintext
features = FFT(normalized_signal)
repeating_patterns = FIND_PEAKS(features, threshold=0.1)
```

#### **5. Reservoir Simulation**
- **Generate Nodes and Antinodes**
  - Feed transformed data into a "reservoir" simulation.
  - Create patterns of nodes/antinodes representing simplified data.

```plaintext
reservoir_state = INIT_RESERVOIR(output_nodes)
FOR each_sample IN repeating_patterns
    reservoir_state = UPDATE_RESERVOIR(reservoir_state, each_sample)
END FOR
```

#### **6. Pattern Classification**
- **Match Patterns**
  - Compare the reservoir state against predefined or dynamically updated hash tables.
  - Classify the simplified signal into one of the output categories.

```plaintext
classification = MATCH_TO_HASH_TABLE(reservoir_state, hash_table)
```

#### **7. Output Results**
- **Return Classified Data**
  - Trigger corresponding output actions based on the classification result.
  - Log or display the result for analysis.

```plaintext
TRIGGER_OUTPUT(classification)
LOG(classification, timestamp)
```

#### **8. Feedback and Adaptation**
- **Dynamic Adjustment**
  - Adjust reservoir weights or hash table thresholds to improve future classifications.
  - Allow adaptive learning mechanisms if required.

```plaintext
IF misclassification THEN
    ADJUST_HASH_TABLE(reservoir_state, correct_label)
END IF
```

---

### **Detailed Code Functions**

1. **`READ_ADC(channel, length)`**
   - Reads raw signal data from the ADC for a specific channel.

2. **`FIND_PEAKS(features, threshold)`**
   - Identifies significant peaks in the signal features above a given threshold.

3. **`INIT_RESERVOIR(output_nodes)`**
   - Initializes a simplified reservoir structure with randomly assigned weights.

4. **`UPDATE_RESERVOIR(reservoir_state, input_sample)`**
   - Updates the reservoir's state based on the input sample.

5. **`MATCH_TO_HASH_TABLE(reservoir_state, hash_table)`**
   - Matches the current reservoir state to a hash table of pre-classified patterns.

6. **`TRIGGER_OUTPUT(classification)`**
   - Triggers specific actions (e.g., display, sound, movement) based on the classification.

7. **`ADJUST_HASH_TABLE(reservoir_state, correct_label)`**
   - Updates the hash table with corrected data for future accuracy.

---



### Signal Reservoir Classifier (SRC)

1. Ensure the **hash table** contains diverse patterns for classification.
2. Improve the **reservoir update logic** to respond meaningfully to input variations.
3. Verify the input signals have enough variability to trigger different classifications.

Here's a breakdown of the mathematical steps in the code:

### Initialization Steps:
1. **Hash Table Creation:**
   - \( \text{hash\_table} = \text{rand}(n, n) \cdot \text{linspace}(0.1, 1, n)^T \)
   - Generates a matrix with random values scaled by a linear gradient.

### Main Program Steps (Iterated for Each Channel):
1. **Raw Signal Generation:**
   - \( \text{raw\_signal}(t) = \sin(2\pi t \cdot 0.01 \cdot \text{channel}) + \text{noise} \)
   - Creates a sine wave with added random noise.

2. **Normalization:**
   - \( \text{normalized\_signal} = \frac{\text{raw\_signal} - \min(\text{raw\_signal})}{\max(\text{raw\_signal}) - \min(\text{raw\_signal})} \cdot (\text{max\_value} - \text{min\_value}) + \text{min\_value} \)
   - Rescales the signal to the range \([ \text{min\_value}, \text{max\_value} ]\).

3. **Feature Extraction (FFT):**
   - \( \text{features} = |\text{FFT}(\text{normalized\_signal})| \)
   - Takes the magnitude of the Fourier transform of the normalized signal.
   - Uses only positive frequency components: \( \text{features} = \text{features}(1:\lfloor n/2 \rfloor) \).

4. **Peak Detection:**
   - \( \text{peaks} = \{ x \in \text{features} \mid x > \text{threshold} \} \)
   - Identifies features that exceed the threshold.

5. **Reservoir Initialization:**
   - \( \text{reservoir\_state} = \text{rand}(n, 1) \cdot 0.5 \)
   - Initializes the reservoir state with random values scaled down by 0.5.

6. **Reservoir Update:**
   - \( \text{reservoir\_state} = \tanh(\text{weights} \cdot \text{input\_sample} + \text{reservoir\_state}) \)
   - Applies a non-linear update using the hyperbolic tangent function, weighted input, and the current state.

7. **Classification Using Hash Table:**
   - \( \text{distances} = \sum (\text{hash\_table} - \text{reservoir\_state}')^2 \)
   - Computes Euclidean distance between reservoir state and each entry in the hash table.
   - \( \text{classification} = \arg\min(\text{distances}) \)
   - Finds the hash table entry closest to the reservoir state.

8. **Output Action:**
   - Triggers an output or action based on the classification result.




```octave
% Initialization
input_channels = 8;       % Number of input sources
sample_rate = 1000;       % Samples per second
signal_length = 256;      % Length of each signal sample window
output_nodes = 16;        % Number of classification nodes
min_value = 0;            % Minimum value for normalization
max_value = 1;            % Maximum value for normalization

% Define a meaningful hash table with diverse patterns
hash_table = rand(output_nodes, output_nodes) .* linspace(0.1, 1, output_nodes)'; 

% Function to simulate ADC data acquisition
function raw_signal = read_adc(channel, signal_length)
    raw_signal = sin(2 * pi * (1:signal_length) * (0.01 * channel)) + rand(1, signal_length) * 0.1; % Sine + noise
end

% Normalize signals to range [0, 1]
function normalized_signal = normalize_signal(raw_signal, min_value, max_value)
    normalized_signal = (raw_signal - min(raw_signal)) / (max(raw_signal) - min(raw_signal));
    normalized_signal = min_value + (normalized_signal * (max_value - min_value));
end

% Perform FFT for feature extraction
function features = extract_features(normalized_signal)
    features = abs(fft(normalized_signal)); % Take magnitude of FFT
    features = features(1:floor(end/2));    % Use only the positive frequency components
end

% Find significant peaks in features
function peaks = find_peaks(features, threshold)
    peaks = features(features > threshold); % Identify values above threshold
    if isempty(peaks)
        peaks = [0]; % Ensure there is always some input for reservoir
    end
end

% Initialize reservoir with random weights
function reservoir_state = init_reservoir(output_nodes)
    reservoir_state = rand(output_nodes, 1) * 0.5; % Random initial state scaled down
end

% Update reservoir based on input sample
function reservoir_state = update_reservoir(reservoir_state, input_sample)
    weights = rand(length(reservoir_state), 1) * 0.3; % Weights with controlled variability
    reservoir_state = tanh(weights .* input_sample + reservoir_state); % Non-linear update
end

% Match reservoir state to hash table
function classification = match_to_hash_table(reservoir_state, hash_table)
    distances = sum((hash_table - reservoir_state').^2, 2); % Compute distances
    [~, classification] = min(distances); % Find closest match
end

% Simulate trigger of output actions
function trigger_output(classification)
    printf("Classification Result: %d\n", classification);
end

% Main program
for channel = 1:input_channels
    % Step 1: Read raw signal
    raw_signal = read_adc(channel, signal_length);
    
    % Step 2: Normalize signal
    normalized_signal = normalize_signal(raw_signal, min_value, max_value);
    
    % Step 3: Extract features
    features = extract_features(normalized_signal);
    
    % Step 4: Identify repeating patterns
    threshold = 0.05; % Define a lower peak detection threshold
    repeating_patterns = find_peaks(features, threshold);
    
    % Step 5: Initialize and update reservoir
    reservoir_state = init_reservoir(output_nodes);
    for i = 1:length(repeating_patterns)
        reservoir_state = update_reservoir(reservoir_state, repeating_patterns(i));
    end
    
    % Step 6: Classify the reservoir state
    classification = match_to_hash_table(reservoir_state, hash_table);
    
    % Step 7: Output results
    trigger_output(classification);
end
```

### **Key Improvements**
1. **Input Signal Variability**:
   - Signals now include a sine wave combined with random noise, creating more distinct patterns.

2. **Meaningful Hash Table**:
   - The hash table is initialized with a gradient of diverse patterns, ensuring distinct classifications.

3. **Reservoir State Update**:
   - The update logic is fine-tuned to scale weights and input samples, making the reservoir more responsive to changes.

4. **Peak Detection**:
   - The threshold is lowered to ensure at least some peaks are detected, even for low-amplitude signals.

### **Expected Output**
Running this program should now produce more `varied` and meaningful classification results based on the input channel and signal characteristics. If all signals are too similar, you might need to increase variability in `read_adc`.
```
Output
Classification Result: 9
Classification Result: 9
Classification Result: 10
Classification Result: 9
Classification Result: 9
Classification Result: 9
Classification Result: 10
Classification Result: 10


Output
Classification Result: 9
Classification Result: 14
Classification Result: 14
Classification Result: 14
Classification Result: 14
Classification Result: 9
Classification Result: 11
Classification Result: 14

Output
Classification Result: 10
Classification Result: 13
Classification Result: 13
Classification Result: 13
Classification Result: 13
Classification Result: 10
Classification Result: 13
Classification Result: 13

etc

```

///
This code is an implementation of a **reservoir computing-inspired system** to simplify complex input signals, extract patterns, and classify them into predefined categories. Here’s a breakdown of what each part of the code accomplishes:

---

### **1. Initialization**
- The code defines key parameters:
  - **Input channels**: Simulates multiple input sources.
  - **Signal length**: Determines the number of data points in each input signal.
  - **Output nodes**: Represents the classification categories.
- A **hash table** is initialized with random patterns to represent target classifications.

---

### **2. Input Signal Acquisition**
- **`read_adc`** simulates signal acquisition for each channel:
  - A sine wave with noise models realistic input data.
  - Each channel generates a distinct pattern by varying the frequency of the sine wave.

---

### **3. Preprocessing**
- **Normalization** ensures that all raw signals are scaled to a consistent range (`0` to `1`):
  - Removes bias from differences in amplitude between signals.

---

### **4. Feature Extraction**
- **FFT (Fast Fourier Transform)** is applied to the normalized signal:
  - Converts the time-domain signal into its frequency-domain representation.
  - Only the positive frequency components are retained.

---

### **5. Pattern Identification**
- **Peak detection** identifies the most significant frequency components:
  - Thresholding filters out weak features, keeping only prominent ones.
  - Ensures that the reservoir focuses on meaningful patterns.

---

### **6. Reservoir Simulation**
- The **reservoir**:
  - Represents a high-dimensional dynamical system that transforms input patterns into a new state.
  - Initialized with random weights.
  - Updated iteratively based on the detected patterns.
- **Tanh activation** introduces non-linearity to ensure the reservoir state is sensitive to input changes.

---

### **7. Classification**
- The **hash table**:
  - Stores predefined patterns (one for each classification category).
- The reservoir state is compared to these patterns using a distance metric (sum of squared differences).
- The closest match determines the classification.

---

### **8. Output Results**
- The classified category (e.g., `1, 2, 3`) is printed to the console as the **result**.
- Each channel's unique input leads to potentially different classifications.

---

### **Key Features and Accomplishments**
1. **Simulates Complex Input**:
   - Generates signals that resemble real-world inputs (e.g., vision, sound, tactile).
   - Adds variability (sine wave + noise) to reflect dynamic inputs.

2. **Feature Simplification**:
   - Reduces the signal’s complexity by focusing on prominent frequency components.

3. **Reservoir Dynamics**:
   - Maps simplified input patterns to a transformed high-dimensional state, enabling better separation of patterns.

4. **Classification System**:
   - Compares reservoir states to predefined categories, allowing input signals to be meaningfully classified.

---

### **Example in Action**
Let’s say you have 3 input channels with varying frequencies:
- **Channel 1**: Low frequency.
- **Channel 2**: Medium frequency.
- **Channel 3**: High frequency.

The code:
- Processes each channel’s signal.
- Extracts their dominant features (frequency peaks).
- Updates the reservoir state based on these features.
- Matches the final state to the closest category in the hash table.

This leads to different classification results for each channel, assuming sufficient variability in the input signals and hash table patterns.

///

### hybrid approach
an ASCII map combining one SRC per SAM and a centralized integration SRC.

```
          [ Sensors ]
    (Vision | Tactile | Sound)
         |      |         |
   +------+  +------+  +------+
   | SAM  |  | SAM  |  | SAM  |   <- Signal Acquisition Modules
   +------+  +------+  +------+
         |      |         |
         +------+---------+
                |
   +------------+------------+
   |   Primary SRCs (Local)  |   <- Individual SRC for each sensor group
   |  (Vision | Tactile | Sound) |
   +------------+------------+
                |
         +------+--------+
         |  Centralized  |       <- Central Integration SRC
         |      SRC       |
         | (Holistic Decision) |
         +------+--------+
                |
         +------+--------+
         |      AEM       |       <- Action Execution Module
         | (Control Outputs) |
         +------+--------+
                |
   +------------+------------+
   |                        |
+------+                +----------+
| LEDs |                | Actuators|    <- Outputs (Eyes, Arms, Legs, etc.)
|Mouth |                |  (Motors)|
+------+                +----------+

(Optional Feedback Loop)
         ^
         |
         +-------------------+
         |        FLM        |       <- Feedback and Learning Module
         |  (Adaptive Learning) |
         +-------------------+
```

---

### **Explanation of Components**

1. **Sensors**:
   - Collect raw input signals (e.g., vision, tactile, sound).
   - Connect directly to individual **SAMs**.

2. **SAMs (Signal Acquisition Modules)**:
   - Preprocess raw signals and send them to the corresponding **Primary SRC**.
   - Examples:
     - Vision sensors feed a vision-specific **SAM**.
     - Sound sensors feed a sound-specific **SAM**.

3. **Primary SRCs**:
   - Each sensor group (vision, tactile, sound) has its own specialized **SRC** for pattern recognition and local classification.

4. **Centralized SRC**:
   - Integrates outputs from all primary SRCs.
   - Makes holistic decisions based on combined sensor data.
   - Example:
     - Combines "Obstacle Detected" (vision) with "Touch Detected" (tactile) to decide an appropriate response.

5. **AEM (Action Execution Module)**:
   - Uses the classification results from the centralized SRC to trigger actions.
   - Controls:
     - Outputs like LEDs or speech synthesis.
     - Physical movements via actuators (arms, legs, head).

6. **FLM (Feedback and Learning Module)** *(Optional)*:
   - Refines system performance using feedback from the environment or user.
   - Example:
     - Adjusts the vision SRC’s pattern recognition threshold if lighting conditions change.

---

### **Why the Hybrid Design?**
- **Efficiency**:
  - Offloads initial processing to the primary SRCs.
  - Keeps the centralized SRC focused on high-level decisions.
- **Scalability**:
  - New sensors can be added by attaching an additional SAM and primary SRC.
- **Holistic Decision-Making**:
  - Combines data across all sensors for context-aware actions. 

This design offers a balance between distributed and centralized processing, making it ideal for complex systems like humanoid robots.
