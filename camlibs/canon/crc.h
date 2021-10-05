#ifndef CAMLIBS_CANON_CRC_H
#define CAMLIBS_CANON_CRC_H

int canon_psa50_gen_crc(const unsigned char *pkt, int len);
int canon_psa50_chk_crc(const unsigned char *pkt, int len, unsigned short crc);

#endif /* !defined(CAMLIBS_CANON_CRC_H) */
