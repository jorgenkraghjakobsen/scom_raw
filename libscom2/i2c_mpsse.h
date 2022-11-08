
// I2C Processor

unsigned char mem[1024]; // Buffer to hold MPSSE commands and data to be sent to FT4232H
unsigned char r_mem[1024];  // Buffer to hold Data unsigned chars to be read from FT4232H
unsigned int dwClockDivisor = 0x0095; // Value of clock divisor, SCL Frequency = 60/((1+0x0095)*2) (MHz) = 200khz
unsigned int dw = 0; // Index of output buffer
unsigned int dwSent = 0, dwNumInputBuffer = 0;
int dwRead = 0;

int initI2C(struct ftdi_context fc);

void I2CStart(void);
void I2CStop(void);
int SendByteAndCheckACK(struct ftdi_context fc,unsigned char DataSend);
unsigned char ReadByte(struct ftdi_context fc);
unsigned char ReadByteAndSendNAK(struct ftdi_context fc);
unsigned char ReadnByteAndSendNAK(struct ftdi_context fc,unsigned char n);
