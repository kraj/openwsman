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
 * @author Anas Nashif
 */

#ifndef WSMANFAULTS_H_
#define WSMANFAULTS_H_

#define FAULT_SENDER_CODE "Sender"
#define FAULT_RECEIVER_CODE "Receiver"

enum __WsmanFaultCodeType 
{	
    WSMAN_RC_OK = 0,
    WSMAN_FAULT_ACCESS_DENIED,
    WSMAN_FAULT_AMBIGUOUS_SELECTORS,
    WSMAN_FAULT_ALREADY_EXISTS,
    WSMAN_FAULT_CONCURRENCY,
    WSMAN_FAULT_ENCODING_LIMIT,
    WSMAN_FAULT_DELIVERY_REFUSED,
    WSMAN_FAULT_INTERNAL_ERROR,
    WSMAN_FAULT_INVALID_HEADER,
    WSMAN_FAULT_INVALID_BOOKMARK,    
    WSMAN_FAULT_INVALID_OPTIONS,
    WSMAN_FAULT_INVALID_PARAMERTERS,    
    WSMAN_FAULT_INVALID_SELECTORS,
    WSMAN_FAULT_INVALID_TIMEOUT,
    WSMAN_FAULT_QUOTA_LIMIT,    
    WSMAN_FAULT_MINIMUM_ENVELOPE_LIMIT,
    WSMAN_FAULT_RENAME_FAILURE,
    WSMAN_FAULT_RESOURCE_OFFLINE,
    WSMAN_FAULT_SCHEMA_VALIDATION_ERROR,
    WSMAN_FAULT_SYSTEM_OFFLINE,
    WSMAN_FAULT_TIMED_OUT,
    WSMAN_FAULT_UNSUPPORTED_FEATURE,
    // WS-Transfer
    WXF_FAULT_INVALID_REPRESENTATION,

    // WS-Addressing
    /** wsa:InvalidMessageInformationHeader */
    WSA_FAULT_INVALID_MESSAGE_INFORMATION_HEADER,
    /** wsa:DestinationUnreachable */
    WSA_FAULT_DESTINATION_UNREACHABLE,
    /** wsa:ActionNotSupported */
    WSA_FAULT_ACTION_NOT_SUPPORTED,
    /** wsa:MessageInformationHeaderRequired */
    WSA_FAULT_MESSAGE_INFORMATION_HEADER_REQUIRED,
    /** wsa:EndpointUnavailable */
    WSA_FAULT_ENDPOINT_UNAVAILABLE,
    // SOAP	

    SOAP_FAULT_VERSION_MISMATCH,
    // MustUnderstand
    SOAP_FAULT_MUSTUNDERSTAND,

    // WSEN
    WSEN_FAULT_INVALID_ENUMERATION_CONTEXT,
    WSMAN_FAULT_UNKNOWN
};
typedef enum  __WsmanFaultCodeType WsmanFaultCodeType;

