# ACOUSTIC PATTERN RECOGNIZER 2.0
(Enhanced with Reservoir Computing Concepts)

## CORE PRINCIPLES
1. **Signal Processing Chain**
```
Input → Physical Reservoir (Box) → Pattern Detection → Classification → Output/Feedback
      ↑                                                                    |
      └────────────────────────── Feedback Loop ─────────────────────────┘
```

2. **Physical Reservoir Computing**
- The cigar box acts as a physical reservoir computer
- Standing waves create natural pattern transformations
- Multiple sensor points capture wave interactions
- Feedback piezo creates sustained patterns

## HARDWARE MODIFICATIONS

1. **Enhanced Sensor Array**
```
[Top View - Lid Off]
┌─────────────────────┐
│    LED Matrix       │
│  ┌──────────┐       │
│  │ Arduino  │   B   │
│  └──────────┘   A   │
│     P1  P2     T   │
│         FB     T   │
│     P3  P4     E   │
│                R   │
└─────────────────────┘

P1 = Input Piezo (35mm)
P2,P3,P4 = Sensor Piezos (20mm)
FB = Feedback Piezo (35mm)
```

2. **Signal Processing Chain**
```
Piezo Sensors → Pre-amps → ADC → Arduino → Pattern Analysis → LED/Feedback
```

## SOFTWARE ARCHITECTURE

1. **Initialization**
```cpp
// Constants for reservoir behavior
const int SAMPLE_RATE = 500;     // Hz
const int BUFFER_SIZE = 64;      // Samples
const int NUM_SENSORS = 3;       // Sensor count
const float FEEDBACK_LEVEL = 0.7; // Feedback strength

// Pattern storage
float patternBuffer[BUFFER_SIZE][NUM_SENSORS];
float hashTable[16][NUM_SENSORS];  // Pattern classifications
```

2. **Pattern Detection**
```cpp
void processPatterns() {
    // Read all sensors
    for(int i = 0; i < NUM_SENSORS; i++) {
        readings[i] = readSensor(i);
    }
    
    // Extract features
    float features[NUM_SENSORS];
    for(int i = 0; i < NUM_SENSORS; i++) {
        features[i] = extractFeatures(readings[i]);
    }
    
    // Classify pattern
    int pattern = matchPattern(features);
    
    // Generate feedback if pattern found
    if(pattern > 0) {
        generateFeedback(pattern);
        updateDisplay(pattern);
    }
}
```

3. **Feature Extraction**
```cpp
float extractFeatures(float* signal) {
    // Simple peak detection
    float max_val = 0;
    float min_val = 1023;
    
    for(int i = 0; i < BUFFER_SIZE; i++) {
        if(signal[i] > max_val) max_val = signal[i];
        if(signal[i] < min_val) min_val = signal[i];
    }
    
    return (max_val - min_val); // amplitude
}
```

4. **Pattern Classification**
```cpp
int matchPattern(float* features) {
    float minDistance = 1000000;
    int bestMatch = 0;
    
    // Compare with stored patterns
    for(int i = 0; i < 16; i++) {
        float distance = 0;
        for(int j = 0; j < NUM_SENSORS; j++) {
            distance += sq(features[j] - hashTable[i][j]);
        }
        if(distance < minDistance) {
            minDistance = distance;
            bestMatch = i;
        }
    }
    
    return bestMatch;
}
```

## FEEDBACK MECHANISMS

1. **Physical Feedback**
```cpp
void generateFeedback(int pattern) {
    // Convert pattern to frequency
    int freq = patternToFrequency(pattern);
    
    // Generate feedback signal
    for(int i = 0; i < 50; i++) {  // 50ms burst
        analogWrite(FEEDBACK_PIN, 
            sin(2 * PI * freq * i / SAMPLE_RATE) * 
            FEEDBACK_LEVEL);
        delayMicroseconds(1000000/SAMPLE_RATE);
    }
}
```

2. **Pattern Learning**
```cpp
void updateHashTable(float* features, int pattern) {
    // Update stored pattern with new observation
    for(int i = 0; i < NUM_SENSORS; i++) {
        hashTable[pattern][i] = 
            hashTable[pattern][i] * 0.9 + 
            features[i] * 0.1;  // Moving average
    }
}
```

## VISUALIZATION

1. **LED Matrix Patterns**
```cpp
// Pattern to LED mapping
const byte LED_PATTERNS[16][8] = {
    {0x00,0x66,0x66,0x00,0x00,0x66,0x66,0x00}, // Pattern 0
    {0x18,0x3C,0x7E,0xFF,0xFF,0x7E,0x3C,0x18}, // Pattern 1
    // ... more patterns ...
};
```

This enhanced design integrates reservoir computing concepts while keeping the implementation practical. The cigar box itself acts as a physical reservoir, transforming input signals through its acoustic properties, while the feedback system allows for pattern reinforcement and "memory" effects.

 
