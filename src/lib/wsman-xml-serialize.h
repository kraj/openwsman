/*******************************************************************************
* Copyright (C) 2004-2006 Intel Corp. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*  - Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
*  - Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
*  - Neither the name of Intel Corp. nor the names of its
*    contributors may be used to endorse or promote products derived from this
*    software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL Intel Corp. OR THE CONTRIBUTORS
* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

/** 
 * @author Eugene Yarmosh
 * @author Vadim Revyakin
 */

#ifndef WS_XML_SERIALIZATION_H
#define WS_XML_SERIALIZATION_H

#include "wsman-xml-serializer.h"
//struct __XmlSerializationTypeInfo;
//struct __XmlSerializerInfo;

#define XML_SMODE_SERIALIZE     1
#define XML_SMODE_DESERIALIZE   2
#define XML_SMODE_BINARY_SIZE   3
#define XML_SMODE_XML_SIZE      4 // reserved
#define XML_SMODE_FREE_MEM      5
#define XML_SMODE_SKIP          6

struct __XmlSerializationData
{
	//XML_TYPE_PTR appData;
	WsContextH cntx;
	char *elementBuf; 
	char *stopper;
	struct __XmlSerializerInfo* elementInfo;
//	char* ns;
//	char* name; // optional can be NULL
//	char* nameNs;
	int mode;
	unsigned int index;
	WsXmlNodeH xmlNode;
    XML_NODE_ATTR *attrs;
//	int indentCount;
//	int error;
//	char* faultDetail;
	int skipFlag;
};
typedef struct __XmlSerializationData XmlSerializationData;

#define DATA_SIZE(d) (d)->elementInfo->size
#define DATA_COUNT(d) (d)->elementInfo->count
#define DATA_MAX_COUNT(d) (d)->elementInfo->count
#define DATA_MIN_COUNT(d) (d)->elementInfo->mincount
#define DATA_ALL_SIZE(d) (DATA_SIZE(d) * DATA_COUNT(d))
#define DATA_MUST_BE_SKIPPED(d) ( \
    (data->mode == XML_SMODE_SKIP) || \
    ((d->mode == XML_SMODE_SERIALIZE) && XML_IS_OUT(d->elementInfo)) || \
    ((d->mode == XML_SMODE_DESERIALIZE) && XML_IS_IN(d->elementInfo)) \
)
#define DATA_ELNAME(d) ((d)->elementInfo->name)
#define DATA_BUF(d) ((d)->elementBuf)



struct __NameAliase
{
        char* name;
        char* aliase;
};
typedef struct __NameAliase NameAliase;
// NameAliase* g_NameNameAliaseTable;



void enforce_mustunderstand_if_needed(WsContextH cntx, WsXmlNodeH node);

//int do_serialize_uint(struct __XmlSerializationData* data, int valSize);

void* ws_serializer_alloc(WsContextH cntx, size_t size);
//int do_serializer_free(WsContextH cntx, void* ptr);
int ws_serializer_free(WsContextH cntx, void* ptr);

void *xml_serializer_alloc(XmlSerializationData *data, size_t size, int zeroInit);

int xml_serializer_free(XmlSerializationData *data, void *buf);

//XML_TYPE_PTR make_dst_ptr(XmlSerializationData *data, int size);

void xml_serializer_free_scalar_mem(XmlSerializationData *data);

WsXmlNodeH xml_serializer_add_child(XmlSerializationData *data, char *value);

WsXmlNodeH xml_serializer_get_child(XmlSerializationData *data);

//XmlSerialiseDynamicSizeData *make_dyn_size_data(XmlSerializationData *data);
/*
void initialize_xml_serialization_data(XmlSerializationData *data, WsContextH cntx, 
			XmlSerializerInfo *elementInfo, XML_TYPE_PTR dataBuf, int mode,
			char *nameNs, char *ns, WsXmlNodeH xmlNode);
*/





#endif //WS_XML_SERIALIZATION_H
