/*		
	this is a demo for how to use a demo ca, and how to call the tee_client_api that defined by GP
*/
#include<stdio.h>
#include<stdlib.h>



void mian()
{
	uint32_t params;
	uint32_t res = TEE_SUCCESS;
		
	
	res = TEE_Initial_Context();
	res = TEE_Open_session();
	res = TEE_Invoke_command();
	res = TEE_Close_session();
	res = TEE_Finicial_Context();
}
