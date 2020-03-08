var CLIENTCONFIG = {
  // 是否IT meeting模式
  ENABLE_IT_MEETING: false,
  //是否是公司局IT链接入会模式
  IS_LINK_IT_SMC_MEETING: false,

  USE_ESERVER: true,

  CALL_D_MAX_IP_WHITE_LIST_COUNT:3,

  USE_MEETING: true,
  USE_IM: true,
  USE_CALL: true,

  LOGIN_FORGET_PASSWORD: true,
  TUP_PORT: 7683,
  TUP_ENABLE_JSON_LOG: 0,

  LOGIN_PROXY_BACKUP1_ADDR: "",
  LOGIN_PROXY_BACKUP1_PORT: "",
  LOGIN_PROXY_BACKUP2_ADDR: "",
  LOGIN_PROXY_BACKUP2_PORT: "",
  LOGIN_PROXY_BACKUP3_ADDR: "",
  LOGIN_PROXY_BACKUP3_PORT: "",
  LOGIN_SERVER_MORE: true,


  LOGIN_USERINFO_NUM: 10,


  LOGIN_RECONNECT_TIMER: 4000,


  CALL_DND: false,
  CALL_FORWORD: true,
  CALL_WAIT: true,


  VIDEO_CALL: true,
  

  INTELLIGENT_ROUTE: false,


  VIDEO_CONFIG_MEDIA_LEVEL: 40, 
  VIDEO_CONFIG_MEDIA_MAX_BR: 0,
  VIDEO_CONFIG_MEDIA_MAX_MBPS: 0,
  VIDEO_CONFIG_MEDIA_MAX_FS: 0,



  VIDEO_CONFIG_MEDIA_CLARITY_FLUENCY_ENABLE: 0,
  VIDEO_CONFIG_MEDIA_VIDEO_TATIC: 1,



  VIDEO_CONFIG_MEDIA_H264_FORCE_SINGLE_PT: 1,

  VIDEO_CONFIG_MEDIA_SEC_VERSION: 1, 
  VIDEO_CONFIG_MEDIA_VIDEO_ERRORCORRECTING: 1,
  "Device.ComCfg.Media.VideoArq": "0",
  "Device.ComCfg.Media.VideoHarq": "1",
  "Device.ComCfg.Media.EcPktInRtp": "1",
  "Device.ComCfg.Media.VideoNetRat": "0",
  "Device.ComCfg.Media.VideoKeyFrameIntervalNetRat": "150",

  /**
   * 移动设备底部安全区适配配置
   * @type {{iPhone10,3: {v: number, h: number}, iPhone10,6: {v: number, h: number}, iPhone11,8: {v: number, h: number}, iPhone11,2: {v: number, h: number}, iPhone11,6: {v: number, h: number}, iPhone11,4: {v: number, h: number}}}
   */
  MOBILE_SAFE_AREA_PLACEHOLDER_LIST:['iPhone10,3', 'iPhone10,6', 'iPhone11,8', 'iPhone11,2', 'iPhone11,6', 'iPhone11,4'],
  MOBILE_BOTTOM_HEIGHT_MAP:{
    'iPhone10,3':{v:34,h:21}, //iPhone X
    'iPhone10,6':{v:34,h:21},//iPhone X
    'iPhone11,8':{v:34,h:21},//iPhone XR
    'iPhone11,2':{v:34,h:21},//iPhone XS
    'iPhone11,6':{v:34,h:21},//iPhone XS Max
    'iPhone11,4':{v:34,h:21}//iPhone XS Max
  },
  DATA_CONFIG_MEDIA_LEVEL: 31,
  DATA_CONFIG_MEDIA_MAX_BR: 0,
  DATA_CONFIG_MEDIA_MAX_MBPS: 0,
  DATA_CONFIG_MEDIA_MAX_FS: 0,

  DATA_CONFIG_MEDIA_DATA_ERRORCORRECTING: 1,
  "Device.ComCfg.Media.DataArq": "0",
  "Device.ComCfg.Media.DataHarq": "1",
  "Device.ComCfg.Media.DataNetRat": "5",
  "Device.ComCfg.Media.DataKeyFrameIntervalNetRat": "0",
  "Device.ComCfg.Media.BfcpKeepaliveTime":"10",


  IS_DEBUG: 1,
  IS_HME_DEBUG: 0,
  IS_SVC_CONF_DEBUG: true,
  "Device.ComCfg.Media.TmmbrControl": "1",
  "Device.ComCfg.Media.TotalBandwidth": "2048",
  "Device.ComCfg.Media.Mobile.WifiSoftCodedTotalBandwidth": "4096",
  "Device.ComCfg.Media.Mobile.4GTotalBandwidth": "4096",
  "Device.ComCfg.Media.Mobile.3GTotalBandwidth": "4096",

  "Device.ComCfg.Media.VideoARS": "1",
  "Device.ComCfg.Media.VideoARSFrameSize": "1",
  "Device.ComCfg.Media.VideoARSFrameRate": "1",
  "Device.ComCfg.Media.VideoARSBitRate": "1",
  "Device.ComCfg.Media.VideoArsFec": "1",
  "Device.ComCfg.Media.VideoShaping": "1",

  "Device.ComCfg.Media.DataARS": "1",
  "Device.ComCfg.Media.DataARSFrameSize": "0",
  "Device.ComCfg.Media.DataARSFrameRate": "1",
  "Device.ComCfg.Media.DataARSBitRate": "1",
  "Device.ComCfg.Media.DataArsFec": "1",
  "Device.ComCfg.Media.DataShaping": "1",

  "Device.ComCfg.Media.BFCPMode": "2",

  "Device.ComCfg.Media.VideoCfg.sec": "0",
  "Device.ComCfg.Media.StreamAutomaticallyHangUp": "1",
  "Device.ComCfg.Media.BandwidthLimit": "0",
  "Device.ComCfg.Media.priorityRtp": "",
  "Device.ComCfg.Media.EncryptCalloutUseMKI": "0",


  "Device.ComCfg.Sip.sipDSCP": "",
  "Device.ComCfg.Sip.RegistSendPeriods": "",
  "Device.ComCfg.Sip.LocalPort": "5060",
  "Device.ComCfg.Sip.enableSessionTimer": "0",
  "Device.ComCfg.Sip.SessionTime": "600",
  "Device.ComCfg.Sip.RegistExpires": "3600",
  "Device.ComCfg.Sip.enableRegistStatusSubscribe": "",
  "Device.ComCfg.Sip.RejectCallType": "",
  "Device.ComCfg.Sip.sipKeepaliveTime":"30",

  "Device.ComCfg.Service.pickupActive":"1",
  "Device.ComCfg.Service.pointPickupActive":"*11*",
  "Device.ComCfg.Service.groupPickupActive":"*11#",




  DEFAULT_MENU: "nav",

  MENU_LIST:["recent","contactGroups","conference","call","work","webCollection"],
  MOBILE_DEFAULT_MENU: "recent",

  MOBILE_MENU_LIST: ["recent", "conference","contactGroups", "myInfo"],
  debug:0,

  height:720,
  width:1280,

  DONT_SHOWMESSAGE_NOTIFICATION: false,

  CONTACT_ASYNC_UPDATE_TIMESTAMP: 19000000000000,

  FIXEDGROUPMEMBER_ASYNC_UPDATE_TIMESTAMP: 19000000000000,

  SERVICEPROFILE_ASYNC_UPDATE_TIMESTAMP: 19000000000000,

  DEFAULT_INLINE_STYLE: {
    fontFamily: "Microsoft YaHei",
    fontSize: "14",
    color: "#000000",
    fontWeight: "normal",
    fontStyle: "normal",
    textDecoration: "none"
  },
  DEFAULT_AVATAR_CONFIG:{
    MALE_BG_COLOR : {
      0:'rgb(103, 142, 221)',
      1:'rgb(121, 207, 208)',
      2:'rgb(131, 185, 229)',
      3:'rgb(138, 150, 236)',
      4:'rgb(119, 210, 242)'
    },
    FEMALE_BG_COLOR: {
      0:'rgb(250, 163, 143)',
      1:'rgb(193, 183, 246)'
    },
    AVATAR_SIZE:60,
    FILE_TYPE:'.png'
  },
  DEFAULT_LANGUAGE: "2052",

  EMOJI_COUNT:108,

  MIC_GAIN: 1,

  SPK_GAIN: 1,

  vc_sip_server:"",
  vc_sip_server_port:"",
  vc_sip_num:"",
  vc_sip_password:"",
  vc_sip_pwdtype:"",
  user_agent:"",
  sip_domain:"",
  cur_camera:"",

  LOG_MAX_UPLOAD_SIZE: 50,

  GROUP_MAX_FILE_SIZE: 50,
 
  /*ACS configuration */
  ACS_PERIODICINFORMENABLE_NAME: 'Device.ManagementServer.PeriodicInformEnable',
  ACS_PERIODICINFORMENABLE_VALUE: 1,
  ACS_PERIODICINFORMENABLE_TYPE: 'unsignedInt',

  ACS_PERIODICINFORMINTERVAL_NAME: 'Device.ManagementServer.PeriodicInformInterval',
  ACS_PERIODICINFORMINTERVAL_VALUE: 1800,
  ACS_PERIODICINFORMINTERVAL_TYPE: 'unsignedInt',

  ACS_CONNECTIONREQUESTURL_NAME: 'Device.ManagementServer.ConnectionRequestURL',
  ACS_CONNECTIONREQUESTURL_VALUE: '',
  ACS_CONNECTIONREQUESTURL_TYPE: 'string',

  ACS_CONNECTIONREQUESTUSERNAME_NAME: 'Device.ManagementServer.ConnectionRequestUsername',
  ACS_CONNECTIONREQUESTUSERNAME_VALUE: '',
  ACS_CONNECTIONREQUESTUSERNAME_TYPE: 'string',

  ACS_CONNECTIONREQUESTPASSWORD_NAME: 'Device.ManagementServer.ConnectionRequestPassword',
  ACS_CONNECTIONREQUESTPASSWORD_VALUE: '',
  ACS_CONNECTIONREQUESTPASSWORD_TYPE: 'string',

  ACS_MANUFACTURER_NAME: 'Device.DeviceInfo.Manufacturer',
  ACS_MANUFACTURER_VALUE: 'HUAWEI',
  ACS_MANUFACTURER_TYPE: 'string',

  ACS_MANUFACTUREROUI_NAME: 'Device.DeviceInfo.ManufacturerOUI',
  ACS_MANUFACTUREROUI_VALUE: 'WeLink',
  ACS_MANUFACTUREROUI_TYPE: 'string',

  ACS_SOFTWAREVERSION_NAME: 'Device.DeviceInfo.SoftwareVersion',
  ACS_SOFTWAREVERSION_VALUE: '6.1.170',
  ACS_SOFTWAREVERSION_CODE_ANDROID: '170',
  ACS_SOFTWAREVERSION_CODE_IOS: '170',

  ACS_SOFTWAREVERSION_TYPE: 'string',

  UPDATE_DOWNLOAD_TIMEOUT: 300,
  ACS_HTTP_CONN_LISTEN_PORT: 8085,

  ACS_CONNECTIONSTUNSERVER_ADDRESS_NAME: 'Device.ManagementServer.STUNServerAddress',
  ACS_CONNECTIONSTUNSERVER_ADDRESS_VALUE: '',
  ACS_CONNECTIONSTUNSERVER_ADDRESS_TYPE: 'string',

  ACS_CONNECTIONSTUNSERVER_PORT_NAME: 'Device.ManagementServer.STUNServerPort',
  ACS_CONNECTIONSTUNSERVER_PORT_VALUE: '',
  ACS_CONNECTIONSTUNSERVER_PORT_TYPE: 'string',

  ACS_CONNECTIONSTUNUSERNAME_NAME: 'Device.ManagementServer.STUNUsername',
  ACS_CONNECTIONSTUNUSERNAME_VALUE: '',
  ACS_CONNECTIONSTUNUSERNAME_TYPE: 'string',

  ACS_CONNECTIONSTUNPASSWORD_NAME: 'Device.ManagementServer.STUNPassword',
  ACS_CONNECTIONSTUNPASSWORD_VALUE: '',
  ACS_CONNECTIONSTUNPASSWORD_TYPE: 'string',

  ACS_CONNECTIONSTUN_MIN_ALIVEPERIOD_NAME: 'Device.ManagementServer.STUNMinimumKeepAlivePeriod',
  ACS_CONNECTIONSTUN_MIN_ALIVEPERIOD_VALUE: '',
  ACS_CONNECTIONSTUN_MIN_ALIVEPERIOD_TYPE: 'string',

  ACS_CONNECTIONSTUN_MAX_ALIVEPERIOD_NAME: 'Device.ManagementServer.STUNMaximumKeepAlivePeriod',
  ACS_CONNECTIONSTUN_MAX_ALIVEPERIOD_VALUE: '',
  ACS_CONNECTIONSTUN_MAX_ALIVEPERIOD_TYPE: 'string',

  ACS_CONNECTIONSTUN_STG_SERVER_ADDRESS_NAME: 'Device.ManagementServer.STUNSTGServerAddress',
  ACS_CONNECTIONSTUN_STG_SERVER_ADDRESS_VALUE: '',
  ACS_CONNECTIONSTUN_STG_SERVER_ADDRESS_TYPE: 'string',
  
  ACS_CONNECTIONSTUN_STG_SERVER_PORT_NAME: 'Device.ManagementServer.STUNSTGServerPort',
  ACS_CONNECTIONSTUN_STG_SERVER_PORT_VALUE: '',
  ACS_CONNECTIONSTUN_STG_SERVER_PORT_TYPE: 'string',

  ACS_CONNECTIONSTUN_ENABLE: 'Device.ManagementServer.STUNEnable',
  
  SVC_AUTOMATIC_ACCEPT_VIDEO_CONF: 'Device.ComCfg.Conf.Svc.AutomaticAcceptVideoConf',
  SVC_START_SHARE_BFCP: 'Device.ComCfg.Conf.Svc.StartShareBfcp',
  SVC_Mobile_Conf_HdDecoder: 'Device.ComCfg.Conf.Svc.Mobile.Hard.decoder.Data',
  SVC_CONF_HME_LOG_SIZE_MB: 'Device.ComCfg.Conf.Svc.conf.hme.log.size.mb',
  SVC_DESKTOP_MAX_ENCODE: 'Device.ComCfg.Conf.Svc.Desktop.max.coding.resolution',
  SVC_DESKTOP_SPEAKER_BIG_MAX_LOOK: 'Device.ComCfg.Conf.Svc.Desktop.speakerMode.bigScreen.max.decoding.resolution',
  SVC_DESKTOP_SPEAKER_SMALL_MAX_LOOK: 'Device.ComCfg.Conf.Svc.Desktop.speakerMode.smallScreen.max.decoding.resolution',
  SVC_DESKTOP_DIVIDEMODE_MAX_LOOK_2_6: 'Device.ComCfg.Conf.Svc.Desktop.divideMode.2_6_screens.max.decoding.resolution',
  SVC_DESKTOP_DIVIDEMODE_MAX_LOOK_7_16: 'Device.ComCfg.Conf.Svc.Desktop.divideMode.7_16_screens.max.decoding.resolution',
  SVC_DESKTOP_DIVIDEMODE_MAX_LOOK_17_24: 'Device.ComCfg.Conf.Svc.Desktop.divideMode.17_24_screens.max.decoding.resolution',
  SVC_MOBILE_SOFT_ENCODE: 'Device.ComCfg.Conf.Svc.mobile.sEncoding.max.coding.resolution',
  SVC_MOBILE_HARD_ENCODE: 'Device.ComCfg.Conf.Svc.mobile.hEncoding.max.coding.resolution',
  SVC_MOBILE_SPEAKERMODE_MAX_LOOK: 'Device.ComCfg.Conf.Svc.mobile.Desktop.speakerMode.bigScreen.max.decoding.resolution',
  SVC_MOBILE_DIVIDEMODE_MAX_LOOK: 'Device.ComCfg.Conf.Svc.mobile.Desktop.divideMode.max.decoding.resolution',
  SVC_HIGHPERFORMANCE_MOBILE_SPEAKERMODE_MAX_LOOK:'Device.ComCfg.Conf.Svc.HighPerformance.mobile.Desktop.speakerMode.bigScreen.max.decoding.resolution',
  SVC_HIGHPERFORMANCE_MOBILE_DIVIDEMODE_MAX_LOOK:'Device.ComCfg.Conf.Svc.HighPerformance.mobile.Desktop.divideMode.max.decoding.resolution',

  MAX_IMAGE_COUNT: 5,

  MESSAGE_LIST_PAGE_SIZE: 15,
  MOBILE_MESSAGE_LIST_PAGE_SIZE: 15,

  "Device.ComCfg.IM.LimitText":"3000",
  "Device.ComCfg.IM.limitpic":"10240",
 
  "Device.ComCfg.IM.forbidFileExt":"bat;c;js",
  "Device.ComCfg.IM.perFragmentsize":"5",
  "Device.ComCfg.IM.limitBody":"2560",
  "Device.ComCfg.IM.MaxContact":"250",


  "Device.ComCfg.IM.offlineFileDisable":"7",
  "Device.ComCfg.IM.fileTransferSize":"1024",

  
  "Device.ComCfg.IM.msgReadReportTime":"60",
  "Device.ComCfg.IM.customFacesize":"2048",
  "Device.ComCfg.IM.archiveExpireDay":"30",
  "Device.ComCfg.IM.archiveTimingHour":"5",
  "Device.ComCfg.IM.archiveMaxDBsize":"30",

 
  "Device.ComCfg.CHR.enableCHR":"FALSE", 
  "Device.ComCfg.CHR.CHRAddress":"",
  "Device.ComCfg.CHR.CHRName":"",
  "Device.ComCfg.CHR.CHRPer":"300",
  "Device.ComCfg.CHR.CHRColPer":"60",


  "Device.ComCfg.Cwmp.UpgradeDownloadTimeout":"1800",


  CLOUDEC_FOR_PUBLISH_SERVER: "cloudec.huaweicloud.com",
  CLOUDEC_FOR_PUBLISH_PORT:"8443",
  

  MESSAGE_NOTIFY_TIMEOUT:8000,
  GROUP_NOTIFY_TIMEOUT:8000,
  MESSAGE_TOAST_TIMEOUT:3000,

  GROUP_NAME_NUM_LIMIT:50,
  GROUP_MANIFESTO_NUM_LIMIT:170,

  PRIVACY_VERSION_VALUE: "20180927",

  EAB_SEARCH_NUM:20,


  "Device.ComCfg.Conf.CreateDataConference": "1",
  "Device.UICfg.Conf.EnableAppShare": "1",
  "Device.UICfg.openRTNNetwork":'0',
  IT_WELINK_CLIENT_ID:"welink",


  SVC_WINDOW_MAX_DIVIDE_NUM_PC:16,
  SVC_WINDOW_MAX_NUM_BIGSMALL_PC:6,
  SVC_WINDOW_MAX_NUM_BIGSMALL_PC_MIN:3,
  SVC_WINDOW_MAX_DIVIDE_NUM_PHONE:3,
  SVC_WINDOW_PHONE_RATIO:2,     
  SVC_WINDOW_PHONE_FLAG:false, 
  SVC_WATCH_NOTIFY_FLAG:false,
  SVC_SHARPENING_SWITCH:true,
  SVC_WATCH_BITES_BY_CPUS:0, //根据CPU核数执行选看策略。0：CPU数和esight执行取小操作；1：以CPU为准；2：以esight配置为准
  
  
  TEMP_MEDIAX_ADDRESS: "bmeeting.huaweicloud.com",
  TEMP_MEDIAX_PORT: "443",


  BURIED_POST_ADDR: "",//"http://app.huawei.com/hwa-c/open/dc", // 生产 : "http://app.huawei.com/hwa-c/open/dc"  测试："http://nkweb-sit.huawei.com/hwa-c/open/dc"
  NEW_APP_NAME: "Huawei Meeting",//Workplace或者Huawei Meeting
  NEW_APP_CHINEASE_NAME: "华为会议",
  USER_LOG_MAX_FILES: 2,
  "Device.ComCfg.Conf.IsAllowRecord": "1" ,
  "Device.ComCfg.Conf.IsIdoBfcpRetransmission": "1", //ido重传开关，默认关闭
  ENABLE_HISTORY_CONF_LIST: 'Device.ComCfg.Conf.Svc.IsEnableHistoryConfList' //`会议历史记录,默认不启用
};
