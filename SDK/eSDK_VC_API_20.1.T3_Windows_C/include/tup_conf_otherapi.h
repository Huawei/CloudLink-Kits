#ifndef _TUP_CONF_OTHERAPI_H_
#define _TUP_CONF_OTHERAPI_H_

#include "tup_conf_otherdef.h"

#ifdef __cplusplus
	extern "C" {
#endif
	/*****************************************************************************
	�� �� ��  : tup_conf_get_server_time
	��������  : ��ȡ������ʱ��
	�������  : handle: ������				
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : CONF_MSG_SERVER_TIME
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_get_server_time(IN CONF_HANDLE handle);

	/*****************************************************************************
	�� �� ��  : tup_conf_setconfig
	��������  : ������������
	�������  : handle: ������
	pconfig: ����������Ϣ
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_setconfig(IN CONF_HANDLE handle, IN const TC_CONF_INIT_CONFIG* pconfig);

	/*****************************************************************************
	�� �� ��  : tup_conf_ping_request
	��������  : ����ָ���������������������ÿ�ε��ú���Ҫ�ȴ����ؽ��������ٴε��á�
	�������  : dst_ip_list: ��������ַ�б�
				num_ip: ��������ַ�б���
				pCallback: �ص�����
				nTimerOut: ��ʱʱ��,ֻ���Դ�����ֵ0��0xffffffff������1)��ֵ0xffffffff���ײ�ping������е�ms������֮�󣬷��ظ������ping�����Ϣ��
				2)��ֵ0���ײ�ping�����һms������֮���ٹ�500ms֮�ڼ�������㷵��ping�����Ϣ��
	�������  : pRetID: ���ص�PingID
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ͨ������pCallback����
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_ping_request(IN TUP_CHAR dst_ip_list[][TC_MAX_CONF_SERVER_IP], IN TUP_INT num_ip, IN ping_callback pCallback, IN TUP_UINT32 nTimerOut, OUT TUP_INT* pRetID,TUP_BOOL bUseTls);
	
	/*****************************************************************************
	�� �� ��  : tup_conf_ping_cancel
	��������  : ȡ������ָ�������������������
	�������  : nPingID: PingID��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ping_cancel(IN TUP_INT nPingID);

	/*****************************************************************************
	�� �� ��  : tup_conf_ping_stg_net
	��������  : Ping STG�б�������һ���ɹ���SVN��ַ				
	�������  : utf8ShareLibName:STG��̬������
				pStgInfo: STG��ز�����
				svn_ping_callback���ص�����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_ping_stg_net(TUP_CHAR *utf8ShareLibName, const TC_STG_REGISTER_INFO_S *pStgInfo, TUP_UINT32 ncount, svn_ping_callback pCallback);
	
	/*****************************************************************************
	�� �� ��  : tup_conf_get_attendee_info
	��������  : �������ʱ���ͻ���ͨ���ýӿ��������������ߵ�����¼			
	�������  : handle: ������
				
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_get_attendee_info(IN CONF_HANDLE handle);				//��������У��û�������¼
	/*****************************************************************************
	�� �� ��  : tup_conf_start_stg_net
	��������  : ����STG���ܣ�������STG��ز������ýӿڱ�����Ӧ�õ�һ�ε���conf_join
				֮ǰ�����ã�����ʱ����ÿ�������޷�Ԥ֪�ĺ����
	�������  : utf8ShareLibName:STG��̬������
				pStgInfo: STG��ز�����
				ulLocalAddress:���ص�ַ����0��ʾ���ϲ��ʼ��STG��0��ʾ���²��ʼ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_start_stg_net(IN TUP_CHAR* utf8ShareLibName, IN const TC_STG_REGISTER_INFO_S* pStgInfo, IN TUP_ULONG ulLocalAddress);

	/*****************************************************************************
	�� �� ��  : tup_conf_stop_stg_net
	��������  : ֹͣSTGN���ܣ������л����˳���Ӧ���˳�֮ǰ�����������øýӿڡ�
	�������  : ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_VOID tup_conf_stop_stg_net(void);

	/*****************************************************************************
	�� �� ��  : tup_conf_start_svn_net
	��������  : ����SVN���ܣ�������SVN��ز������ýӿڱ�����Ӧ�õ�һ�ε���conf_join
				֮ǰ�����ã�����ʱ����ÿ�������޷�Ԥ֪�ĺ����
	�������  : utf8ShareLibName:SVN��̬������
				pSvnInfo: SVN��ز�����
				ulLocalAddress:���ص�ַ����0��ʾ���ϲ��ʼ��SVN��0��ʾ���²��ʼ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT tup_conf_start_svn_net(IN TUP_CHAR* utf8ShareLibName, IN const TC_SVN_REGISTER_INFO_S* pSvnInfo, IN TUP_ULONG ulLocalAddress);



	/*****************************************************************************
	�� �� ��  : tup_conf_stop_svn_net
	��������  : ֹͣSVN���ܣ������л����˳���Ӧ���˳�֮ǰ�����������øýӿڡ�
	�������  : ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_VOID tup_conf_stop_svn_net(void);


	//CONF_IPPHONE��Ҫʹ�õ���API
	/*****************************************************************************
	�� �� ��  : tup_conf_hme_init
	��������  : ��ֵ��android HME_VIDEO �����
	�������  : handle: ������
				pJaveVm: java����� 
				pContent: java��������  
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : ��
	*****************************************************************************/
	TUP_API TUP_VOID  tup_conf_hme_init(IN CONF_HANDLE handle, IN TUP_VOID* pJaveVm, IN TUP_VOID* pContent);
	/*****************************************************************************
	�� �� ��  : tup_conf_hme_set_ipcindex
	��������  : ����8950 IPCIndex����tup_conf_hme_init֮����������
	�������  : handle: ������
				dwIPCIndex: 8950 IPC ���к�
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : ��
	*****************************************************************************/
	TUP_API TUP_VOID  tup_conf_hme_set_ipcindex(IN CONF_HANDLE handle, IN TUP_UINT32 dwIPCIndex);	
	///CONF_IPPHONE��Ҫʹ�õ���API

	/*****************************************************************************
	�� �� ��  : tup_conf_compoent_full_screen
	��������  : �ǲ���ȫ������
	�������  : handle: ������
				comid: ���ID
				bFull: �Ƿ�ȫ��
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_component_full_screen(IN CONF_HANDLE handle, IN COMPONENT_IID comid, IN TUP_BOOL bFull);
	/*****************************************************************************
	�� �� ��  : tup_conf_component_switch
	��������  : ������سɹ��󣬽������л����֪ͨ�ӿ�
	�������  : handle: ������
				comid: ���ID
				bStatus: ״̬��ȡֵ��TRUE,����ָ�������FALSE,�ر����
				nDataLen: ���ݳ���
				lpData: ��������
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : CONF_MSG_ON_COM_STATUS_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_component_switch(IN CONF_HANDLE handle, IN COMPONENT_IID comid, IN TUP_UINT32 bStatus, IN TUP_UINT32 nDataLen, IN TUP_UINT8 * lpData);
	/*****************************************************************************
	�� �� ��  : tup_conf_update_model
	��������  : ���»���ģʽ����������ģʽ������ģʽ
	�������  : handle: ������
				dwModel: ����ģʽ
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : CONF_MSG_ON_CONF_MODEL_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_update_model(IN CONF_HANDLE handle, IN TUP_UINT32 dwModel);
	/*****************************************************************************
	�� �� ��  : tup_conf_update_layout
	��������  : ���»��鲼��
	�������  : handle: ������
				dwLayout: ���鲼��
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : CONF_MSG_ON_LAYOUT_UPDATE
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_update_layout(IN CONF_HANDLE handle, IN TUP_UINT32 dwLayout);
	/*****************************************************************************
	�� �� ��  : tup_conf_suspend
	��������  : �����ָ����飬����󲻽���ʵʱ���ݣ��޷�����ͨ������Ҫ�����������ӻ��鳡��
	�������  :  handle: ������
				 suspend: TRUE: ����FALSE:ȡ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_suspend(IN CONF_HANDLE   handle, IN TUP_BOOL suspend); 	
	/*****************************************************************************
	�� �� ��  : tup_conf_user_request_pinnum
	��������  : ������û���PIN�룬��PIN���ɷ��������䣬���ں͵绰�û��İ�
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : CONF_MSG_ON_PHONE_GET_PIN
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_user_request_pinnum(IN CONF_HANDLE handle);	
	/*****************************************************************************
	�� �� ��  : tup_conf_user_set_privilege
	��������  : �����û�Ȩ��
	�������  : handle: ������
				userid: �û�ID
				nPriv: Ȩ�ޣ�Ȩ��ֵ��ISVӦ�ò㶨�壬���Խ��С����������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : CONF_MSG_ON_PRIVILEGE_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_user_set_privilege(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 nPriv);

	//Http ���ʽӿ�
	/*****************************************************************************
	�� �� ��  : tup_conf_web_open_http
	��������  : ��web�������ӡ�����һ����ʼ���ӿڣ���������Web�йؽӿ�ǰ������ô˽ӿ�
	�������  : ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_open_http();
	/*****************************************************************************
	�� �� ��  : tup_conf_web_close_http
	��������  : �ر�web�������ӡ��첽����ʱ�����ܵ���web_xx�ӿں����̵��øú���
	�������  : ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_close_http();
	/*****************************************************************************
	�� �� ��  : tup_conf_web_get_https
	��������  : ����httpsЭ��
	�������  : Web_svr_adddr: ���ʵ�web��������ַ
				nPort: ���ʵĶ˿ں�
				Url_obj: ���ʵ�web������url
				pbuffer: ���ڷ��ؽ���Ļ�������ָ��
				len: �������ĳ���
	�������  : pbuffer: ���صķ��ʵĽ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_get_https(IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, OUT TUP_CHAR* pbuffer, IN TUP_INT32 len);
	/*****************************************************************************
	�� �� ��  : tup_conf_web_post_http
	��������  : ͬ������post http��https����
	�������  : web_svr_adddr:���ʵ�web��������ַ
				nPort: ���ʵĶ˿ں�
				url_obj: ���ʵ�web������url
				post_data: post ������
				pbuffer: ���ڷ��ؽ���Ļ�������ָ��
				len: �������ĳ���
				Flag: �������ã���ο�Window Net ����ѡ��
	�������  : pbuffer: ���صķ��ʵĽ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/
	TUP_API TUP_RESULT  tup_conf_web_post_http(IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN const TUP_CHAR* head_data, OUT TUP_CHAR * pbuffer, IN TUP_INT32 len, IN TUP_UINT32 flag);

	// �첽����
	/*****************************************************************************
	�� �� ��  : tup_conf_web_set_http_async_callback
	��������  : �����첽���ûص��ӿ�
	�������  : callback: �ص��ӿ�
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_set_http_async_callback(IN url_async_callback callback); 
	/*****************************************************************************
	�� �� ��  : tup_conf_web_get_async_http
	��������  : �첽����httpЭ��GET����
	�������  : msg_id�����ֲ�ͬ�����첽�ӿڵ���ϢID
				web_svr_adddr�����ʵ�web��������ַ
				nPort�����ʵĶ˿ں�
				url_obj�����ʵ�web������url
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_get_async_http(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR* url_obj);
	/*****************************************************************************
	�� �� ��  : tup_conf_web_post_async_http
	��������  : �첽����post http���ʻ�https����
	�������  : msg_id: Ϊ�����ֶ���첽���õ���ϢID
				web_svr_adddr: ���ʵ�web��������ַ
				nPort: ���ʵĶ˿ں�
				url_obj: ���ʵ�web������url
				Post_data: Post������
				Flag: �������ã���ο�Window Net ����ѡ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_post_async_http(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN TUP_UINT32 flag);

    /*****************************************************************************
	�� �� ��  : ttup_conf_web_post_async_http_with_header
	��������  : �첽����post http���ʻ�https����
	�������  : msg_id: Ϊ�����ֶ���첽���õ���ϢID
				web_svr_adddr: ���ʵ�web��������ַ
				nPort: ���ʵĶ˿ں�
				url_obj: ���ʵ�web������url
				Post_data: Post������
				Flag: �������ã���ο�Window Net ����ѡ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_web_post_async_http_with_header(IN TUP_UINT32 msg_id, IN const TUP_CHAR * web_svr_addr, IN TUP_INT32 nPort, IN const TUP_CHAR * url_obj, IN const TUP_CHAR* post_data, IN TUP_UINT32 flag,IN TUP_CHAR *header);


	
	/**********************************AS**************************************/
	/*****************************************************************************
	�� �� ��  : tup_conf_as_checkmddriver
	��������  : ���MD�����Ƿ�װ
	�������  : handle: ������
	�������  : pbInstalled: �����Ƿ�װ
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_checkmddriver(IN CONF_HANDLE handle, OUT TUP_BOOL *pbInstalled);
	/*****************************************************************************
	�� �� ��  : tup_conf_as_installmddriver
	��������  : ��װMD����
	�������  : handle: ������
	�������  : pbInstalled: �����Ƿ�װ�ɹ�
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_installmddriver(IN CONF_HANDLE handle, OUT TUP_BOOL *pbInstalled);//
	
	//iosӦ�ù���	
	/*****************************************************************************
	�� �� ��  : tup_conf_as_view_create
	��������  : iosӦ�ù����У�����������ʾ��
	�������  : handle: ������
				width: ������ʾ���Ŀ��
				height: ������ʾ���ĸ߶�
				bitCount: ������ʾ��ͼ��ÿ�����ص�λ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_create(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height, IN TUP_UINT32 bitCount);
	/*****************************************************************************
	�� �� ��  : tup_conf_as_view_destroy
	��������  : ����������ʾ��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_destroy(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_as_view_update
	��������  : ����������ʾ������Ϣ
	�������  : handle: ������
				width: ������ʾ���Ŀ��
				height: ������ʾ���ĸ߶�
				bitCount: ������ʾ��ͼ��ÿ�����ص�λ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_update(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height, IN TUP_UINT32 bitCount);
	/*****************************************************************************
	�� �� ��  : tup_conf_as_view_updata_data
	��������  : ����������ʾ����ͼ������
	�������  : handle: ������
				data: ������ʾ����ͼ������
				data_len: ͼ�����ݵĳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT	tup_conf_as_view_updata_data(IN CONF_HANDLE handle, IN TUP_UINT8* data, IN TUP_INT32 data_len);


	/**********************************��Ƶģ��**************************************/		


	/*****************************************************************************
	�� �� ��  : tup_conf_audio_enter_private_chat���˽ӿڲ������ڵ绰���飩
	��������  : ��������˽��
	�������  : handle: ������
				userid: ˽�ĶԷ����û�ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_enter_private_chat(IN CONF_HANDLE handle, IN TUP_UINT32 userid);//�ƶ�ƽ̨��֧��
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_leave_private_chat
	��������  : �뿪����˽��
	�������  : handle: ������
				userid: ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_leave_private_chat(IN CONF_HANDLE handle, IN TUP_UINT32 userid);//�ƶ�ƽ̨��֧��


	/*****************************************************************************
	�� �� ��  : tup_conf_audio_notify_cmd
	��������  : ���Ϳ���MIC����
	�������  : handle: ������
				userid: �û�ID
				cmd: ��������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_ACTION
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_notify_cmd(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN Audio_CMD cmd);
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_set_max_open_device
	��������  : ���û᳡���������򿪵�mic�豸����
	�������  : handle: ������
				nMax: �᳡���������򿪵�mic�豸����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_MAX_OPEN_DEVICE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_set_max_open_device(IN CONF_HANDLE handle, IN TUP_INT32 nMax);
	
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_get_level
	��������  : �õ�mic��������������������������Ƶ��
	�������  : deviceType: �豸����, ��˷����������
	�������  : pLevel: ��������ֵ
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_get_level(OUT TUP_UINT32 *pLevel, IN TUP_INT32 deviceType);

	//��������
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_request_voice_assistant
	��������  : ����������������ڵ绰����ģʽ��ʹ��
	�������  : handle: ������
				pVoiceAssistantNo: �����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_request_voice_assistant(IN CONF_HANDLE handle, IN const TUP_CHAR* pVoiceAssistantNo);
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_release_voice_assistant
	��������  : �ͷ���������
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_release_voice_assistant(IN CONF_HANDLE handle);

	//�����ӿڣ��ڷ���������ģʽ������
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_release_mgw_channel
	��������  : �ͷ���MGW(ý������)������ͨ��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_release_mgw_channel(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_request_mgw_channel
	��������  : ������MGW(ý������)������ͨ��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_NEGOTIATE_CODEC
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_request_mgw_channel(IN CONF_HANDLE handle);

	//
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_change_device_status_UC
	��������  : �ı��豸��MIC��״̬
	�������  : handle: ������
				deviceType: �豸����
				deviceStatus: �豸״̬
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_change_device_status_UC(IN CONF_HANDLE handle, IN TUP_INT32 deviceType, IN TUP_INT32 deviceStatus);
	/*****************************************************************************
	�� �� ��  : tup_conf_audio_send_cmd_remote_uc
	��������  : ����Զ�̿�������
	�������  : handle: ������
				userid: �û�ID
				cmd: ��������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_AUDIO_ON_AUDIO_DEVICE_STATUS_CHANGE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_audio_send_cmd_remote_uc(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN Audio_CMD cmd);

	/*****************************************************************************
	�� �� ��  : tup_conf_video_set_max_count
	��������  : ���û����������Ƶ����ȱʡֵ��6���������nMaxOpenVideoΪ0����ô
				�����ó�ȱʡֵ6�����ֵ16����һ�������У�ֻ�ܵ���һ�Σ�����������˵Ļ�������
				���˵���
	�������  : handle: ������
				max_count: ����������Ƶ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_VIDEO_ON_MAX_OPENVIDEO
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_max_count(IN CONF_HANDLE handle, IN TUP_UINT32 max_count);

	
	/*****************************************************************************
	�� �� ��  : tup_conf_video_set_lowstream_resolution
	��������  : ������Ƶ˫��ʱ�����ķֱ��ʡ���ȱʡ�Ļ�����������ó�QQVGA��160*120����
	�������  : handle: ������				
				width: Ӧ�ò����õ����Ŀ�
				height: Ӧ�ò����õ����ĸ�
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_lowstream_resolution(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height);
	
	/*****************************************************************************
	�� �� ��  : tup_conf_video_set_encode_maxresolution
	��������  : ���ñ�������ֱ��ʣ����δ������ô�Ͳ���ȱʡֵ��WindowsϵͳΪ1920*1080��Android��IOS�汾Ϊ640*480
	�������  : handle: ������
				width: ��������ֱ��ʵĿ�
				height: ��������ֱ��ʵĸ�
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_encode_max_resolution(IN CONF_HANDLE handle, IN TUP_UINT32 width, IN TUP_UINT32 height);

	/*****************************************************************************
	�� �� ��  : tup_conf_video_getthirdcapdevice_property
	��������  : �õ��������ɼ���Ƶ�����豸����ֵ
	�������  : handle: ������
				userid: �û�ID
				deviceid: �豸ID				
	�������  : pVideoThirdCapProperty: �������ɼ���Ƶ�����豸����ֵ
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_get_thirdcapdevice_property(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, OUT TC_VIDEO_THIRDCAPTURE_PROPERTY* pVideoThirdCapProperty);

	/*****************************************************************************
	�� �� ��  : tup_conf_video_setthirdcapdevice_property
	��������  : ���õ������ɼ���Ƶ�����豸����ֵ
	�������  : handle: ������
				userid: �û�ID
				deviceid: �豸ID
				bDefault: �Ƿ����ȱʡֵ
				pVideoThirdCapProperty: �������ɼ���Ƶ�����豸����ֵ
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_set_thirdcapdevice_property(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN TUP_UINT32 deviceid, IN TUP_BOOL bDefault, IN TC_VIDEO_THIRDCAPTURE_PROPERTY* pVideoThirdCapProperty);


	/*****************************************************************************
	�� �� ��  : tup_conf_video_preview_unloadthirdcapture
	��������  : �ͷŵ������ɼ���̬��
	�������  : ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_video_preview_unloadthirdcapture();


	/**********************************file component**************************************/		
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_upload_file
	��������  : �ϴ��ļ���ĳ���û��������û����ϴ����ļ����ļ��б��еı�ʶID��ͨ���ص���Ϣ����
	�������  : handle: ������
				userid: �û�ID��Ϊ0ʱ��ʾ�ϴ��������������û�
				pszFileName: UTF8���룬�ļ�ȫ·������󳤶�Ϊ245��ָ����ļ���Ҫ���ڣ��ܽ��ж�ȡ���ʣ�����Ϊ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_FT_ON_FILE_INFO
				COMPT_MSG_FT_ON_PROGRESS
				COMPT_MSG_FT_ON_END
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_upload_file(IN CONF_HANDLE handle, IN TUP_UINT32 userid, IN const TUP_CHAR* pszFileName); 
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_upload_file_to_many
	��������  : �ϴ��ļ���ָ���Ķ���û����ϴ����ļ����ļ��б��еı�ʶID��ͨ���ص���Ϣ����
	�������  : handle: ������
				pUserID: �û�ID���飬��ʶ�ļ���Ҫ�������û�
				nNum: �û�ID����ĳ���
				pszFileName: UTF8���룬�ļ�ȫ·������󳤶�Ϊ245��ָ����ļ���Ҫ���ڣ��ܽ��ж�ȡ���ʣ�����Ϊ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_FT_ON_FILE_INFO
				COMPT_MSG_FT_ON_PROGRESS
				COMPT_MSG_FT_ON_END
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_upload_file_to_many(IN CONF_HANDLE handle, IN TUP_UINT32 *pUserID, IN TUP_INT32 nNum, IN const TUP_CHAR* pszFileName);
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_cancel_uploading
	��������  : ȡ���ļ��ϴ��������������ļ��б��ж�Ӧ�ļ���Ϣ���ɾ���������ڷ������϶�Ӧ�����ϴ������ļ����ݽ���ɾ��
	�������  : handle: ������
				nFileHandle: �ļ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_FT_ON_FILE_REMOVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_cancel_uploading(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
 	/*****************************************************************************
	�� �� ��  : tup_conf_ft_remove_file
	��������  : ɾ��ָ���ļ�������������ļ��б��ж�Ӧ�ļ���Ϣ���ɾ���������ڷ������϶�Ӧ�ļ����ݽ�ɾ����
	�������  : handle: ������
				nFileHandle: �ļ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_FT_ON_FILE_REMOVE
	*****************************************************************************/	
    TUP_API TUP_RESULT  tup_conf_ft_remove_file(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_download_file
	��������  : �����ļ����������û�ָ����·�����ļ�����
	�������  : handle: ������
				nFileHandle: �ļ����
				pszSaveName: UTF8���룬Ҫ������ļ�ȫ·������󳤶�Ϊ245���ļ�·���ܽ���д����ʡ�����ͬ���ļ�����������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_download_file(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle, IN const TUP_CHAR* pszSaveName);
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_cancel_downloading
	��������  : ��ֹ�ļ�����
	�������  : handle: ������
				nFileHandle: �ļ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_cancel_downloading(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_pause
	��������  : ��ͣ�ϴ��������ļ�����ͨ���˽ӿڱ���ͣ������ļ�����ͨ��conf_ft_resume�ӿ����ָ���
	�������  : handle: ������
				nFileHandle: �ļ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_pause(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ft_resume
	��������  : �ָ���conf_ft_pause�ӿ���ͣ�ϴ��������ļ�
	�������  : handle: ������
				nFileHandle: �ļ����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ft_resume(IN CONF_HANDLE handle, IN TUP_UINT32 nFileHandle);

	/**********************************ͶƱģ��**************************************/		
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_new_poll
	��������  : �½��ʾ������ʾ�ID��������POLLING_INVALID_ID��-1��ʱΪ��ЧID
	�������  : handle: ������
				name: �ʾ�����UTF8����
	�������  : ��
	�� �� ֵ  : �ʾ�ID�����ΪPOLLING_INVALID_ID��-1������ʾ�ʾ���ʧ�ܣ����ΪС��-1�������������ʾ����ɹ�
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT  tup_conf_polling_new_poll(IN CONF_HANDLE handle, IN const TUP_CHAR * name);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_new_question
	��������  : �½����⡣��������ID������ID��ЧֵΪ������
	�������  : handle: ������
				pollId: �����ʾ�ID
				type: �������ͣ�ȡֵ��
									QTYPE_SINGLE_CHOICE	//��ѡ��
									QTYPE_MULTI_CHOICE	//��ѡ��
									QTYPE_QA			//�ʴ���
				pQuesContent: �������ݣ�UTF8����
				pOptionContents: ָ�����飬����Ԫ��Ϊָ������ѡ�utf8���룩��ָ�롣������ΪNULL��
				opCount: ����ѡ��������Ǹ�������������pOptionContents��ָ���ָ������ĳ��ȱ���һ�£�������ܵ������Crash��
	�������  : ��
	�� �� ֵ  : ����ID���������POLLING_INVALID_ID��-1������ʾ���ⴴ��ʧ�ܣ�����������������������ⴴ���ɹ�
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT  tup_conf_polling_new_question(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN QuestionType type, IN const TUP_CHAR *pQuesContent, IN const TUP_CHAR **pOptionContents, IN TUP_INT32 opCount);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_reg_global_params
	��������  : ����ȫ�ֲ�����ID����������Щ����������Ҫ�������ϴ���ġ�������ᴴ����Ӧ�����Ĳ�������Ϊ��Щ�����Ĵ��䴴������ͨ��
				����˺������յ�ͶƱ������سɹ��Ļص���Ϣ�󱻵��ã��������ط����ÿ��ܻ����𲻿�Ԥ֪�ĺ��
	�������  : handle: ������
				pIds: ȫ�ֲ���ID����
				coutn: ȫ�ֲ�������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_reg_global_params(IN CONF_HANDLE handle, IN TUP_UINT *pIds, IN TUP_INT32 count);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_reg_poll_params
	��������  : �����ʾ����ID����������Щ����������Ҫ�������ϴ���ġ��������Ϊÿ���ʾ�����Ӧ�����Ĳ�������Ϊ��Щ�����Ĵ��䴴������ͨ��
				����˺����ڵ���conf_load_component����ͶƱ�������TC_OK�󱻵��ã��������ط����ÿ��ܻ����𲻿�Ԥ֪�ĺ��
	�������  : handle: ������
				pIds: �ʾ����ID����
				coutn: �ʾ��������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_reg_poll_params(IN CONF_HANDLE handle, IN TUP_UINT *pIds, IN TUP_INT32 count);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_update_global_param
	��������  : ����ȫ�ֲ���
	�������  : handle: ������
				paramId: ȫ�ֲ���ID
				pData: ȫ�ֲ�������ָ�루�ò�������ΪNULL���������ȫ�ֲ�����
				dataLen: ȫ�ֲ������ݳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_POLLING_ON_GLOBAL_PARAM_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_update_global_param(IN CONF_HANDLE handle, IN TUP_UINT32 paramId, IN const TUP_VOID* pData, IN TUP_INT32 dataLen);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_update_poll_param
	��������  : �����ʾ����
	�������  : handle: ������
				paramId: ȫ�ֲ���ID
				pData: �ʾ��������ָ�루�ò�������ΪNULL���������ȫ�ֲ�����
				dataLen: �ʾ�������ݳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_POLLING_ON_POLL_PARAM_UPDATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_update_poll_param(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_UINT32 paramId, IN const TUP_VOID* pData, IN TUP_INT32 dataLen);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_send_poll_data
	��������  : �����ʾ����ݡ�����ʾ������Ѿ����ͣ�������ʾ�����
				����ǵ�һ�ε��ô˺������ʾ�IDΪconf_polling_new_poll�����ķ���ֵ����ЧֵΪС��-1�ĸ������������ʾ����ݷ��͵����������ʾ�ID��Ϊ������
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_POLLING_ON_RECV_POLL
				COMPT_MSG_POLLING_ON_POLL_ID_CHANGED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_send_poll_data(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_commit_answers
	��������  : �ύ��
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_POLLING_ON_RECV_ANSWER
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_commit_answers(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_poll_title
	��������  : �����ʾ���⡣�ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				pTitle:  �ʾ���⣬utf8����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_poll_title(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN const TUP_CHAR* pTitle);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_poll_title
	��������  : ��ȡ�ʾ����
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : ָ���ʾ�����ָ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API const TUP_CHAR*  tup_conf_polling_get_poll_title(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_poll_userdata
	��������  : �����ʾ��û����ݡ��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				pData: ָ���û����ݵ�ָ�� 
				len: �û����ݵĳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_poll_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_VOID* pData, IN TUP_UINT32 len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_poll_userdata_len
	��������  : ��ȡ�ʾ��û����ݵĳ��ȡ����ڷ���ռ��ȡ�û����ݣ�����0��ʾ���û�����
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : �ʾ��û����ݵĳ���
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_poll_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_poll_userdata
	��������  : ��ȡ�ʾ��û�����
	�������  : handle: ������
				pollId: �ʾ�ID
				pData: ���ڴ洢�û����ݵĻ�����
				len: ���������ʾ��û����ݳ��ȣ���������û����ݳ��ȴ������賤�ȣ�����û�����ʵ�ʳ��ȣ�
	�������  : pData: �ʾ��û�����
				lent: �û�����ʵ�ʳ���
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_poll_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_delete_poll
	��������  : ɾ��ָ���ʾ�����ʾ�����δ���͵�����������ɾ���������ݣ�����ѷ��͵�����������ɾ���������ݼ���������
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_POLLING_ON_DELETE_POLL
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_delete_poll(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_poll_count
	��������  : ��ȡ�ʾ�����
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_poll_count(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_pollid_by_index
	��������  : ͨ��������ȡ�ʾ�ID�������ŷ�ΧΪ��0~�ʾ�����-1���������˷�Χ����POLLING_INVALID_ID��-1��
	�������  : handle: ������
				index: �����ţ���Χ��0~�ʾ�����-1��
	�������  : ��
	�� �� ֵ  : �ʾ�ID
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT	 tup_conf_polling_get_pollid_by_index(IN CONF_HANDLE handle, IN TUP_INT32 index);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_count
	��������  : ��ȡָ���ʾ��е���������
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : �ʾ�����������
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_ques_count(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_poll_creator_userid
	��������  : ��ȡָ���ʾ�Ĵ������û�ID
	�������  : handle: ������
				pollId: �ʾ�ID
	�������  : ��
	�� �� ֵ  : ָ���ʾ�Ĵ������û�ID
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_polling_get_poll_creator_userid(IN CONF_HANDLE handle, IN TUP_INT32 pollId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_question_type
	��������  : �����������͡��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				type: ��������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_type(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN QuestionType type);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_question_content
	��������  : �����������ݡ��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				utf8Content: ��������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_content(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN const TUP_CHAR *utf8Content);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_question_options
	��������  : ��������ѡ��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				options: ��������ָ�����飬����Ԫ��Ϊָ������ѡ�utf8���룩��ָ�롣������ΪNULL����������������ݣ�
				count: ����ѡ�����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_options(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN const TUP_CHAR **options, IN TUP_INT32 count);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_ques_userdata
	��������  : ���������û����ݡ��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				pData: �����û����ݣ�����ΪNULL����ʾ��������û����ݣ�
				len: �����û����ݳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_ques_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_VOID* pData, IN TUP_UINT32 len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_delete_question
	��������  : ɾ��ָ�����⡣�ò���ֻ�޸ı�������
	�������  : pollId: �ʾ�ID
				quesId: ����ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_delete_question(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_userdata_len
	��������  : ��ȡ�����û����ݵĳ��ȡ����ڷ���ռ��ȡ�û����ݣ�����0��ʾ���û�����
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
	�������  : ��
	�� �� ֵ  : �û����ݵĳ���
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_ques_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_userdata
	��������  : ��ȡָ�������û�����
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				pData: ָ�����ڴ�������û����ݻ�������ָ��
				len: �������������û����ݳ���(��������û����ݳ��ȴ���ʵ�ʳ��ȣ�����û�����ʵ�ʳ���)
	�������  : pData: �����û�����
				len: ����û�����ʵ�ʳ���
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_ques_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_type
	��������  : ��ȡ��������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
	�������  : ��
	�� �� ֵ  : ��������
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API QuestionType  tup_conf_polling_get_ques_type(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_content
	��������  : ��ȡ��������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
	�������  : ��
	�� �� ֵ  : ��������ָ�룬��ȡʧ�ܷ���NULL
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API const TUP_CHAR*  tup_conf_polling_get_ques_content(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_ques_options
	��������  : ��ȡ����ѡ�������ѡ������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID				
	�������  : pCount: ����ѡ������
	�� �� ֵ  : ����ѡ��ָ�����飬��ȡʧ�ܷ���NULL
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API const TUP_CHAR**  tup_conf_polling_get_ques_options(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, OUT TUP_UINT* pCount);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_quesid_by_index
	��������  : ͨ��������ȡָ���ʾ��е�����ID�������ŷ�ΧΪ��1~����������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID	
				index: ���������š���ΧΪ��1~����������
	�������  : ��
	�� �� ֵ  : ����ID
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT	tup_conf_polling_get_quesid_by_index(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 index);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_set_question_answer
	��������  : ��������𰸡��ò���ֻ�޸ı�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				pData: �����ݣ�����ȡNULL����ʾ��մ����ݣ�
				len: �����ݳ���
				pUserData: ���û����ݣ�����ȡNULL����ʾ����û����ݣ�
				userDataLen: ���û����ݳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_set_question_answer(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_CHAR* pData, IN TUP_INT32 len, IN TUP_VOID* pUserData, IN TUP_UINT32 userDataLen);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_answer_userdata_len
	��������  : ��ȡ���û����ݵĳ��ȣ����ڷ���ռ��ȡ�û����ݣ�����0��ʾ���û�����
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				user_id: �û�ID
	�������  : ��
	�� �� ֵ  : �û����ݵĳ��ȣ�0��ʾ���û����ݣ�
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_answer_userdata_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_answer_userdata
	��������  : ��ȡ�𰸵��û�����
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				user_id: �û�ID
				pData: ���ڴ�Ŵ��û����ݵĻ�����ָ��
				len: �������Ĵ��û����ݳ���(��������û����ݳ��ȴ���ʵ�ʳ��ȣ�����û�����ʵ�ʳ���)
	�������  : pData: ���û�����
				len: ����û�����ʵ�ʳ���
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_answer_userdata(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_question_answer_len
	��������  : ��ȡ�𰸳��ȡ����ڷ���ռ��ȡ�����ݣ�����0��ʾ������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				user_id: �û�ID
	�������  : �𰸵ĳ���
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_INT32	 tup_conf_polling_get_question_answer_len(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_get_question_answer
	��������  : ��ȡָ�������
	�������  : handle: ������
				pollId: �ʾ�ID
				quesId: ����ID
				user_id: �û�ID
				pData: ���ڴ�Ŵ����ݵĻ�����ָ��
				len: �������Ĵ����ݳ���(��������û����ݳ��ȴ���ʵ�ʳ��ȣ����������ʵ�ʳ���)
	�������  : pData: ������
				len: ����û���ʵ�ʳ���
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_get_question_answer(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN TUP_INT32 quesId, IN TUP_UINT32 user_id, OUT TUP_VOID* pData, OUT TUP_UINT* len);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_save_poll
	��������  : ���浥���ʾ�(���ʾ�����Ǳ����ʾ�������ʾ�)
	�������  : handle: ������
				pollId: �ʾ�ID
				filename: �����ļ�����utf8����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_poll(IN CONF_HANDLE handle, IN TUP_INT32 pollId, IN const TUP_CHAR* filename);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_save_polls_all
	��������  : ����ȫ���ʾ����������ʾ�������ʾ�
	�������  : handle: ������
				filename: �����ļ�����utf8����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_polls_all(IN CONF_HANDLE handle, IN const TUP_CHAR* filename);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_save_local_polls
	��������  : ���汾�أ�δ���͵����������ʾ�����crash������᱾���ʾ����ݻָ�
	�������  : handle: ������
				filename: �����ļ�����utf8����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_save_local_polls(IN CONF_HANDLE handle, IN const TUP_CHAR* filename);
	/*****************************************************************************
	�� �� ��  : tup_conf_polling_load_from_file
	��������  : ���ļ������ʾ�
	�������  : handle: ������
				filename: �����ļ�����utf8����
	�������  : pollCount: �����ʾ����
				pollIds: ָ��һ���������е����ʾ�ID������
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_polling_load_from_file(IN CONF_HANDLE handle, IN const TUP_CHAR* filename, OUT TUP_UINT *pollCount, OUT TUP_UINT32 **pollIds);


	/**********************************����ģ��**************************************/		
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_sendmsg
	��������  : ���ͼ�ʱ��Ϣ
	�������  : handle: ������
				nType: ��Ϣ���ͣ�ȡֵ��
										CHAT_TYPE_PUBLIC   //������ʱ��Ϣ
										CHAT_TYPE_GROUP    //һ��һ��ʱ��Ϣ
										CHAT_TYPE_PRIVATE  //Ⱥ�鼴ʱ��Ϣ
				nUserID	:һ��һ��ʱ��ϢʱΪ�������û�ID��������ʱ��Ϣʱ���ԣ�Ⱥ�鼴ʱ��ϢʱΪȺ��ID
				lpdata: ��Ϣ����
				nLen: ��Ϣ���ݳ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_RECV_MSG
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_sendmsg(IN CONF_HANDLE handle, IN TUP_INT32 nType, IN TUP_UINT32 userid, IN TUP_CHAR* lpdata, IN TUP_INT32 nLen);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_create_group
	��������  : ����Ⱥ��
	�������  : handle: ������
				pszGroupName: ���������31���ַ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_GROUP_CREATE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_create_group(IN CONF_HANDLE handle, IN const TUP_CHAR* pszGroupName);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_remove_public_msg
	��������  : ɾ��ָ��������ʱ��Ϣ
	�������  : handle: ������
				nFromUserid: ��Ϣ�������û�ID
				nSequenceNmuber: ������Ϣ���кš���Ϊ0ʱ����ʾɾ����IDΪnFromUserid���û����͵����к�ΪnSequenceNumber�Ĺ�����ʱ��Ϣ��Ϊ0ʱ����ʾɾ��IDΪnFromUserid���û����͵����й�����ʱ��Ϣ
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_PUBLIC_MSG_REMOVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_remove_public_msg(IN CONF_HANDLE handle, IN TUP_UINT32 nFromUserid, IN TUP_UINT16 nSequenceNmuber);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_destroy_group
	��������  : ����Ⱥ�顣ֻ��Ⱥ�鴴�����ܵ��ô˽ӿ�
	�������  : handle: ������
				nGroupID: Ⱥ��ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_GROUP_DESTROY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_destroy_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_join_group(�˽ӿڱ�����Ŀǰû��ʵ��)
	��������  : ����Ⱥ��
	�������  : handle: ������
				nGroupID: Ⱥ��ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_join_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_leave_group
	��������  : �뿪Ⱥ�顣Ⱥ���Ա����Ⱥ�鴴���ߣ��ܵ��ô˽ӿ�
	�������  : handle: ������
				nGroupID: Ⱥ��ID
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_leave_group(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_invite
	��������  : �����û�����Ⱥ�顣ֻ��Ⱥ�鴴�����ܵ��ô˽ӿ�
	�������  : handle: ������
				nGroupID: Ⱥ��ID
				aryUsers: ���������Ⱥ����û�ID����
				nCnt: aryUsers��Ԫ�ظ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_GROUP_INVITE
				COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_invite(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID, IN TUP_UINT32 *aryUsers, IN TUP_INT32 nCnt);
	/*****************************************************************************
	�� �� ��  : tup_conf_chat_kickout
	��������  : ���û��߳�Ⱥ�顣ֻ��Ⱥ�鴴�����ܵ��ô˽ӿ�
	�������  : handle: ������
				nGroupID: Ⱥ��ID
				aryUsers: ���߳�Ⱥ����û�ID����
				nCnt: aryUsers��Ԫ�ظ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_CHAT_ON_GROUP_KICKOUT
				COMPT_MSG_CHAT_ON_GROUP_INFO_MODIFIED
				COMPT_MSG_CHAT_ON_GROUP_USER_LEAVE
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_chat_kickout(IN CONF_HANDLE handle, IN TUP_UINT32 nGroupID, IN TUP_UINT32 *aryUsers, IN TUP_INT32 nCnt);

#ifdef WIN32
	/**********************************¼��ģ��**************************************/	
	/*****************************************************************************
	�� �� ��  : tup_conf_record_start
	��������  : ��ʼ¼��
	�������  : handle: ������
				pszFileName: ¼���ļ�ȫ·�������·�� pszFileName���Ϸ�������ʧ��
				nMode: ¼��ģʽ��ȡֵΪRECORD_MODE_VIDEO��RECORD_MODE_AUDIO_INTER��RECORD_MODE_AUDIO_OUTER�����
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_start(IN CONF_HANDLE handle, IN const TUP_CHAR* pszFileName, IN TUP_INT32 nMode);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_doubleScreen_start
	��������  : ��ʼ˫��¼��
	�������  : handle: ������
				pszFileName: ¼���ļ�ȫ·�������·�� pszFileName���Ϸ�������ʧ��
				nMode: ¼��ģʽ��ȡֵΪRECORD_MODE_VIDEO��RECORD_MODE_AUDIO_INTER��RECORD_MODE_AUDIO_OUTER�����
				szMain:����Ŀ��ߴ磨��λ�����أ�
						ע����szMain�Ŀ���С��0����¼����
						���򣬵�szMain�Ŀ�����֮һΪ0����������ԭʼ�ߴ�¼��
				szSub: ����Ŀ��ߴ磨��λ�����أ�
						ע����szSub�Ŀ���С��0����¼����
						���򣬵�szSub�Ŀ�����֮һΪ0����������ԭʼ�ߴ�¼��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_doubleScreen_start(IN CONF_HANDLE handle, IN const TUP_CHAR* pszFileName, IN TUP_INT32 nMode, IN TC_SIZE szMain, IN TC_SIZE szSub);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_stop
	��������  : ֹͣ¼��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_stop(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_pause
	��������  : ��ͣ¼��
	�������  :  handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_pause(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_resume
	��������  : ȡ����ͣ¼��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_resume(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_writeaudio
	��������  : ¼�ư�������ʱ���ⲿ��������д��
	�������  : handle: ������
				lpData: ��Ƶ����
				nLen: ���ݳ��ȡ�����0�����򷵻�ʧ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_writeaudio(IN CONF_HANDLE handle, IN TUP_UCHAR* lpData, IN TUP_INT32 nLen);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_snapshot
	��������  : ǿ�аѵ�ǰ��Ļ��Ϊ�ؼ�֡¼��
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_snapshot(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_video_setparam
	��������  : ����¼����Ƶ����
	�������  : handle: ������
				pParam: ��Ƶ���������Ϸ����򷵻�ʧ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_video_setparam(IN CONF_HANDLE handle, IN VideoRecordParam *pParam);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_audio_setparam
	��������  : ����¼����Ƶ����
	�������  : handle: ������
				pParam: ��Ƶ���������Ϸ����򷵻�ʧ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_audio_setparam(IN CONF_HANDLE handle, IN AudioRecordParam *pParam);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_video_getparam
	��������  : ��ȡ¼����Ƶ����
	�������  : handle: ������
	�������  : pParam: ������Ƶ�����ľ�������
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_video_getparam(IN CONF_HANDLE handle, OUT VideoRecordParam *pParam);
	/*****************************************************************************
	�� �� ��  : tup_conf_record_audio_getparam
	��������  : ��ȡ¼����Ƶ����
	�������  : handle: ������
	�������  : pParam: ������Ƶ�����ľ�������
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_record_audio_getparam(IN CONF_HANDLE handle, OUT AudioRecordParam *pParam);	
	
	/**********************************ý�干��ģ��**************************************/		
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_set_mediamaxbitrate
	��������  : ����֧�ֵ����ý������
	�������  : handle: ������
				ulBitRate: �����������λ��kbps
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_mediamaxbitrate(IN CONF_HANDLE handle, IN unsigned long ulBitRate);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_init_player_window
	��������  : ��������������
	�������  : handle: ������
				hwnd: �����������ھ������������������������)
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_init_player_window(IN CONF_HANDLE handle, IN unsigned long hwnd);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_play
	��������  : ��ʼ����
	�������  : handle: ������
				cFileName: ý���ļ�ȫ·������Ŀǰ��֧��wmv��ʽ�ļ���
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_MS_ON_STARTPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_play(IN CONF_HANDLE handle, IN const TUP_CHAR* cFileName);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_seek
	��������  : �϶����Ž���
	�������  : handle: ������
				lfPos: �϶����Ĳ���λ�ã���λ���룩
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_MS_ON_SEEKPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_seek(IN CONF_HANDLE handle, IN double lfPos);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_pause
	��������  : ��ͣ����
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_MS_ON_PAUSEPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_pause(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_stop
	��������  : ֹͣ����
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_MS_ON_STOPPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_stop(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_resume
	��������  : �ָ���ȡ����ͣ������
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : COMPT_MSG_MS_ON_RESUMEPLAY
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_resume(IN CONF_HANDLE handle);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_set_fullscreen
	��������  : ����ȫ��/ȡ��ȫ������
	�������  : handle: ������
				bFullScreen: �Ƿ�ȫ����ȡֵ��1��ȫ����0����ȫ��
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_fullscreen(IN CONF_HANDLE handle, IN TUP_BOOL bFullScreen);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_is_fullscreen
	��������  : ��ǰ�Ƿ���ȫ��״̬
	�������  : handle: ������
	�������  : pbFullScreen: ��õ�ȫ����־: 1��ȫ����0����ȫ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_is_fullscreen(IN CONF_HANDLE handle, OUT TUP_BOOL *pbFullScreen);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_set_mute
	��������  : ���ò���������/ȡ������
	�������  : handle: ������
				bMute: ������־��ȡֵ��0��ȡ��������1������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_mute(IN CONF_HANDLE handle, IN TUP_BOOL bMute);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_is_mute
	��������  : �Ƿ���
	�������  : handle: ������
	�������  : pbMute: ������־��ȡֵ��0��ȡ��������1������
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_is_mute(IN CONF_HANDLE handle, OUT TUP_BOOL *pbMute);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_get_duration
	��������  : ���ý���ļ���ʱ��
	�������  : handle: ������
	�������  : plfDuration: ��õ�ʱ������λ���룩
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_duration(IN CONF_HANDLE handle, OUT double *plfDuration);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_set_volume
	��������  : ��������
	�������  : handle: ������
				nVolume: ����([0,100])
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_set_volume(IN CONF_HANDLE handle, IN long nVolume);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_get_volume
	��������  : ��õ�ǰ����
	�������  : handle: ������
	�������  : pnVolume: ��õ�����
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_volume(IN CONF_HANDLE handle, OUT long *pnVolume);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_get_cur_playpos
	��������  : ��õ�ǰ���ŵ���λ��
	�������  : handle: ������
	�������  : plfPos: ��ǰ���ŵ���λ�ã���λ���룩
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_get_cur_playpos(IN CONF_HANDLE handle, OUT double *plfPos);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_check_islocal
	��������  : ����Ƿ����ڲ��ű����ļ�
	�������  : handle: ������
	�������  : pIsLocal: ��־��ǰ���ŵ��ǲ��Ǳ����ļ�
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_check_islocal(IN CONF_HANDLE handle, OUT TUP_BOOL *pIsLocal);
	/*****************************************************************************
	�� �� ��  : tup_conf_ms_adjust_video_wnd
	��������  : ���䲥��������
	�������  : handle: ������
	�������  : ��
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_ms_adjust_video_wnd(IN CONF_HANDLE handle);
#endif //WIN32
	/*****************************************************************************
	�� �� ��  : tup_conf_log_config
	��������  : ������־����
	�������  : nHmeLevel: hme��־����
				nSdkLevel: �����־����
	�������  : ��
	�� �� ֵ  : ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_VOID  tup_conf_log_config(IN TUP_INT nHmeLevel, IN TUP_INT nSdkLevel);
	//
	/*****************************************************************************
	�� �� ��  : tup_conf_bulletin
	��������  : ��������
	�������  : handle: ������
				lpData: ��������
				nLen: ���ݳ���
	�������  : item_num: ��������
	�� �� ֵ  : ����TC_OK��ʾ�ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_bulletin(IN CONF_HANDLE handle, IN TUP_UINT8* lpData, IN TUP_UINT16 nLen, OUT TUP_UINT16 * item_num); 	
	
	
	/*****************************************************************************
	�� �� ��  : tup_conf_get_nodeid_byuserid
	��������  : ��ȡ����NodeID
	�������  : handle: ������
				userid: userid
				
	�� �� ֵ  : ����NodeID
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_get_nodeid_byuserid(IN CONF_HANDLE handle, IN TUP_UINT32 userid); 

	/*****************************************************************************
	�� �� ��  : tup_conf_get_userid_bynodeid
	��������  : ��ȡ����UserID
	�������  : handle: ������
			   TUP_UINT32: nodeid
				
	�� �� ֵ  : ����UserID
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_UINT32  tup_conf_get_userid_bynodeid(IN CONF_HANDLE handle, IN TUP_UINT32 nodeid); 
	

	/*****************************************************************************
	�� �� ��  : tup_conf_handle_json
	��������  : ����Json��ʽ���ã�����JS�ӿ�
	�������  : handle: ������
			   nMsgType: ��Ϣ����
				szJson:json�ַ���
				
	�� �� ֵ  : ����TC_OK��ʾ����ɹ���������ʾʧ��
	�ص���Ϣ  : ��
	*****************************************************************************/	
	TUP_API TUP_RESULT  tup_conf_handle_json(IN CONF_HANDLE confHandle, IN TUP_UINT32 nMsgType, IN const TUP_CHAR *szJson);
#ifdef __cplusplus
};

#endif

#endif
