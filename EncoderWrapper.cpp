/*
   Wrapper library for Encoder
*/

#include "EncoderWrapper.h"

EncoderWrapper::EncoderWrapper(uint8_t pin1, uint8_t pin2):
    _encoder(pin1, pin2)
{
    // Nothing to do here
}

// Read the encoder's current position.
int32_t EncoderWrapper::getPosition(void)
{
    return _encoder.read();
}

// Write the encoder's current position
void EncoderWrapper::setPosition(int32_t pos)
{
    _encoder.write(pos);
}

