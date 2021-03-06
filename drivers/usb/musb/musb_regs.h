/*
 * MUSB OTG driver register defines
 *
 * Copyright 2005 Mentor Graphics Corporation
 * Copyright (C) 2005-2006 by Texas Instruments
 * Copyright (C) 2006-2007 Nokia Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
 * NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __MUSB_REGS_H__
#define __MUSB_REGS_H__

#define MUSB_EP0_FIFOSIZE	64	


#define MUSB_POWER_ISOUPDATE	0x80
#define MUSB_POWER_SOFTCONN	0x40
#define MUSB_POWER_HSENAB	0x20
#define MUSB_POWER_HSMODE	0x10
#define MUSB_POWER_RESET	0x08
#define MUSB_POWER_RESUME	0x04
#define MUSB_POWER_SUSPENDM	0x02
#define MUSB_POWER_ENSUSPEND	0x01

#define MUSB_INTR_SUSPEND	0x01
#define MUSB_INTR_RESUME	0x02
#define MUSB_INTR_RESET		0x04
#define MUSB_INTR_BABBLE	0x04
#define MUSB_INTR_SOF		0x08
#define MUSB_INTR_CONNECT	0x10
#define MUSB_INTR_DISCONNECT	0x20
#define MUSB_INTR_SESSREQ	0x40
#define MUSB_INTR_VBUSERROR	0x80	

#define MUSB_DEVCTL_BDEVICE	0x80
#define MUSB_DEVCTL_FSDEV	0x40
#define MUSB_DEVCTL_LSDEV	0x20
#define MUSB_DEVCTL_VBUS	0x18
#define MUSB_DEVCTL_VBUS_SHIFT	3
#define MUSB_DEVCTL_HM		0x04
#define MUSB_DEVCTL_HR		0x02
#define MUSB_DEVCTL_SESSION	0x01

#define MUSB_ULPI_USE_EXTVBUS	0x01
#define MUSB_ULPI_USE_EXTVBUSIND 0x02
#define MUSB_ULPI_REG_REQ	(1 << 0)
#define MUSB_ULPI_REG_CMPLT	(1 << 1)
#define MUSB_ULPI_RDN_WR	(1 << 2)

#define MUSB_TEST_FORCE_HOST	0x80
#define MUSB_TEST_FIFO_ACCESS	0x40
#define MUSB_TEST_FORCE_FS	0x20
#define MUSB_TEST_FORCE_HS	0x10
#define MUSB_TEST_PACKET	0x08
#define MUSB_TEST_K		0x04
#define MUSB_TEST_J		0x02
#define MUSB_TEST_SE0_NAK	0x01

#define MUSB_FIFOSZ_DPB	0x10
#define MUSB_FIFOSZ_SIZE	0x0f

#define MUSB_CSR0_FLUSHFIFO	0x0100
#define MUSB_CSR0_TXPKTRDY	0x0002
#define MUSB_CSR0_RXPKTRDY	0x0001

#define MUSB_CSR0_P_SVDSETUPEND	0x0080
#define MUSB_CSR0_P_SVDRXPKTRDY	0x0040
#define MUSB_CSR0_P_SENDSTALL	0x0020
#define MUSB_CSR0_P_SETUPEND	0x0010
#define MUSB_CSR0_P_DATAEND	0x0008
#define MUSB_CSR0_P_SENTSTALL	0x0004

#define MUSB_CSR0_H_DIS_PING		0x0800
#define MUSB_CSR0_H_WR_DATATOGGLE	0x0400	
#define MUSB_CSR0_H_DATATOGGLE		0x0200	
#define MUSB_CSR0_H_NAKTIMEOUT		0x0080
#define MUSB_CSR0_H_STATUSPKT		0x0040
#define MUSB_CSR0_H_REQPKT		0x0020
#define MUSB_CSR0_H_ERROR		0x0010
#define MUSB_CSR0_H_SETUPPKT		0x0008
#define MUSB_CSR0_H_RXSTALL		0x0004

#define MUSB_CSR0_P_WZC_BITS	\
	(MUSB_CSR0_P_SENTSTALL)
#define MUSB_CSR0_H_WZC_BITS	\
	(MUSB_CSR0_H_NAKTIMEOUT | MUSB_CSR0_H_RXSTALL \
	| MUSB_CSR0_RXPKTRDY)

#define MUSB_TYPE_SPEED		0xc0
#define MUSB_TYPE_SPEED_SHIFT	6
#define MUSB_TYPE_PROTO		0x30	
#define MUSB_TYPE_PROTO_SHIFT	4
#define MUSB_TYPE_REMOTE_END	0xf	

#define MUSB_CONFIGDATA_MPRXE		0x80	
#define MUSB_CONFIGDATA_MPTXE		0x40	
#define MUSB_CONFIGDATA_BIGENDIAN	0x20
#define MUSB_CONFIGDATA_HBRXE		0x10	
#define MUSB_CONFIGDATA_HBTXE		0x08	
#define MUSB_CONFIGDATA_DYNFIFO		0x04	
#define MUSB_CONFIGDATA_SOFTCONE	0x02	
#define MUSB_CONFIGDATA_UTMIDW		0x01	

#define MUSB_TXCSR_AUTOSET		0x8000
#define MUSB_TXCSR_DMAENAB		0x1000
#define MUSB_TXCSR_FRCDATATOG		0x0800
#define MUSB_TXCSR_DMAMODE		0x0400
#define MUSB_TXCSR_CLRDATATOG		0x0040
#define MUSB_TXCSR_FLUSHFIFO		0x0008
#define MUSB_TXCSR_FIFONOTEMPTY		0x0002
#define MUSB_TXCSR_TXPKTRDY		0x0001

#define MUSB_TXCSR_P_ISO		0x4000
#define MUSB_TXCSR_P_INCOMPTX		0x0080
#define MUSB_TXCSR_P_SENTSTALL		0x0020
#define MUSB_TXCSR_P_SENDSTALL		0x0010
#define MUSB_TXCSR_P_UNDERRUN		0x0004

#define MUSB_TXCSR_H_WR_DATATOGGLE	0x0200
#define MUSB_TXCSR_H_DATATOGGLE		0x0100
#define MUSB_TXCSR_H_NAKTIMEOUT		0x0080
#define MUSB_TXCSR_H_RXSTALL		0x0020
#define MUSB_TXCSR_H_ERROR		0x0004

#define MUSB_TXCSR_P_WZC_BITS	\
	(MUSB_TXCSR_P_INCOMPTX | MUSB_TXCSR_P_SENTSTALL \
	| MUSB_TXCSR_P_UNDERRUN | MUSB_TXCSR_FIFONOTEMPTY)
#define MUSB_TXCSR_H_WZC_BITS	\
	(MUSB_TXCSR_H_NAKTIMEOUT | MUSB_TXCSR_H_RXSTALL \
	| MUSB_TXCSR_H_ERROR | MUSB_TXCSR_FIFONOTEMPTY)

#define MUSB_RXCSR_AUTOCLEAR		0x8000
#define MUSB_RXCSR_DMAENAB		0x2000
#define MUSB_RXCSR_DISNYET		0x1000
#define MUSB_RXCSR_PID_ERR		0x1000
#define MUSB_RXCSR_DMAMODE		0x0800
#define MUSB_RXCSR_INCOMPRX		0x0100
#define MUSB_RXCSR_CLRDATATOG		0x0080
#define MUSB_RXCSR_FLUSHFIFO		0x0010
#define MUSB_RXCSR_DATAERROR		0x0008
#define MUSB_RXCSR_FIFOFULL		0x0002
#define MUSB_RXCSR_RXPKTRDY		0x0001

#define MUSB_RXCSR_P_ISO		0x4000
#define MUSB_RXCSR_P_SENTSTALL		0x0040
#define MUSB_RXCSR_P_SENDSTALL		0x0020
#define MUSB_RXCSR_P_OVERRUN		0x0004

#define MUSB_RXCSR_H_AUTOREQ		0x4000
#define MUSB_RXCSR_H_WR_DATATOGGLE	0x0400
#define MUSB_RXCSR_H_DATATOGGLE		0x0200
#define MUSB_RXCSR_H_RXSTALL		0x0040
#define MUSB_RXCSR_H_REQPKT		0x0020
#define MUSB_RXCSR_H_ERROR		0x0004

#define MUSB_RXCSR_P_WZC_BITS	\
	(MUSB_RXCSR_P_SENTSTALL | MUSB_RXCSR_P_OVERRUN \
	| MUSB_RXCSR_RXPKTRDY)
#define MUSB_RXCSR_H_WZC_BITS	\
	(MUSB_RXCSR_H_RXSTALL | MUSB_RXCSR_H_ERROR \
	| MUSB_RXCSR_DATAERROR | MUSB_RXCSR_RXPKTRDY)

#define MUSB_HUBADDR_MULTI_TT		0x80


#ifndef CONFIG_BLACKFIN


#define MUSB_FADDR		0x00	
#define MUSB_POWER		0x01	

#define MUSB_INTRTX		0x02	
#define MUSB_INTRRX		0x04
#define MUSB_INTRTXE		0x06
#define MUSB_INTRRXE		0x08
#define MUSB_INTRUSB		0x0A	
#define MUSB_INTRUSBE		0x0B	
#define MUSB_FRAME		0x0C
#define MUSB_INDEX		0x0E	
#define MUSB_TESTMODE		0x0F	

#if defined(CONFIG_USB_MUSB_TUSB6010) ||	\
	defined(CONFIG_USB_MUSB_TUSB6010_MODULE)
#define MUSB_FIFO_OFFSET(epnum)	(0x200 + ((epnum) * 0x20))
#else
#define MUSB_FIFO_OFFSET(epnum)	(0x20 + ((epnum) * 4))
#endif


#define MUSB_DEVCTL		0x60	

#define MUSB_TXFIFOSZ		0x62	
#define MUSB_RXFIFOSZ		0x63	
#define MUSB_TXFIFOADD		0x64	
#define MUSB_RXFIFOADD		0x66	

#define MUSB_HWVERS		0x6C	
#define MUSB_ULPI_BUSCONTROL	0x70	
#define MUSB_ULPI_INT_MASK	0x72	
#define MUSB_ULPI_INT_SRC	0x73	
#define MUSB_ULPI_REG_DATA	0x74	
#define MUSB_ULPI_REG_ADDR	0x75	
#define MUSB_ULPI_REG_CONTROL	0x76	
#define MUSB_ULPI_RAW_DATA	0x77	

#define MUSB_EPINFO		0x78	
#define MUSB_RAMINFO		0x79	
#define MUSB_LINKINFO		0x7a	
#define MUSB_VPLEN		0x7b	
#define MUSB_HS_EOF1		0x7c	
#define MUSB_FS_EOF1		0x7d	
#define MUSB_LS_EOF1		0x7e	

#define MUSB_TXMAXP		0x00
#define MUSB_TXCSR		0x02
#define MUSB_CSR0		MUSB_TXCSR	
#define MUSB_RXMAXP		0x04
#define MUSB_RXCSR		0x06
#define MUSB_RXCOUNT		0x08
#define MUSB_COUNT0		MUSB_RXCOUNT	
#define MUSB_TXTYPE		0x0A
#define MUSB_TYPE0		MUSB_TXTYPE	
#define MUSB_TXINTERVAL		0x0B
#define MUSB_NAKLIMIT0		MUSB_TXINTERVAL	
#define MUSB_RXTYPE		0x0C
#define MUSB_RXINTERVAL		0x0D
#define MUSB_FIFOSIZE		0x0F
#define MUSB_CONFIGDATA		MUSB_FIFOSIZE	

#define MUSB_INDEXED_OFFSET(_epnum, _offset)	\
	(0x10 + (_offset))

#define MUSB_FLAT_OFFSET(_epnum, _offset)	\
	(0x100 + (0x10*(_epnum)) + (_offset))

#if defined(CONFIG_USB_MUSB_TUSB6010) ||	\
	defined(CONFIG_USB_MUSB_TUSB6010_MODULE)
#define MUSB_TUSB_OFFSET(_epnum, _offset)	\
	(0x10 + _offset)
#include "tusb6010.h"		
#endif

#define MUSB_TXCSR_MODE			0x2000

#define MUSB_TXFUNCADDR		0x00
#define MUSB_TXHUBADDR		0x02
#define MUSB_TXHUBPORT		0x03

#define MUSB_RXFUNCADDR		0x04
#define MUSB_RXHUBADDR		0x06
#define MUSB_RXHUBPORT		0x07

#define MUSB_BUSCTL_OFFSET(_epnum, _offset) \
	(0x80 + (8*(_epnum)) + (_offset))

static inline void musb_write_txfifosz(void __iomem *mbase, u8 c_size)
{
	musb_writeb(mbase, MUSB_TXFIFOSZ, c_size);
}

static inline void musb_write_txfifoadd(void __iomem *mbase, u16 c_off)
{
	musb_writew(mbase, MUSB_TXFIFOADD, c_off);
}

static inline void musb_write_rxfifosz(void __iomem *mbase, u8 c_size)
{
	musb_writeb(mbase, MUSB_RXFIFOSZ, c_size);
}

static inline void  musb_write_rxfifoadd(void __iomem *mbase, u16 c_off)
{
	musb_writew(mbase, MUSB_RXFIFOADD, c_off);
}

static inline void musb_write_ulpi_buscontrol(void __iomem *mbase, u8 val)
{
	musb_writeb(mbase, MUSB_ULPI_BUSCONTROL, val);
}

static inline u8 musb_read_txfifosz(void __iomem *mbase)
{
	return musb_readb(mbase, MUSB_TXFIFOSZ);
}

static inline u16 musb_read_txfifoadd(void __iomem *mbase)
{
	return musb_readw(mbase, MUSB_TXFIFOADD);
}

static inline u8 musb_read_rxfifosz(void __iomem *mbase)
{
	return musb_readb(mbase, MUSB_RXFIFOSZ);
}

static inline u16  musb_read_rxfifoadd(void __iomem *mbase)
{
	return musb_readw(mbase, MUSB_RXFIFOADD);
}

static inline u8 musb_read_ulpi_buscontrol(void __iomem *mbase)
{
	return musb_readb(mbase, MUSB_ULPI_BUSCONTROL);
}

static inline u8 musb_read_configdata(void __iomem *mbase)
{
	musb_writeb(mbase, MUSB_INDEX, 0);
	return musb_readb(mbase, 0x10 + MUSB_CONFIGDATA);
}

static inline u16 musb_read_hwvers(void __iomem *mbase)
{
	return musb_readw(mbase, MUSB_HWVERS);
}

static inline void __iomem *musb_read_target_reg_base(u8 i, void __iomem *mbase)
{
	return (MUSB_BUSCTL_OFFSET(i, 0) + mbase);
}

static inline void musb_write_rxfunaddr(void __iomem *ep_target_regs,
		u8 qh_addr_reg)
{
	musb_writeb(ep_target_regs, MUSB_RXFUNCADDR, qh_addr_reg);
}

static inline void musb_write_rxhubaddr(void __iomem *ep_target_regs,
		u8 qh_h_addr_reg)
{
	musb_writeb(ep_target_regs, MUSB_RXHUBADDR, qh_h_addr_reg);
}

static inline void musb_write_rxhubport(void __iomem *ep_target_regs,
		u8 qh_h_port_reg)
{
	musb_writeb(ep_target_regs, MUSB_RXHUBPORT, qh_h_port_reg);
}

static inline void  musb_write_txfunaddr(void __iomem *mbase, u8 epnum,
		u8 qh_addr_reg)
{
	musb_writeb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXFUNCADDR),
			qh_addr_reg);
}

static inline void  musb_write_txhubaddr(void __iomem *mbase, u8 epnum,
		u8 qh_addr_reg)
{
	musb_writeb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXHUBADDR),
			qh_addr_reg);
}

static inline void  musb_write_txhubport(void __iomem *mbase, u8 epnum,
		u8 qh_h_port_reg)
{
	musb_writeb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXHUBPORT),
			qh_h_port_reg);
}

static inline u8 musb_read_rxfunaddr(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_RXFUNCADDR));
}

static inline u8 musb_read_rxhubaddr(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_RXHUBADDR));
}

static inline u8 musb_read_rxhubport(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_RXHUBPORT));
}

static inline u8  musb_read_txfunaddr(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXFUNCADDR));
}

static inline u8  musb_read_txhubaddr(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXHUBADDR));
}

static inline u8  musb_read_txhubport(void __iomem *mbase, u8 epnum)
{
	return musb_readb(mbase, MUSB_BUSCTL_OFFSET(epnum, MUSB_TXHUBPORT));
}

#else 

#define USB_BASE		USB_FADDR
#define USB_OFFSET(reg)		(reg - USB_BASE)

#define MUSB_FADDR		USB_OFFSET(USB_FADDR)	
#define MUSB_POWER		USB_OFFSET(USB_POWER)	
#define MUSB_INTRTX		USB_OFFSET(USB_INTRTX)	
#define MUSB_INTRRX		USB_OFFSET(USB_INTRRX)
#define MUSB_INTRTXE		USB_OFFSET(USB_INTRTXE)
#define MUSB_INTRRXE		USB_OFFSET(USB_INTRRXE)
#define MUSB_INTRUSB		USB_OFFSET(USB_INTRUSB)	
#define MUSB_INTRUSBE		USB_OFFSET(USB_INTRUSBE)
#define MUSB_FRAME		USB_OFFSET(USB_FRAME)
#define MUSB_INDEX		USB_OFFSET(USB_INDEX)	
#define MUSB_TESTMODE		USB_OFFSET(USB_TESTMODE)

#define MUSB_FIFO_OFFSET(epnum)	\
	(USB_OFFSET(USB_EP0_FIFO) + ((epnum) * 8))


#define MUSB_DEVCTL		USB_OFFSET(USB_OTG_DEV_CTL)	

#define MUSB_LINKINFO		USB_OFFSET(USB_LINKINFO)
#define MUSB_VPLEN		USB_OFFSET(USB_VPLEN)	
#define MUSB_HS_EOF1		USB_OFFSET(USB_HS_EOF1)	
#define MUSB_FS_EOF1		USB_OFFSET(USB_FS_EOF1)	
#define MUSB_LS_EOF1		USB_OFFSET(USB_LS_EOF1)	

#define MUSB_TXMAXP		0x00
#define MUSB_TXCSR		0x04
#define MUSB_CSR0		MUSB_TXCSR	
#define MUSB_RXMAXP		0x08
#define MUSB_RXCSR		0x0C
#define MUSB_RXCOUNT		0x10
#define MUSB_COUNT0		MUSB_RXCOUNT	
#define MUSB_TXTYPE		0x14
#define MUSB_TYPE0		MUSB_TXTYPE	
#define MUSB_TXINTERVAL		0x18
#define MUSB_NAKLIMIT0		MUSB_TXINTERVAL	
#define MUSB_RXTYPE		0x1C
#define MUSB_RXINTERVAL		0x20
#define MUSB_TXCOUNT		0x28

#define MUSB_INDEXED_OFFSET(_epnum, _offset)	\
	(0x40 + (_offset))

#define MUSB_FLAT_OFFSET(_epnum, _offset)	\
	(USB_OFFSET(USB_EP_NI0_TXMAXP) + (0x40 * (_epnum)) + (_offset))

#define MUSB_TXCSR_MODE			0x0000

static inline void musb_write_txfifosz(void __iomem *mbase, u8 c_size)
{
}

static inline void musb_write_txfifoadd(void __iomem *mbase, u16 c_off)
{
}

static inline void musb_write_rxfifosz(void __iomem *mbase, u8 c_size)
{
}

static inline void  musb_write_rxfifoadd(void __iomem *mbase, u16 c_off)
{
}

static inline void musb_write_ulpi_buscontrol(void __iomem *mbase, u8 val)
{
}

static inline u8 musb_read_txfifosz(void __iomem *mbase)
{
	return 0;
}

static inline u16 musb_read_txfifoadd(void __iomem *mbase)
{
	return 0;
}

static inline u8 musb_read_rxfifosz(void __iomem *mbase)
{
	return 0;
}

static inline u16  musb_read_rxfifoadd(void __iomem *mbase)
{
	return 0;
}

static inline u8 musb_read_ulpi_buscontrol(void __iomem *mbase)
{
	return 0;
}

static inline u8 musb_read_configdata(void __iomem *mbase)
{
	return 0;
}

static inline u16 musb_read_hwvers(void __iomem *mbase)
{
	return MUSB_HWVERS_1900;
}

static inline void __iomem *musb_read_target_reg_base(u8 i, void __iomem *mbase)
{
	return NULL;
}

static inline void musb_write_rxfunaddr(void __iomem *ep_target_regs,
		u8 qh_addr_req)
{
}

static inline void musb_write_rxhubaddr(void __iomem *ep_target_regs,
		u8 qh_h_addr_reg)
{
}

static inline void musb_write_rxhubport(void __iomem *ep_target_regs,
		u8 qh_h_port_reg)
{
}

static inline void  musb_write_txfunaddr(void __iomem *mbase, u8 epnum,
		u8 qh_addr_reg)
{
}

static inline void  musb_write_txhubaddr(void __iomem *mbase, u8 epnum,
		u8 qh_addr_reg)
{
}

static inline void  musb_write_txhubport(void __iomem *mbase, u8 epnum,
		u8 qh_h_port_reg)
{
}

static inline u8 musb_read_rxfunaddr(void __iomem *mbase, u8 epnum)
{
	return 0;
}

static inline u8 musb_read_rxhubaddr(void __iomem *mbase, u8 epnum)
{
	return 0;
}

static inline u8 musb_read_rxhubport(void __iomem *mbase, u8 epnum)
{
	return 0;
}

static inline u8  musb_read_txfunaddr(void __iomem *mbase, u8 epnum)
{
	return 0;
}

static inline u8  musb_read_txhubaddr(void __iomem *mbase, u8 epnum)
{
	return 0;
}

static inline u8 musb_read_txhubport(void __iomem *mbase, u8 epnum)
{
	return 0;
}

#endif 

#endif	
