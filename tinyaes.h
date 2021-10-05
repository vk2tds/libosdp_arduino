#ifndef _TINYAES_H_
#define _TINYAES_H_

#include <stdint.h>
#include <stddef.h>
//#include "tinyaes_src.h"

//vk2tds
void osdp_encrypt(uint8_t *key, uint8_t *iv, uint8_t *data, int len);

#endif // _TINYAES_H_