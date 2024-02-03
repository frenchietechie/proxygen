// Copyright 2015-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#include "proxygen/lib/utils/TraceEventType.h"

#include <stdexcept>

namespace proxygen { 

static const std::string kTraceEventTypeTotalRequest = "TotalRequest";
static const std::string kTraceEventTypeRequestExchange = "HTTPRequestExchange";
static const std::string kTraceEventTypeResponseBodyRead = "HTTPResponseBodyRead";
static const std::string kTraceEventTypePreConnect = "PreConnect";
static const std::string kTraceEventTypePostConnect = "PostConnect";
static const std::string kTraceEventTypeDnsResolution = "DNSResolution";
static const std::string kTraceEventTypeDnsCache = "DNSCache";
static const std::string kTraceEventTypeRetryingDnsResolution = "RetryingDNSResolution";
static const std::string kTraceEventTypeTcpConnect = "TCPConnect";
static const std::string kTraceEventTypeTlsSetup = "TLSSetup";
static const std::string kTraceEventTypeTotalConnect = "TotalConnect";
static const std::string kTraceEventTypeDecompression = "decompression_filter";
static const std::string kTraceEventTypeCertVerification = "cert_verification";
static const std::string kTraceEventTypeProxyConnect = "proxy_connect";
static const std::string kTraceEventTypePush = "push";
static const std::string kTraceEventTypeScheduling = "scheduling";
static const std::string kTraceEventTypeNetworkChange = "network_change";
static const std::string kTraceEventTypeMultiConnector = "multi_connector";
static const std::string kTraceEventTypeSingleConnector = "single_connector";
static const std::string kTraceEventTypeSessionTransactions = "SessionTransactions";
static const std::string kTraceEventTypeTCPInfo = "TCPInfo";
static const std::string kTraceEventTypeConnInfo = "ConnInfo";
static const std::string kTraceEventTypeZeroSetup = "ZeroSetup";
static const std::string kTraceEventTypeZeroVerification = "ZeroVerification";
static const std::string kTraceEventTypeZeroConnector = "ZeroConnector";
static const std::string kTraceEventTypeReplaySafety = "ReplaySafety";
static const std::string kTraceEventTypeHTTPPerfParameters = "HTTPPerfParameters";
static const std::string kTraceEventTypeRetryFilter = "RetryFilter";
static const std::string kTraceEventTypeZeroFallback = "ZeroFallback";
static const std::string kTraceEventTypeTLSCachedInfo = "TLSCachedInfo";
static const std::string kTraceEventTypeFBLigerProtocol = "FBLigerProtocol";
static const std::string kTraceEventTypeMQTTClient = "MQTTClient";
static const std::string kTraceEventTypeMQTTMessage = "MQTTMessage";
static const std::string kTraceEventTypeMQTTConnect = "MQTTConnect";
static const std::string kTraceEventTypeMQTTMessageStart = "MQTTMessageStart";
const std::string& getTraceEventTypeString(TraceEventType type) {
  static const std::string kTraceEventTypeInvalidType = "";

  switch (type) {
    case TraceEventType::TotalRequest : return kTraceEventTypeTotalRequest;
    case TraceEventType::RequestExchange : return kTraceEventTypeRequestExchange;
    case TraceEventType::ResponseBodyRead : return kTraceEventTypeResponseBodyRead;
    case TraceEventType::PreConnect : return kTraceEventTypePreConnect;
    case TraceEventType::PostConnect : return kTraceEventTypePostConnect;
    case TraceEventType::DnsResolution : return kTraceEventTypeDnsResolution;
    case TraceEventType::DnsCache : return kTraceEventTypeDnsCache;
    case TraceEventType::RetryingDnsResolution : return kTraceEventTypeRetryingDnsResolution;
    case TraceEventType::TcpConnect : return kTraceEventTypeTcpConnect;
    case TraceEventType::TlsSetup : return kTraceEventTypeTlsSetup;
    case TraceEventType::TotalConnect : return kTraceEventTypeTotalConnect;
    case TraceEventType::Decompression : return kTraceEventTypeDecompression;
    case TraceEventType::CertVerification : return kTraceEventTypeCertVerification;
    case TraceEventType::ProxyConnect : return kTraceEventTypeProxyConnect;
    case TraceEventType::Push : return kTraceEventTypePush;
    case TraceEventType::Scheduling : return kTraceEventTypeScheduling;
    case TraceEventType::NetworkChange : return kTraceEventTypeNetworkChange;
    case TraceEventType::MultiConnector : return kTraceEventTypeMultiConnector;
    case TraceEventType::SingleConnector : return kTraceEventTypeSingleConnector;
    case TraceEventType::SessionTransactions : return kTraceEventTypeSessionTransactions;
    case TraceEventType::TCPInfo : return kTraceEventTypeTCPInfo;
    case TraceEventType::ConnInfo : return kTraceEventTypeConnInfo;
    case TraceEventType::ZeroSetup : return kTraceEventTypeZeroSetup;
    case TraceEventType::ZeroVerification : return kTraceEventTypeZeroVerification;
    case TraceEventType::ZeroConnector : return kTraceEventTypeZeroConnector;
    case TraceEventType::ReplaySafety : return kTraceEventTypeReplaySafety;
    case TraceEventType::HTTPPerfParameters : return kTraceEventTypeHTTPPerfParameters;
    case TraceEventType::RetryFilter : return kTraceEventTypeRetryFilter;
    case TraceEventType::ZeroFallback : return kTraceEventTypeZeroFallback;
    case TraceEventType::TLSCachedInfo : return kTraceEventTypeTLSCachedInfo;
    case TraceEventType::FBLigerProtocol : return kTraceEventTypeFBLigerProtocol;
    case TraceEventType::MQTTClient : return kTraceEventTypeMQTTClient;
    case TraceEventType::MQTTMessage : return kTraceEventTypeMQTTMessage;
    case TraceEventType::MQTTConnect : return kTraceEventTypeMQTTConnect;
    case TraceEventType::MQTTMessageStart : return kTraceEventTypeMQTTMessageStart;
  }
  return kTraceEventTypeInvalidType;
};

