/*
 * data_io.h
 * Data transfer functions using SPI_SS2
 *
 */

#ifndef DATA_IO_H
#define DATA_IO_H

#include <inttypes.h>

#define DIO_FILE_TX     0x53
#define DIO_FILE_TX_DAT 0x54
#define DIO_FILE_INDEX  0x55
#define DIO_FILE_INFO   0x56

void data_io_set_index(unsigned char index);
void data_io_fill_tx(unsigned char, unsigned int, unsigned char);
void data_io_file_tx(fileTYPE *, unsigned char);

// called when a rom entry is found in the mist.ini
void data_io_rom_upload(char *s, char mode);

#endif // DATA_IO_H