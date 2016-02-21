/*
 * tempcalc.h
 */

void tempcalc()

/**
 * Convert the voltage from ADC (a value from 0 to 1023), a value stored in the global queue xQueue1, into a temperature value.
 *
 * The global queue, xQueue1 contains data from ADCTask as a value from 0 to 1023.  This value needs to be converted to a real world temperature value.
 * The temperature value will be based off of a voltage-to-temperature curve from the thermistors' datasheet. A thermistor has variable resistance dependent
 * on the temperature. Using voltage division we can determine what the ambient temperature in the box is by calculating how much voltage is running across the thermistor.
 * Comparing the resistance across the thermistor to our datasheet will provide the temperature inside the black box.  This value is pushed onto xQueue2.
 *
 * A sampling rate of 4 times a second is used because temperature inside the box will not change rapidly.
 *
 * xQueue1 facilitates data transfer between the ADCTask and the tempCalcTask.
 * xQueue2 stores converted temperature values from the tempCalcTask to be used by the PIDTask.
 *
 */
