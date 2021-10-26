#ifndef __LIBADPCM_ADPCM_H__
#define __LIBADPCM_ADPCM_H__

#include <inttypes.h>

#define ADPCM_HEADER_SIZE 3 /* sizeof(dvi_adpcm_state_t) */

typedef struct dvi_adpcm_state adpcm_decode_state_t;
adpcm_decode_state_t *adpcm_decode_alloc(void);
void adpcm_decode_free(adpcm_decode_state_t *s);
int adpcm_decode(adpcm_decode_state_t *s, int16_t amp[], const uint8_t *in,
		 int len);

#endif
