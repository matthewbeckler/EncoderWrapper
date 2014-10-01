/*
    Wrapper library for Encoder
*/


#ifndef ENCODER_WRAPPER_H
#define ENCODER_WRAPPER_H

// Arduino header files
#include <stdint.h>
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

// Library header files
#include <Encoder.h>

class EncoderWrapper
{
    public:
        EncoderWrapper(uint8_t pin1,
                       uint8_t pin2);

        // Read the encoder's current position.
        int32_t getPosition(void);

        // Write the encoder's current position
        void setPosition(int32_t pos);

        // Tracks the position of the motor
        Encoder _encoder;
};

#endif // #ifndef ENCODER_WRAPPER_H

