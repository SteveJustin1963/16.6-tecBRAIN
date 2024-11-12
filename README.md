# ACOUSTIC PATTERN RECOGNIZER (APR)
## Project Documentation v1.0

### PROJECT OVERVIEW
A wooden cigar box-based acoustic computing device that detects, visualizes, and reinforces wave patterns using piezo sensors, feedback, and LED display.

## 1. HARDWARE COMPONENTS

### Core Components
1. **Enclosure**
   - Cedar cigar box (~20x15x5cm)
   - Thin walls (3-6mm ideal)
   - Removable/hinged lid
   - 4x rubber feet for isolation

2. **Sensors/Actuators**
   - 1x 35mm piezo disk (input)
   - 2x 20mm piezo disks (sensors)
   - 1x 35mm piezo disk (feedback)
   - 8x8 RGB LED Matrix
   - MAX7219 LED driver

3. **Processing/Power**
   - Arduino Nano
   - 2x LM358 dual op-amps
   - 7805 5V regulator
   - 9V battery + holder
   - Perfboard/protoboard
   - Female headers for Arduino

4. **Passive Components**
   - Resistors:
     - 4x 100kΩ
     - 2x 1MΩ
     - 2x 4.7kΩ
     - 2x 10kΩ
   - Capacitors:
     - 2x 0.1µF
     - 2x 10µF
     - 1x 100µF
   - Wire (solid & stranded)
   - Pin headers
   - Hot glue or epoxy

## 2. CIRCUIT DESIGNS

### Power Supply
```
9V Battery → [100µF] → 7805 → [10µF] → 5V Out
     └→ Direct to Op-Amps for ±9V
```

### Input Stage
```
Input Piezo → [100kΩ] → [+] LM358
                        [-] → GND
                         └→ Arduino A0
```

### Sensor Stages
```
Sensor 1 → [1MΩ] → [+] LM358
                    [-] → GND
                     └→ Arduino A1

Sensor 2 → [1MΩ] → [+] LM358
                    [-] → GND
                     └→ Arduino A2
```

### Feedback Stage
```
Arduino D9 → [4.7kΩ] → [10µF] → [10kΩ] → Feedback Piezo
                              └→ [100kΩ] → GND
```

## 3. SOFTWARE ARCHITECTURE

### Main Program Structure
```cpp
// Libraries
#include <LedControl.h>

// Pin Definitions
#define INPUT_PIN A0
#define SENSOR1_PIN A1
#define SENSOR2_PIN A2
#define FEEDBACK_PIN 9
#define LED_DIN 11
#define LED_CLK 13
#define LED_CS 10

// Constants
const int SAMPLE_RATE = 500;
const int BUFFER_SIZE = 64;
const float THRESHOLD = 0.15;
const float FEEDBACK_LEVEL = 0.7;

// Objects
LedControl lc(LED_DIN, LED_CLK, LED_CS, 1);

// Buffers
float sensorBuffer1[BUFFER_SIZE];
float sensorBuffer2[BUFFER_SIZE];
```

### Core Functions
```cpp
void setup() {
    // Initialize hardware
    initializePins();
    initializeLED();
    Serial.begin(115200);
}

void loop() {
    if (millis() % (1000/SAMPLE_RATE) == 0) {
        sampleSensors();
        processPatterns();
        updateDisplay();
        generateFeedback();
    }
}

void sampleSensors() {
    // Read and store sensor data
    sensorBuffer1[bufferIndex] = analogRead(SENSOR1_PIN);
    sensorBuffer2[bufferIndex] = analogRead(SENSOR2_PIN);
    bufferIndex = (bufferIndex + 1) % BUFFER_SIZE;
}

void processPatterns() {
    float phase = calculatePhase();
    float amplitude = calculateAmplitude();
    currentPattern = determinePattern(phase, amplitude);
}

void generateFeedback() {
    if (currentPattern > 0) {
        int feedback = calculateFeedback();
        analogWrite(FEEDBACK_PIN, feedback);
    }
}
```

## 4. ASSEMBLY INSTRUCTIONS

### Box Preparation
1. Clean box thoroughly
2. Mark component positions
3. Drill required holes:
   - 1mm air hole
   - Wire passages
   - LED matrix mount
4. Install rubber feet

### Component Mounting
1. Mount input piezo (center bottom)
2. Mount sensor piezos (side walls)
3. Mount feedback piezo (top wall)
4. Install LED matrix in lid
5. Mount circuit board
6. Install battery holder

### Circuit Assembly
1. Build power supply section
2. Add input amplifier
3. Add sensor amplifiers
4. Add feedback circuit
5. Test all sections before connecting

## 5. CALIBRATION PROCEDURE

### Initial Setup
1. Power test (check voltages)
2. Individual sensor tests
3. LED matrix test
4. Input response test

### Pattern Tuning
1. Set sensitivity threshold
2. Adjust amplifier gains
3. Find resonant frequencies
4. Set feedback levels
5. Calibrate pattern detection

## 6. OPERATION MODES

### Basic Mode
- Simple pattern detection
- Direct LED visualization
- No feedback

### Feedback Mode
- Pattern reinforcement
- Sustained resonance
- Full visualization

### Analysis Mode
- Serial output of data
- Pattern classification
- Performance metrics

## 7. TROUBLESHOOTING

### Common Issues
1. No sensor response
   - Check connections
   - Verify power
   - Test amplifier output

2. Unstable feedback
   - Reduce gain
   - Check mounting
   - Adjust delays

3. Poor pattern detection
   - Recalibrate thresholds
   - Check sensor positions
   - Verify timing

## 8. FUTURE ENHANCEMENTS

### Possible Upgrades
1. More sensors
2. Digital filtering
3. Machine learning
4. Network connectivity
5. Pattern memory
6. User interface

## 9. THEORY OF OPERATION

### Basic Principles
1. Acoustic waves in box
2. Standing wave formation
3. Pattern reinforcement
4. Signal processing
5. Visual mapping

Would you like me to:
1. Expand any section?
2. Add more circuit details?
3. Include more code examples?
4. Add debugging procedures?

This document covers the complete project but can be expanded in any area you need!
