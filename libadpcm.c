#include "adpcm.h"
#include "dvi_adpcm.h"

#include <stdlib.h>

#define ADPCM_API __attribute__((visibility ("default")))

ADPCM_API adpcm_decode_state_t *adpcm_decode_alloc(void)
{
	adpcm_decode_state_t *s;

	s = malloc(sizeof(adpcm_decode_state_t));
	if (!s)
		return NULL;

	dvi_adpcm_init(s,0);

	return s;
}

ADPCM_API void adpcm_decode_free(adpcm_decode_state_t *s)
{
	free(s);
}

ADPCM_API int adpcm_decode(adpcm_decode_state_t *s, int16_t amp[], const uint8_t *in, int len)
{
	int out_size;

	dvi_adpcm_decode(in, len, amp, &out_size, s);

	return out_size;
}