enum __WsmanFaultDetailType 
{
    WSMAN_DETAIL_OK = 0,
    WSMAN_FAULT_DETAIL_ACK,
    WSMAN_FAULT_DETAIL_ACTION_MISMATCH,
    WSMAN_FAULT_DETAIL_ALREADY_EXISTS,
    WSMAN_FAULT_DETAIL_AMBIGUOUS_SELECTORS,
    WSMAN_FAULT_DETAIL_ASYNCHRONOUS_REQUEST,
    WSMAN_FAULT_DETAIL_AUTHERIZATION_MODE,
    WSMAN_FAULT_DETAIL_BOOKMARKS,
    WSMAN_FAULT_DETAIL_CHARECHTER_SET,
    WSMAN_FAULT_DETAIL_DELIVERY_RETRIES,
    WSMAN_FAULT_DETAIL_DUPLICATE_SELECTORS,
    WSMAN_FAULT_DETAIL_ENCODING_TYPE,
    WSMAN_FAULT_DETAIL_ENUMERATION_MODE,
    WSMAN_FAULT_DETAIL_EXPIRATION_TIME,
    WSMAN_FAULT_DETAIL_EXPIRED,
    WSMAN_FAULT_DETAIL_FILTERING_REQUIRED,
    WSMAN_FAULT_DETAIL_FORMAT_MISMATCH,
    WSMAN_FAULT_DETAIL_FORMAT_SECURITY_TOKEN,
    WSMAN_FAULT_DETAIL_FRAGMENT_LEVEL_ACCESS,
    WSMAN_FAULT_DETAIL_HEARTBEATS,
    WSMAN_FAULT_DETAIL_INSECURE_ADDRESS,
    WSMAN_FAULT_DETAIL_INSUFFICIENT_SELECTORS,
    WSMAN_FAULT_DETAIL_INVALID,
    WSMAN_FAULT_DETAIL_INVALID_ADDRESS,
    WSMAN_FAULT_DETAIL_INVALID_FORMAT,
    WSMAN_FAULT_DETAIL_INVALID_FRAGMENT,
    WSMAN_FAULT_DETAIL_INVALID_NAME,
    WSMAN_FAULT_DETAIL_INVALID_NAMESPACE,
    WSMAN_FAULT_DETAIL_INVALID_RESOURCEURI,
    WSMAN_FAULT_DETAIL_INVALID_SELECTOR_ASSIGNMENT,
    WSMAN_FAULT_DETAIL_INVALID_SYSTEM,
    WSMAN_FAULT_DETAIL_INVALID_TIMEOUT,
    WSMAN_FAULT_DETAIL_INVALID_VALUE,
    WSMAN_FAULT_DETAIL_INVALID_VALUES,
    WSMAN_FAULT_DETAIL_LOCALE,
    WSMAN_FAULT_DETAIL_MAX_ELEMENTS,
    WSMAN_FAULT_DETAIL_MAX_ENVELOPE_POLICY,
    WSMAN_FAULT_DETAIL_MAX_ENVELOPE_SIZE,
    WSMAN_FAULT_DETAIL_MAX_ENVELOPE_SIZE_EXCEEDED,
    WSMAN_FAULT_DETAIL_MAX_TIME,
    WSMAN_FAULT_DETAIL_MINIMUM_ENVELOPE_LIMIT,
    WSMAN_FAULT_DETAIL_MISSING_VALUES,
    WSMAN_FAULT_DETAIL_NOT_SUPPORTED,
    WSMAN_FAULT_DETAIL_OPERATION_TIMEOUT,
    WSMAN_FAULT_DETAIL_OPTION_LIMIT,
    WSMAN_FAULT_DETAIL_OPTION_SET,
    WSMAN_FAULT_DETAIL_READ_ONLY,
    WSMAN_FAULT_DETAIL_RESOURCE_OFFLINE,
    WSMAN_FAULT_DETAIL_RENAME,
    WSMAN_FAULT_DETAIL_SELECTOR_LIMIT,
    WSMAN_FAULT_DETAIL_SERVICE_ENVELOPE_LIMIT,
    WSMAN_FAULT_DETAIL_TARGET_ALREADY_EXISTS,
    WSMAN_FAULT_DETAIL_TYPE_MISMATCH,
    WSMAN_FAULT_DETAIL_UNEXPECTED_SELECTORS,
    WSMAN_FAULT_DETAIL_UNREPORTABLE_SUCCESS,
    WSMAN_FAULT_DETAIL_UNUSABLE_ADDRESS,
    WSMAN_FAULT_DETAIL_URI_LIMIT_EXCEEDED,
    WSMAN_FAULT_DETAIL_WHITESPACE,

    // WS-Addressing
    WSA_FAULT_DETAIL_DUPLICATE_MESSAGE_ID,

    // SOAP
    SOAP_FAULT_DETAIL_HEADER_NOT_UNDERSTOOD,

    // OpenWSMAN 
    OWSMAN_FAULT_DETAIL_ENDPOINT_ERROR,
    OWSMAN_FAULT_NO_DETAILS



};
typedef enum __WsmanFaultDetailType WsmanFaultDetailType;

void add_details_proc(WsXmlNodeH fault,  void* data);
#endif /*WSMANFAULTS_H_*/
