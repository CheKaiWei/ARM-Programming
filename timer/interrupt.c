#include "s3c24xx.h"

void Timer0_Handle(void)
{
    /*
     * ÿ���ж���4��LED�ı�״̬
     */
    if(INTOFFSET == 10)
    {
        GPFDAT = ~(GPFDAT & (0x7 << 4));
    }
    //���ж�
    SRCPND = 1 << INTOFFSET;
    INTPND = INTPND;     
}
