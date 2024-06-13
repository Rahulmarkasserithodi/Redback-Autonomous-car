# Redback-Autonomous-car
Building a lane sensing redback autonomous car prototype using Arduino

### Overview

The Redback Autonomous Car project aims to develop an autonomous vehicle capable of navigating a track autonomously. This project involved extensive design, testing, and refinement phases over 8 weeks.

### Project Goals

- **Cost**: Less than $100
- **Weight**: Less than 500g
- **Dimensions**: Less than 250mm in all directions
- **Performance**: Complete 3 laps in under 5 minutes without human intervention

### Features

1. **Model 1**:
   - 4 x rubber medium-sized wheels
   - 1 x 9v battery
   - 1 x battery snap
   - 1 x Arduino Board
   - 2 x motors
   - 2 x phototransistors
   - 2 x white LEDs
   - 3 mm plywood

2. **Model 2 (Final Model)**:
   - 3mm Plywood
   - 1 x Arduino
   - 2 x medium-sized rubber wheels
   - 1 x bearing ball transfer wheel
   - 2 IR sensors
   - 3D printed PLA cover
   - 1 x 11-volt lipo battery
   - 1 x fuse

### Design and Development

#### Challenges and Solutions

- **IR Sensors**: Initial sensors were unreliable under sunlight. Replaced with line tracing IR sensors for better performance.
- **Battery**: Switched from a 9V to an 11V lipo battery to provide sufficient current and maintain speed.
- **Arduino Issues**: Replaced faulty Arduinos to ensure consistent functionality.
- **Fuse Issues**: Resolved short circuit issues by replacing the fuse and securing wires.

#### Manufacturing

- **3D Printed Cover**: Designed to conceal electrical components, with modifications for weight and aesthetic improvements.

### Code

The code was developed to control the vehicle's movement based on sensor input. Key features of the code include:

- **Global Variables**: Define motor and sensor pins and the PWM duty cycle.
- **Initialization Function**: Sets the motor and sensor pins as outputs or inputs and prints the configuration to the serial monitor.
- **Setup Function**: Initializes serial communication and calls the initialization function.
- **Loop Function**: Reads sensor inputs, determines the direction based on sensor values, and controls the motors accordingly. It also prints sensor readings and the current direction to the serial monitor.

### Performance

In the final competition, the vehicle successfully completed 3 laps in 3 minutes and 33 seconds, meeting the project's requirements. Improvements were identified for future development, including optimizing wheel design and enhancing sensor accuracy.

### Recommendations

- **Wheel Design**: Develop lighter and larger radius wheels for improved performance.
- **Sensor Integration**: Add more IR sensors for better positioning accuracy.
- **Code Optimization**: Refine the code to leverage additional sensors and improve speed and precision.

### Cost Breakdown

| Item             | Description                                        | Price per unit | Quantity | Cost ($) |
|------------------|----------------------------------------------------|----------------|----------|----------|
| Wheels           | Plastic Wheel 65 mm                                | 3              | 2        | 6        |
| Ballpoint wheels | Mini swivel castor wheels                          | 1.5            | 1        | 1.5      |
| Arduino uno      | Keystudio uno R3                                   | 40             | 1        | 40       |
| Plywood          | 0.003mm thickness                                  | 16.15          | 20cm²    | 0.66     |
| Lipo Battery     | 11.1v Lipo battery                                 | 20             | 1        | 20       |
| 3D print         | PLA material                                       | -              | 1        | -        |
| Hobby Motor      | Plastic geared motor                               | 5.75           | 2        | 11.5     |
| IR sensors       | Infra-red line trace sensor module for Arduino     | 5.45           | 2        | 10.9     |
| Wires            | Covered Copper wires                               | 0.375          | 12       | 4.5      |
| **Total cost**   |                                                    |                |          | 95.06    |

### Conclusion

The Redback Autonomous Car project demonstrates the potential of autonomous technology in small-scale applications. The team's efforts in design, testing, and iteration highlight the importance of continuous improvement and innovation in engineering projects.
