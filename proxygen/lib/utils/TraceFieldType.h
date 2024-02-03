// Copyright 2015-present Facebook. All Rights Reserved.
// ** AUTOGENERATED FILE. DO NOT HAND-EDIT **

#pragma once

#include <string>

namespace proxygen { 

enum class TraceFieldType {
    ErrorStage,
    Error,
    ProxygenError,
    HTTPStatus,
    DirectionError,
    CodecError,
    CallPath,
    Uri,
    IsSecure,
    UsingProxy,
    StatusCode,
    Protocol,
    SecurityProtocol,
    ReplaySafe,
    LocalAddr,
    LocalPort,
    ContentType,
    ReqHeaderSize,
    ReqHeaderCompSize,
    ReqBodySize,
    RspHeaderSize,
    RspHeaderCompSize,
    RedirectLocation,
    NumRedirects,
    RedirectResponseCode,
    NumZeroRttRetries,
    UsingHTTP2,
    FirstBodyByteFlushedRatio,
    LastBodyByteFlushedRatio,
    FlowControlPauses,
    HTTPMethod,
    RangeRequest,
    RequestSendTime,
    RspIntvlAvg,
    RspIntvlStdDev,
    RspNumOnBody,
    ServerQuality,
    ServerRtt,
    RecvToAck,
    ServerRtx,
    ServerCwnd,
    ServerMss,
    ServerTotalBytesWritten,
    NewConnection,
    IsWaitingForNewConn,
    NewConnTimeout,
    InFlightConns,
    CachedSessions,
    CachedActiveSessions,
    ConnsStarted,
    RequestsWaited,
    TotalRequestsWaited,
    TotalConnsStarted,
    TotalBackupConnsStarted,
    SessionCacheHitType,
    PerDomainLimit,
    DynamicDomainLimitRatio,
    LoadBalancing,
    MaxConnectionRetryCount,
    MaxIdleHTTPSessions,
    MaxIdleHTTP2Sessions,
    ConnRoutingStale,
    AltSvcHost,
    InjectedSocket,
    ServerAddr,
    ServerPort,
    CachedFamily,
    NewSession,
    NumWaiting,
    HostName,
    IpAddr,
    Port,
    CNameRedirects,
    CanonicalName,
    NumberResolvers,
    ResolversSerialized,
    RequestFamily,
    NumberAnswers,
    NumberDNSRetries,
    ResolvedSuccess,
    DNSCacheHit,
    DNSCacheStale,
    DNSPreconnectDomain,
    TLSReused,
    TLSCacheHit,
    CipherName,
    TLSVersion,
    OpenSSLVersion,
    TLSCachePersistence,
    TLSCachedInfoHit,
    RspBodySize,
    RspBodyCompSize,
    CompressionType,
    CompressionDictSuccess,
    CompressionDictError,
    CompressionDictID,
    VerifiedSuccess,
    VerifiedChain,
    VerifiedTime,
    VerifiedServerAddress,
    VerifiedProxyAddress,
    VerifiedError,
    VerifiedReason,
    VerifiedHostname,
    VerifiedMatchedCommonName,
    VerifiedMatchedSubjectAltName,
    VerifiedNameMatched,
    VerifiedHostnameFailMessage,
    SignatureAlgorithmCertSHA1,
    FailureVerifiedCertDepthInChain,
    VerifiedChainFailuresOverridden,
    VerifiedChainFailureVerificationTime,
    PinningReason,
    PinningRequiredHash,
    PinningUserHash,
    PinningExcludedHash,
    PinningRequiredFound,
    PinningUserInstalledFound,
    PinningUserInstalledCount,
    PinningExcludedFound,
    PinningTimePin,
    PinningHost,
    PinningSuccess,
    VerifiedTimeMerge,
    RevokeReason,
    RevokeSuccess,
    ProxyHost,
    ProxyPort,
    ProxyRespStatus,
    ProxyRespBody,
    ProxyUpstreamDest,
    SchedulerType,
    InitialPriority,
    SizeOfQueue,
    PreviousState,
    CurrentState,
    NetworkID,
    NumConnAttempts,
    AttemptAddrs,
    AttemptAddrFamily,
    SucceededConnTime,
    RequestID,
    HumanReadableName,
    CurrentTransactions,
    HistoricalMaximumTransactions,
    NumberTransactionsServed,
    Cwnd,
    CwndBytes,
    TotalRetx,
    InflightPacketLoss,
    RTT,
    RTTVar,
    RTO,
    MSS,
    MTU,
    RcvWnd,
    UpstreamCapacity,
    ReqsSucceed,
    ReqsFailed,
    TTFB,
    TTLB,
    ConnLifeSpan,
    EgressBuffered,
    SCFGCacheHit,
    SCFGExpired,
    ZeroAEAD,
    ZeroKex,
    ZeroVersion,
    ZeroRttEnabled,
    ZeroFallbackEnabled,
    ZeroVerifiedSuccess,
    ZeroVerifiedError,
    TFOAttempted,
    TFOFinished,
    MQTTConnAttempts,
    IsForeground,
    MQTTBytesWritten,
    MQTTBytesRead,
    RawBytesWritten,
    RawBytesRead,
    EventLoopTimeAvg,
    TransportType,
    MQTTMsgRemainingLength,
    MsgType,
    IsMsgRecv,
    ConnectReturnCode,
    MQTTMsgBytes,
    MsgTopic,
    QoS,
    IsPushRequest,
    PushConnectedInFlight,
    PushOrphaned,
    AnalyticsTags,
};

extern const std::string& getTraceFieldTypeString(TraceFieldType);
extern TraceFieldType getTraceFieldTypeFromString(const std::string&);
}

