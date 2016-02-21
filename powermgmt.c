/*
 * powermgmt.c
 *
 */

void powerDriverTask();

/*
 * Turns power on or off to the resistors based the powerState flag on signal from powerMgmtTask.
 *
 * Set the pin driving power to the resistors to 0 when powerState flag equals '0'.
 * Set the pin driving power to the resistors to 2mA when the powerState flag equals '1'.
 */

void powerMgmtTask();

/*
 * Determines the value of the powerState flag based on xQueue3 from the PIDTask.
 *
 * The PIDTask helps to model the future behavior of the black box's ambient temperature.  The powerMgmtTask will set powerState flag to '0' when the temperature
 * is higher than desired.  It will set powerState flag to 1 when temperature is lower than desired.
 */
