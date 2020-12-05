# PID Controller
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

Proportional–integral–derivative(PID) controller is commonly used algorithm on control loops. The controller takes a
signal input and computes the desired actuator output. The PID includes into the feedback loop the present error(P), the 
memory o the past error(I) and the future (D) to reduce overshooting, and base on this values applies a correction.
On this project we have implemented a PID controller in C++ to maneuver the vehicle around the simulator track. 


## Implementation
The implementation of the algorithm is quite straight forward. Every time we receive the error we stored on
the variables and calculate the new value. We use two PID controllers one for the steering and one for the throttle
control, each with its own initial constants. Given that on practice the integral error can get saturated we *clamped 
the saturation* to a max value, which provides us with smoother correction when the car started oscillating too much.  

The [Video](https://youtu.be/Tuj7dfj4P0c) result shows how the car goes around the track.

## Parameter Tuning
Even thought there are many algorithms that can do the parameter tuning we choose to it manually to understand them 
better. Tuning each parameter at a time by hand helps understanding how it works each of one of them. Even though the
throttle control uses PID, tuning the parameters is not as evident as the steering control.

The parameters correspond as follow for steering.

- P constant value was setup to *0.05*. The value define how much correction is done. If the value is set to say 1,
  the car will continuously correct the direction making it oscillate heavily on a straight line.
  
- I constant value was set *0.001* with a max value of *200*. This value was set to 0 initially, and when the 
  other two values **P and D** where set, with put a very small value that helps the car driver a bit smoother.
  
- D constant value was set to *3*. Finally the D value was set high since it helps turning on the curves harder.
  
The parameters correspond as follow for throttle.

- P constant value was setup to *0.09*
- I constant value was set *0.0001* with a max value of *500*
- D constant value was set to *0.5*

## Basic Build Instructions
- **Clone this repo**
- **Make a build directory:** mkdir build && cd build
- **Compile:** cmake .. && make
- **Run it:** ./pid

## Dependencies

* cmake >= 3.5
    * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1
    * Linux: make is installed by default on most Linux distros
    * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
    * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
    * Linux: gcc / g++ is installed by default on most Linux distros
    * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
    * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
    * Run either `install-mac.sh` or `install-ubuntu.sh`.
    * If you install from source, checkout to commit `e94b6e1`, i.e.
      ```
      git clone https://github.com/uWebSockets/uWebSockets 
      cd uWebSockets
      git checkout e94b6e1

## Setup
### Ubuntu Linux
To install the required libraries run [install-ubuntu.sh](install-ubuntu.sh) script.

## Contributing
[Google's C++ style guide](https://google.github.io/styleguide/cppguide.html)

## License
MIT License Copyright (c) 2016-2018 Udacity, Inc.


## References
https://www.ni.com/en-us/innovations/white-papers/06/pid-theory-explained.html

https://github.com/udacity/CarND-Controls-PID

https://github.com/udacity/self-driving-car-sim/releases

https://review.udacity.com/#!/rubrics/1972/view
