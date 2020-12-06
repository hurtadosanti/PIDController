# PID Controller
[![Udacity - Self-Driving Car NanoDegree](https://s3.amazonaws.com/udacity-sdc/github/shield-carnd.svg)](http://www.udacity.com/drive)

A proportional–integral–derivative **(PID)** controller is a commonly used algorithm on control loops. On this **[project](https://advt3.com/posts/pid_controller)** we have implemented a PID controller in C++ to maneuver the vehicle around the simulator track.   

![drone](/img/florin-kozma--K2rf6hAB1s-unsplash.jpg) 

*Photo by [Florin Kozma](https://unsplash.com/@florinkozma?utm_source=unsplash&amp;utm_medium=referral&amp;utm_content=creditCopyText) on [Unsplash](https://unsplash.com/s/photos/controller?utm_source=unsplash&amp;utm_medium=referral&amp;utm_content=creditCopyText)*

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

https://advt3.com/posts/pid_controller