  TraceEventType getTraceEventTypeFromString(const std::string& str) {
  if (str == kTraceEventTypeTotalRequest)  return TraceEventType::TotalRequest;
  if (str == kTraceEventTypeRequestExchange)  return TraceEventType::RequestExchange;
  if (str == kTraceEventTypeResponseBodyRead)  return TraceEventType::ResponseBodyRead;
  if (str == kTraceEventTypePreConnect)  return TraceEventType::PreConnect;
  if (str == kTraceEventTypePostConnect)  return TraceEventType::PostConnect;
  if (str == kTraceEventTypeDnsResolution)  return TraceEventType::DnsResolution;
  if (str == kTraceEventTypeDnsCache)  return TraceEventType::DnsCache;
  if (str == kTraceEventTypeRetryingDnsResolution)  return TraceEventType::RetryingDnsResolution;
  if (str == kTraceEventTypeTcpConnect)  return TraceEventType::TcpConnect;
  if (str == kTraceEventTypeTlsSetup)  return TraceEventType::TlsSetup;
  if (str == kTraceEventTypeTotalConnect)  return TraceEventType::TotalConnect;
  if (str == kTraceEventTypeDecompression)  return TraceEventType::Decompression;
  if (str == kTraceEventTypeCertVerification)  return TraceEventType::CertVerification;
  if (str == kTraceEventTypeProxyConnect)  return TraceEventType::ProxyConnect;
  if (str == kTraceEventTypePush)  return TraceEventType::Push;
  if (str == kTraceEventTypeScheduling)  return TraceEventType::Scheduling;
  if (str == kTraceEventTypeNetworkChange)  return TraceEventType::NetworkChange;
  if (str == kTraceEventTypeMultiConnector)  return TraceEventType::MultiConnector;
  if (str == kTraceEventTypeSingleConnector)  return TraceEventType::SingleConnector;
  if (str == kTraceEventTypeSessionTransactions)  return TraceEventType::SessionTransactions;
  if (str == kTraceEventTypeTCPInfo)  return TraceEventType::TCPInfo;
  if (str == kTraceEventTypeConnInfo)  return TraceEventType::ConnInfo;
  if (str == kTraceEventTypeZeroSetup)  return TraceEventType::ZeroSetup;
  if (str == kTraceEventTypeZeroVerification)  return TraceEventType::ZeroVerification;
  if (str == kTraceEventTypeZeroConnector)  return TraceEventType::ZeroConnector;
  if (str == kTraceEventTypeReplaySafety)  return TraceEventType::ReplaySafety;
  if (str == kTraceEventTypeHTTPPerfParameters)  return TraceEventType::HTTPPerfParameters;
  if (str == kTraceEventTypeRetryFilter)  return TraceEventType::RetryFilter;
  if (str == kTraceEventTypeZeroFallback)  return TraceEventType::ZeroFallback;
  if (str == kTraceEventTypeTLSCachedInfo)  return TraceEventType::TLSCachedInfo;
  if (str == kTraceEventTypeFBLigerProtocol)  return TraceEventType::FBLigerProtocol;
  if (str == kTraceEventTypeMQTTClient)  return TraceEventType::MQTTClient;
  if (str == kTraceEventTypeMQTTMessage)  return TraceEventType::MQTTMessage;
  if (str == kTraceEventTypeMQTTConnect)  return TraceEventType::MQTTConnect;
  if (str == kTraceEventTypeMQTTMessageStart)  return TraceEventType::MQTTMessageStart;
 throw std::invalid_argument ("No matching TraceEventType from string");
};


}

