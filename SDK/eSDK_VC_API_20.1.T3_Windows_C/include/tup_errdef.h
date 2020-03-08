/**
 *
 */

#ifndef __TUP_ERRDEF_H__
#define __TUP_ERRDEF_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */


#define TUP_D_CBBID_BASE     0x10

#define TUP_ERR_DEF( cbbid, mid, errid ) \
        (((TUP_D_CBBID_BASE + (cbbid))<<24) | ((mid) << 16 ) | (errid))

typedef enum tagTUP_E_CBBID
{
    TUP_E_CBBID_CFM = 0,
    TUP_E_CBBID_CLI,
    TUP_E_CBBID_DEV,
    TUP_E_CBBID_EXP,
    TUP_E_CBBID_LOG,
    TUP_E_CBBID_MC,
    TUP_E_CBBID_MEM,
    TUP_E_CBBID_MSG,
    TUP_E_CBBID_TLOG,
    TUP_E_CBBID_UPG,
    TUP_E_CBBID_WDT,
    TUP_E_CBBID_WEB,

    TUP_E_CBBID_MAPP,
    TUP_E_CBBID_MCTL,
    TUP_E_CBBID_MDATA_MAGE,     
    TUP_E_CBBID_MDATA_RTP, 
    TUP_E_CBBID_MDATA_TS,
    TUP_E_CBBID_MDEV,
    
    TUP_E_CBBID_HTTP,
    TUP_E_CBBID_NETA_DHCP,
    TUP_E_CBBID_NETA_PPPOE,
    TUP_E_CBBID_NETB_ARP,
    TUP_E_CBBID_NETB_DNS,
    TUP_E_CBBID_NETB_IGMP,
    TUP_E_CBBID_NETB_IPCFG,
    TUP_E_CBBID_NETB_IPSTAT,
    TUP_E_CBBID_NETB_PING,
    TUP_E_CBBID_NETB_TRCRT,
    TUP_E_CBBID_NETT_SNTP,
    
    TUP_E_CBBID_NETT_SIPUA,
    TUP_E_CBBID_MDATA_RTPA,
    TUP_E_CBBID_DOT1X,
    TUP_E_CBBID_LDAP,
    TUP_E_CBBID_FTP,
    TUP_E_CBBID_SNMP,
    TUP_E_CBBID_SSH,
    TUP_E_CBBID_SCEP,
    TUP_E_CBBID_IPFILTER,
    TUP_E_CBBID_LDAPADAPT,
    TUP_E_CBBID_EADDR,
    
    TUP_E_CBBID_SOAP = 100,
    TUP_E_CBBID_CWMP,
    TUP_E_CBBID_HTTP_SERVER,
    TUP_E_CBBID_DATA,
    TUP_E_CBBID_ADDRBOOK,
    TUP_E_CBBID_BUTT
} TUP_E_CBBID;



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __TUP_ERRDEF_H__ */


