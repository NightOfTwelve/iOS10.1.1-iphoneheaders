/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCSecureDataChannelDelegate.h>
#import <AVConference/AVTelephonyInterfaceDelegate.h>
#import <libobjc.A.dylib/VCCaptionsReceiverDelegate.h>
#import <libobjc.A.dylib/VCTransportSessionLegacyDelegate.h>

@protocol VCCallSessionDelegate, VCConnectionProtocol, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate;
@class NSObject, VCCallInfo, VCConnectionManager, VCMediaNegotiator, NSMutableArray, VCAudioPayload, VCAudioTierPicker, VCAudioTier, VCPacketBundler, VCImageAttributeRules, VCCapabilities, GKRingBuffer, NSDictionary, NSMutableDictionary, NSArray, TimingCollection, NSString, VCCallLinkCongestionDetector, NSData, VCSessionMessaging, VCBitrateArbiter, VCAudioTransmitter, VCCaptionsReceiver, VideoAttributes, VCWCMClient, WRMClient, VCSecureDataChannel, NSNumber, AVTelephonyInterface, VCTransportSession;

@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, VCCaptionsReceiverDelegate, VCTransportSessionLegacyDelegate> {

	NSObject*<VCCallSessionDelegate> delegate;
	VCCallInfo* localCallInfo;
	VCCallInfo* remoteCallInfo;
	long long packetMultiplexMode;
	tagHANDLE* rtpHandle;
	tagHANDLE* rtpVideo;
	VCConnectionManager* connectionManager;
	long long connectionChangeState;
	id<VCConnectionProtocol> toBeChangedPrimaryConnection;
	VCMediaNegotiator* _mediaNegotiator;
	NSObject*<OS_dispatch_queue> connectionChangeQueue;
	long long state;
	long long _sipState;
	NSMutableArray* audioPayloads;
	VCAudioPayload* currentAudioPayload;
	VCAudioPayload* currentDTXPayload;
	VCAudioTierPicker* audioTierPicker_AppleCalling;
	VCAudioTierPicker* audioTierPicker_FaceTime;
	VCAudioTier* currentAudioTier;
	VCAudioTier* requestedAudioTier;
	VCPacketBundler* audioBundler;
	int audioTierChangeRequestCount;
	long long videoPayload;
	long long screenPayload;
	long long sampleRate;
	long long samplesPerFrame;
	long long blockSize;
	float blockSeconds;
	tagHANDLE* hSIP;
	BOOL isAudioRunning;
	BOOL isWaitingForICEResult;
	BOOL didSend200OK;
	opaque_pthread_mutex_t mutex;
	BOOL receivedSIPInvite;
	VCImageAttributeRules* imageAttributeRules;
	int iRemoteRTPPort;
	int iRemoteRTCPPort;
	VCCapabilities* caps;
	int _deviceRole;
	tagHANDLE* hMediaQueue;
	tagHANDLE* hAFRC;
	GKRingBuffer* ringBuf;
	unsigned lastReceived;
	char* lastInputSampleBuffer;
	unsigned lastInputSampleBufferSize;
	int preferredAudioCodec;
	int audioTxBitrate;
	int audioHeaderSize;
	unsigned afrcBitrate;
	unsigned afrcDuplication;
	double audioInterval;
	BOOL useSBR;
	BOOL useControlByte;
	BOOL useUEP;
	NSDictionary* _allPayloadsLocalFeaturesString;
	NSMutableDictionary* featuresListStringDict;
	unsigned char inputMeter;
	BOOL audioIsPaused;
	opaque_pthread_mutex_t pauseLock;
	NSObject*<OS_dispatch_queue> videoQueue;
	NSArray* mutedPeers;
	int bandwidthUpstream;
	int bandwidthDownstream;
	BOOL allowAudioRecording;
	int aacBlockSize;
	BOOL _useAMRLowLatencyMode;
	BOOL fInitialBandwidthDetection;
	int carrierBitrateCap;
	AudioStreamBasicDescription vpioFormat;
	BOOL allowAudioSwitching;
	BOOL shouldUpdateLastReceivedPacketTimestamp;
	double lastReceivedPacketTimestamp;
	BOOL isRemoteMediaStalled;
	int packetsSinceStall;
	int natType;
	unsigned lastSentAudioSampleTime;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	TimingCollection* perfTimers;
	double packetLossRate;
	double timeLastCheckedNetworkConditions;
	double timeLastKnowGoodNetworkPLR;
	double timeLastKnowGoodNetworkRTT;
	double networkConditionsTimeoutInSeconds;
	NSString* peerCN;
	NSString* sessionID;
	unsigned roundTripTime;
	float packetLateAndMissingRatio;
	int sampleLogCount;
	double timeSinceLastReportedNoPackets;
	double noRemotePacketsTimeout;
	BOOL didAttemptSIPInvite;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	opaque_pthread_mutex_t qualityDelegateLock;
	NSObject*<OS_dispatch_queue> qualityQueue;
	NSObject*<OS_dispatch_queue> managerQueue;
	BOOL shouldTimeoutPackets;
	opaque_pthread_mutex_t srtpLock;
	BOOL didPrepareSRTP;
	BOOL useAFRC;
	BOOL isRTCPFBEnabled;
	VCCallLinkCongestionDetector* congestionDetector;
	BOOL shouldSendAudio;
	BOOL isGKVoiceChat;
	void* packetThread;
	int signalStrength;
	int signalRaw;
	int signalGrade;
	BOOL bBWEstOperatingModeInitialized;
	BOOL bBWEstNewBWEstModeEnabled;
	BOOL bBWEstFakeLargeFrameModeEnabled;
	BOOL bBWEstActiveProbingSenderLog;
	CGSize remoteScreenPortraitAspectRatio;
	CGSize remoteScreenLandscapeAspectRatio;
	CGSize remoteExpectedPortraitAspectRatio;
	CGSize remoteExpectedLandscapeAspectRatio;
	BOOL isStarted;
	NSData* srtpKeyBytes;
	BOOL isInitiator;
	BOOL sentClientSuccessfulDidStart;
	double videoThrottlingTimeout;
	unsigned awdCallNonce;
	VCSessionMessaging* messaging;
	BOOL isCurrentNetworkBad;
	unsigned callSessionBitrate;
	NSObject*<OS_dispatch_queue> cellTechQueue;
	NSObject*<OS_dispatch_source> cellTechChangeSource;
	TimingCollection* cameraTimers;
	VCBitrateArbiter* callSessionBitrateArbiter;
	NSObject*<OS_dispatch_source> connectionTimeoutSource;
	unsigned short maxPacketLength;
	BOOL lastAudioStalled;
	double lastTierSwitch;
	BOOL audioTierHysteresis;
	long long initialSentBytes;
	long long initialReceivedBytes;
	tagVCAudioReceiver* audioReceiver;
	VCAudioTransmitter* audioTransmitter;
	VCCaptionsReceiver* _captionsReceiver;
	tagHANDLE* hVideoReceiver;
	tagHANDLE* hVideoTransmitter;
	BOOL remoteSupportsVisibleRect;
	BOOL remoteSupportsExpectedAspectRatio;
	BOOL canLocalResizePIP;
	BOOL canRemoteResizePIP;
	BOOL receivedFirstRemoteFrame;
	int fecMode;
	NSObject*<OS_dispatch_source> sessionHealthMonitor;
	VideoAttributes* remoteVideoAttributes;
	double lastVideoQualityNotificationUpdate;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	VCWCMClient* vcWCMClient;
	WRMClient* vcWRMClient;
	OpaqueVTPixelTransferSessionRef hdTransferSession;
	CVPixelBufferPoolRef hdBufferPool;
	CGSize expectedDecodeSize;
	opaqueRTCReportingRef reportingAgent;
	int reportUpdateInterval;
	int reportReportFrequency;
	BOOL enableAFRCDump;
	unsigned awdTime;
	int operatingMode;
	unsigned sentAudioBytes;
	unsigned totalTxAudioBytes;
	unsigned estimateTxAudioBytes;
	unsigned audioFrameCounter;
	unsigned silenceFrameCounter;
	unsigned vadSegmentCounter;
	BOOL lastIsTalking;
	double lastVCLogCallbackTime;
	SKEStateOpaqueRef skeState;
	CFDataRef secretKey;
	VCSecureDataChannel* secureDataChannel;
	NSString* basebandCodecType;
	NSNumber* basebandCodecSampleRate;
	BOOL _didSendBasebandCodec;
	AVTelephonyInterface* telephonyInterface;
	double lastUpdateQualityIndicator;
	unsigned dwRTT_ice;
	NSObject*<OS_dispatch_queue> timestampQueue;
	BOOL shouldSendBlackFrame;
	unsigned _peerProtocolVersion;
	tagWRMMetricsInfo* wrmInfo;
	BOOL _inviteDataRequested;
	unsigned _transportType;
	VCTransportSession* _transportSession;
	BOOL _cleanupDone;
	BOOL _isLocalCellular_LowestConnectionQuality;
	BOOL _isRemoteCellular_LowestConnectionQuality;
	BOOL _isConnectedOnIPv6_LowestConnectionQuality;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long connectionChangeState; 
@property (retain) VCConnectionManager * connectionManager; 
@property (readonly) VCCallInfo * localCallInfo; 
@property (nonatomic,copy) NSString * peerCN; 
@property (readonly) tagVCAudioReceiver* audioReceiver; 
@property (readonly) VCAudioTransmitter * audioTransmitter; 
@property (nonatomic,readonly) BOOL isCaller; 
@property (nonatomic,copy) NSString * sessionID; 
@property (assign,nonatomic) BOOL isStarted; 
@property (nonatomic,retain) VCImageAttributeRules * imageAttributeRules; 
@property (assign,nonatomic) BOOL shouldSendAudio; 
@property (assign,nonatomic) unsigned roundTripTime; 
@property (assign,nonatomic) BOOL useAFRC; 
@property (assign,nonatomic) BOOL isRTCPFBEnabled; 
@property (assign,nonatomic) double packetLossRate; 
@property (assign,nonatomic) float packetLateAndMissingRatio; 
@property (readonly) double networkQuality; 
@property (assign,nonatomic) double networkConditionsTimeoutInSeconds; 
@property (assign,nonatomic) int signalStrength; 
@property (assign,nonatomic) int signalRaw; 
@property (assign,nonatomic) int signalGrade; 
@property (assign,nonatomic) unsigned lastSentAudioSampleTime; 
@property (assign,nonatomic) int natType; 
@property (assign,nonatomic) BOOL requiresWifi; 
@property (assign,nonatomic) BOOL useCompressedConnectionData; 
@property (retain) NSObject*<VCCallSessionDelegate> delegate; 
@property (assign) tagHANDLE* rtpHandle; 
@property (readonly) int numBufferBytesAvailable; 
@property (assign) unsigned short maxPacketLength; 
@property (assign) long long state; 
@property (assign) long long sipState;                                                            //@synthesize sipState=_sipState - In the implementation block
@property (assign) BOOL didSend200OK; 
@property (assign) long long videoPayload; 
@property (assign) long long sampleRate; 
@property (readonly) BOOL isAudioRunning; 
@property (readonly) BOOL isVideoRunning; 
@property (readonly) BOOL videoIsPaused; 
@property (readonly) BOOL audioIsPaused; 
@property (assign) BOOL isGKVoiceChat; 
@property (nonatomic,readonly) VCAudioPayload * currentAudioPayload; 
@property (assign) BOOL isWaitingForICEResult; 
@property (assign) BOOL receivedSIPInvite; 
@property (assign) tagHANDLE* hMediaQueue; 
@property (assign) tagHANDLE* hAFRC; 
@property (nonatomic,retain) GKRingBuffer * ringBuf; 
@property (assign) unsigned lastReceived; 
@property (readonly) int bundledPackets; 
@property (assign) int packetsPerBundle; 
@property (assign) int preferredAudioCodec; 
@property (nonatomic,readonly) int audioTxBitrate; 
@property (assign) BOOL useControlByte; 
@property (assign) BOOL useUEP; 
@property (assign) unsigned char inputMeter; 
@property (assign) int bandwidthUpstream; 
@property (assign) int bandwidthDownstream; 
@property (nonatomic,retain) NSArray * mutedPeers; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) BOOL shouldTimeoutPackets; 
@property (retain) NSData * srtpKeyBytes; 
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes; 
@property (assign) unsigned remoteFrameWidth; 
@property (assign) unsigned remoteFrameHeight; 
@property (assign,nonatomic) int operatingMode; 
@property (readonly) BOOL isSKEOptimizationEnabled; 
@property (readonly) BOOL isRemoteMediaStalled; 
@property (retain) VCCapabilities * capabilities; 
@property (assign) int deviceRole;                                                                //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSNumber * basebandCodecSampleRate; 
@property (nonatomic,copy) NSString * basebandCodecType; 
@property (nonatomic,readonly) int audioTierNetworkBitrate; 
@property (nonatomic,readonly) int audioTierAudioBitrate; 
@property (nonatomic,readonly) int audioTierPacketsPerBundle; 
@property (nonatomic,readonly) int audioTierPayload; 
@property (nonatomic,readonly) NSDictionary * dtxMetrics; 
+(id)keyPathsForValuesAffectingNetworkQuality;
-(VCConnectionManager *)connectionManager;
-(id)init;
-(void)setDelegate:(NSObject*<VCCallSessionDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSObject*<VCCallSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(BOOL)cancel:(id)arg1 ;
-(double)networkQuality;
-(unsigned)callID;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned)arg2 ;
-(BOOL)requiresWifi;
-(void)setRequiresWifi:(BOOL)arg1 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned)arg2 ;
-(int)natType;
-(void)triggerInterfaceChange;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 isTalking:(BOOL)arg6 ;
-(BOOL)setupAudioEncoders;
-(unsigned)maximumPayloadSize;
-(int)deviceRole;
-(int)bundledPackets;
-(BOOL)setupAudioCodecWithPayload:(int)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(BOOL)choosePayload:(int*)arg1 count:(int)arg2 ;
-(BOOL)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(BOOL)setMediaQueueStreamSettings;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopPausedHeartbeat;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startPausedHeartbeat;
-(void)setWRMMetricConfig:(SCD_Struct_VC24*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC25*)arg1 ;
-(void)reportWRMMetrics:(const SCD_Struct_VC30*)arg1 ;
-(int)numBufferBytesAvailable;
-(tagHANDLE*)rtpHandle;
-(unsigned)lastSentAudioSampleTime;
-(int)preferredAudioCodec;
-(VCAudioPayload *)currentAudioPayload;
-(VCAudioTransmitter *)audioTransmitter;
-(unsigned)audioRTPID;
-(unsigned)videoRTPID;
-(NSString *)basebandCodecType;
-(NSNumber *)basebandCodecSampleRate;
-(void)setRoundTripTime:(unsigned)arg1 ;
-(unsigned)roundTripTime;
-(void)handleCellularMTUChanged:(unsigned short)arg1 ;
-(id)initWithDeviceRole:(int)arg1 transportType:(unsigned)arg2 ;
-(int)mapPacketMultiplexModeToSIPMode:(long long)arg1 ;
-(BOOL)getRealAudioTxBitrate:(unsigned short*)arg1 RxBitrate:(unsigned short*)arg2 duplication:(unsigned short*)arg3 ;
-(BOOL)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(BOOL)arg1 ;
-(BOOL)evaluateEnableRRx:(int*)arg1 ;
-(void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2 ;
-(BOOL)stopVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)startVideoSend:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isCaller;
-(BOOL)videoIsPaused;
-(BOOL)isCallOngoing;
-(unsigned)currentAudioCap;
-(void)updateMaxPktLength;
-(BOOL)findFeatureString:(const char*)arg1 value:(char*)arg2 valueLength:(unsigned long long)arg3 withPrefix:(const char*)arg4 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg1 ;
-(int)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2 ;
-(void)setUseControlByte:(BOOL)arg1 ;
-(void)setUseUEP:(BOOL)arg1 ;
-(VCImageAttributeRules *)imageAttributeRules;
-(BOOL)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4 ;
-(BOOL)disconnect:(id)arg1 didRemoteCancel:(BOOL)arg2 ;
-(void)getVideoSettings:(int)arg1 forInterface:(int)arg2 width:(int*)arg3 height:(int*)arg4 framerate:(int*)arg5 bitRate:(int*)arg6 ;
-(BOOL)chooseVideoPayloadForInterface:(int)arg1 ;
-(id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2 sessionBitrate:(int*)arg3 ;
-(id)getFeaturesListStringForPayload:(int)arg1 ;
-(int)applyFeaturesListStringForPayload:(int)arg1 ;
-(void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2 ;
-(void)setupWCMClient;
-(void)cleanupWCMClient;
-(void)updateCachedConnectionState;
-(void)notifyDelegateActiveConnectionDidChange;
-(void)disconnectWithNoRemotePackets:(long long)arg1 ;
-(void)logDetailedNetworkInformation;
-(void)updateNetworkCheckHint:(double)arg1 ;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(void)updateLastReceivedPacketWithTimestamp:(double)arg1 ;
-(void)sendTimings;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)cancelConnectionTimeoutTimer;
-(BOOL)isLocalOrRemoteOnCellular;
-(BOOL)shouldUseDtx;
-(int)packetsPerBundle;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 ;
-(BOOL)chooseAudioNetworkBitrate;
-(float)nextAudioInterval:(int)arg1 ;
-(int)sendAudioBundle:(BOOL)arg1 atTimeStamp:(unsigned)arg2 nextInterval:(float)arg3 ;
-(void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4 ;
-(BOOL)setupIDSConnectionForCallID:(unsigned)arg1 destination:(id)arg2 socket:(int)arg3 error:(id*)arg4 ;
-(void)handleReceivedPiggybackBlobIDS:(id)arg1 ;
-(BOOL)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id*)arg2 ;
-(void)handleReceivedPiggybackBlobLegacy:(id)arg1 ;
-(void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(BOOL)arg2 ;
-(void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 ;
-(void)handleDuplicationEnabled:(BOOL)arg1 activeConnection:(id)arg2 ;
-(VCCallInfo *)localCallInfo;
-(void)handleCellTechChange:(int)arg1 ;
-(tagHANDLE*)hAFRC;
-(int)setSKEBlobOnTransportSession;
-(void)handleKeyExchangeCompleted;
-(BOOL)disconnectInternal:(BOOL)arg1 disconnectError:(id)arg2 didRemoteCancel:(BOOL)arg3 ;
-(id)allocLocalFeaturesString;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)initWithRelevantStorebagEntries;
-(void)reportOperatingMode;
-(id)newSKEBlobWithRemoteSKEBlob:(id)arg1 ;
-(id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned)arg2 ;
-(void)addLocalCallInfoToInviteDictionary:(id)arg1 ;
-(BOOL)setPauseAudio:(BOOL)arg1 force:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)startVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)stopVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg1 force:(BOOL)arg2 error:(id*)arg3 ;
-(void)logPerfTimings;
-(void)sendData:(id)arg1 messageType:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(void)getFrontCaptureTime:(float*)arg1 backCaptureTime:(float*)arg2 ;
-(unsigned)primaryConnectionType;
-(tagVCAudioReceiver*)audioReceiver;
-(void)sendCallingModeMessage;
-(void)enableAudio:(BOOL)arg1 ;
-(void)updateDeviceRole:(int)arg1 ;
-(void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2 ;
-(void)handleFirstConnectionSetup:(id)arg1 ;
-(BOOL)startMediaWithPreNegotiatedSettings:(id*)arg1 ;
-(void)sipConnectThreadProc:(id)arg1 ;
-(void)setupCalleeSIPStartTimeout:(float)arg1 ;
-(void)logConnectionSuccess;
-(void)setupSecureDataChannel;
-(void)startAWDStats;
-(void)setUseAFRC:(BOOL)arg1 ;
-(void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(BOOL)arg4 ;
-(BOOL)isBetterForSIPInviteWithSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1 thanSession:(id)arg2 ;
-(void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned)arg2 ;
-(void)handlePendingPrimaryConnectionChange;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(BOOL)arg1 ;
-(BOOL)handshakeComplete:(SSLContextRef)arg1 withError:(_CFError*)arg2 ;
-(void)timeoutUnfinishedConnection;
-(void)sendThreadedAudio:(tagEncodedAudio*)arg1 buffer:(char*)arg2 bufferSize:(unsigned)arg3 ;
-(int)sendAudioHeartbeat:(unsigned)arg1 ;
-(BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id*)arg8 ;
-(int)rtcpDescriptor;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)sendWRMStatusUpdate:(const SCD_Struct_VC46*)arg1 ;
-(void)requestWRMNotification;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setRemoteCallInfoFromInviteDictionary:(id)arg1 ;
-(void)setShouldSendAudio:(BOOL)arg1 ;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isGKVoiceChat;
-(BOOL)setPauseAudio:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPauseVideo:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)stillWantsToRelay;
-(void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(BOOL)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(id)remoteParticipantID;
-(id)localParticipantID;
-(void)localCameraSwitchedFrom:(int)arg1 to:(int)arg2 ;
-(id)callMetadata;
-(BOOL)pullAudioSamples:(char*)arg1 timestamp:(unsigned*)arg2 byteCount:(int*)arg3 sampleCount:(int*)arg4 lastReceivedAudioTime:(double*)arg5 padding:(char*)arg6 paddingLength:(char*)arg7 silence:(int*)arg8 ;
-(BOOL)isSKEOptimizationEnabled;
-(int)audioTierNetworkBitrate;
-(int)audioTierAudioBitrate;
-(int)audioTierPacketsPerBundle;
-(int)audioTierPayload;
-(NSDictionary *)dtxMetrics;
-(void)setSessionConferenceState:(unsigned)arg1 callID:(unsigned)arg2 ;
-(void)setSessionConferenceVisualRectangle:(CGRect)arg1 callID:(unsigned)arg2 ;
-(void)setPeerProtocolVersion:(unsigned)arg1 ;
-(BOOL)isVideoRunning;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(long long)connectionChangeState;
-(void)setConnectionChangeState:(long long)arg1 ;
-(void)setConnectionManager:(VCConnectionManager *)arg1 ;
-(unsigned short)maxPacketLength;
-(void)setMaxPacketLength:(unsigned short)arg1 ;
-(long long)videoPayload;
-(void)setVideoPayload:(long long)arg1 ;
-(BOOL)isAudioRunning;
-(BOOL)isWaitingForICEResult;
-(void)setIsWaitingForICEResult:(BOOL)arg1 ;
-(BOOL)receivedSIPInvite;
-(void)setReceivedSIPInvite:(BOOL)arg1 ;
-(tagHANDLE*)hMediaQueue;
-(void)setHMediaQueue:(tagHANDLE*)arg1 ;
-(void)setHAFRC:(tagHANDLE*)arg1 ;
-(GKRingBuffer *)ringBuf;
-(void)setRingBuf:(GKRingBuffer *)arg1 ;
-(unsigned)lastReceived;
-(void)setLastReceived:(unsigned)arg1 ;
-(int)audioTxBitrate;
-(BOOL)useControlByte;
-(BOOL)useUEP;
-(unsigned char)inputMeter;
-(void)setInputMeter:(unsigned char)arg1 ;
-(int)bandwidthUpstream;
-(void)setBandwidthUpstream:(int)arg1 ;
-(int)bandwidthDownstream;
-(void)setBandwidthDownstream:(int)arg1 ;
-(NSArray *)mutedPeers;
-(void)setMutedPeers:(NSArray *)arg1 ;
-(BOOL)audioIsPaused;
-(void)setNatType:(int)arg1 ;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(NSString *)peerCN;
-(void)setPeerCN:(NSString *)arg1 ;
-(double)packetLossRate;
-(void)setPacketLossRate:(double)arg1 ;
-(double)networkConditionsTimeoutInSeconds;
-(void)setNetworkConditionsTimeoutInSeconds:(double)arg1 ;
-(int)signalRaw;
-(void)setSignalRaw:(int)arg1 ;
-(int)signalGrade;
-(void)setSignalGrade:(int)arg1 ;
-(float)packetLateAndMissingRatio;
-(void)setPacketLateAndMissingRatio:(float)arg1 ;
-(BOOL)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(BOOL)arg1 ;
-(BOOL)useAFRC;
-(BOOL)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(BOOL)arg1 ;
-(BOOL)shouldSendAudio;
-(void)setIsStarted:(BOOL)arg1 ;
-(void)setImageAttributeRules:(VCImageAttributeRules *)arg1 ;
-(unsigned)remoteFrameWidth;
-(void)setRemoteFrameWidth:(unsigned)arg1 ;
-(unsigned)remoteFrameHeight;
-(void)setRemoteFrameHeight:(unsigned)arg1 ;
-(BOOL)isRemoteMediaStalled;
-(void)setBasebandCodecSampleRate:(NSNumber *)arg1 ;
-(void)setBasebandCodecType:(NSString *)arg1 ;
-(long long)sipState;
-(void)setSipState:(long long)arg1 ;
-(BOOL)didSend200OK;
-(void)setDidSend200OK:(BOOL)arg1 ;
-(NSData *)srtpKeyBytes;
-(void)setSrtpKeyBytes:(NSData *)arg1 ;
-(void)vcSecureDataChannel:(id)arg1 messageType:(unsigned)arg2 receivedData:(id)arg3 ;
-(void)sendBasebandCodecMessage;
-(void)avTelephonyInterface:(id)arg1 vocoderInfoChangedToType:(id)arg2 sampleRate:(id)arg3 ;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)didReceiveCaptions:(id)arg1 ;
-(int)handleIncomingWithCallID:(unsigned)arg1 msgIn:(const char*)arg2 msgOut:(char*)arg3 optional:(void*)arg4 confIndex:(int*)arg5 error:(id*)arg6 ;
-(int)setupEncryptionWithKey:(const _CFData*)arg1 confIndex:(int*)arg2 ;
-(BOOL)doBandwidthDetection:(tagHANDLE*)arg1 error:(id*)arg2 ;
-(BOOL)startMediaQueue:(id*)arg1 ;
-(void)processSIPMessage:(char*)arg1 msgOut:(char*)arg2 optional:(void*)arg3 confIndex:(int*)arg4 ;
-(BOOL)shouldNotifyDelegateDidStartBeforeAudioSetup;
-(void)notifyDelegateSessionStarted;
-(void)enableSessionHealthMonitor;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char*)arg2 ;
-(void)handleMediaReceivedOverPeerToPeerLink;
-(void)handleMediaReceivedOverRelayLink;
-(int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned*)arg2 ;
-(int)sipCallback:(int)arg1 callID:(unsigned)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(SecIdentityRef)retrieveIdentity;
-(void)setupDTLSDefaults;
-(void)setLocalIdentityForKeyExchange;
-(void)setupMessaging;
-(void)logIdentity:(SecIdentityRef)arg1 ;
-(long long)calculateSIPEndAction:(BOOL)arg1 currentState:(long long)arg2 error:(id)arg3 ;
-(void)doSipEndAction:(int)arg1 callID:(unsigned)arg2 error:(id)arg3 ;
-(void)disableSessionHealthMonitor;
-(void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2 ;
-(BOOL)treatAsCellular;
-(void)negotiateMediaMaxBandwidth;
-(BOOL)createRTPHandles:(id*)arg1 ;
-(BOOL)prepareSRTPWithError:(id*)arg1 ;
-(BOOL)createMediaQueueHandle:(id*)arg1 ;
-(void)applyNegotiatedSettings;
-(BOOL)applyNegotiatedAudioSettings:(id*)arg1 ;
-(BOOL)applyNegotiatedVideoSettings:(id*)arg1 ;
-(void)applyNegotiatedCaptionsSettings;
-(BOOL)startAFRC:(id*)arg1 ;
-(BOOL)negotiatePayloads:(int*)arg1 numPayloads:(int*)arg2 withError:(id*)arg3 ;
-(BOOL)negotiateMaxBandwidth:(int*)arg1 ;
-(int)getAllCompatibleVideoPayloads:(int*)arg1 forMediaType:(int)arg2 ;
-(id)getCompatibleLocalFeaturesListForPayloads:(int*)arg1 count:(int)arg2 ;
-(BOOL)createSDP:(int*)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int*)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int*)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(imageTag*)arg10 imageSendCount:(int*)arg11 imageSizesRecv:(imageTag*)arg12 imageRecvCount:(int*)arg13 sdp:(char*)arg14 numSDPBytes:(int*)arg15 error:(id*)arg16 ;
-(BOOL)stopMediaQueue:(id*)arg1 ;
-(void)releaseRTPHandles;
-(void)getAllPayloadsForAudio:(int*)arg1 count:(int*)arg2 secondaryPayloads:(int*)arg3 secondaryCount:(int*)arg4 ;
-(void)getAllPayloadsForVideo:(int*)arg1 count:(int*)arg2 ;
-(id)allPayloadsLocalFeaturesString;
-(BOOL)canSendSIPInviteWithError:(id*)arg1 ;
-(id)createInviteSDPWithError:(id*)arg1 ;
-(BOOL)establishSIPDialogWithSDP:(id)arg1 error:(id*)arg2 ;
-(int)mapPacketMultiplexModeToRTPMode:(long long)arg1 ;
-(id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(BOOL)arg3 ;
-(BOOL)setMatchedFeaturesString:(char*)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3 ;
-(BOOL)chooseSecondaryPayloads:(int*)arg1 count:(int)arg2 ;
-(BOOL)chooseDTXPayloads:(int*)arg1 count:(int)arg2 ;
-(void)getDecodePayloads:(int*)arg1 numPayloads:(int*)arg2 withPayload:(int)arg3 secondaryPayloads:(int*)arg4 numSecondaryPayloads:(int)arg5 ;
-(void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2 ;
-(BOOL)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1 ;
-(BOOL)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(BOOL)arg3 isRemoteOnCellular:(BOOL)arg4 ;
-(BOOL)isValidVideoPayloadOverride:(id)arg1 ;
-(void)setPayloadEmergencyTierSettings:(id)arg1 ;
-(BOOL)sendSIPInviteWithError:(id*)arg1 ;
-(BOOL)setupCallerRTPChannelWithError:(id*)arg1 ;
-(void)setupAudioHeaderSize;
-(BOOL)setupAudioTierPicker;
-(unsigned)maximumSamplesPerFrame;
-(BOOL)allocateLastInputSampleBuffer:(unsigned)arg1 ;
-(BOOL)setupAudioCookies;
-(void)startAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopAudioIO:(/*^block*/id)arg1 ;
-(void)removeUnusedAudioPayloads;
-(void)useAudioTier:(id)arg1 ;
-(void)updateAudioTxBitrate;
-(void)useAudioPayload:(id)arg1 withBitrate:(unsigned)arg2 ;
-(int)interfaceForCurrentCall;
-(void)adjustBitrateForConnectionType;
-(BOOL)initializeVideoTransmitter:(id*)arg1 encodeRule:(id)arg2 unpausing:(BOOL)arg3 reportingAgent:(opaqueRTCReportingRef)arg4 ;
-(BOOL)initializeVideoReceiver:(id*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(BOOL)startVideoReceive:(id*)arg1 ;
-(BOOL)stopVideoReceive:(id*)arg1 isPausing:(BOOL)arg2 ;
-(void)setupAACELDPayload:(int)arg1 ;
-(unsigned)codecBitmapForPayloads:(int*)arg1 count:(int)arg2 ;
-(BOOL)sipConnectWithError:(id*)arg1 ;
-(id)deriveAspectRatioFLS;
-(id)retrieveRawFeaturesString;
-(unsigned)maxBitrateForConnectionType;
-(double)sessionReceivingBitrate;
-(double)sessionReceivingFramerate;
-(double)sessionTransmittingBitrate;
-(double)sessionTransmittingFramerate;
-(void)reportDashboardEndResult:(BOOL)arg1 ;
-(BOOL)stopAFRC:(id*)arg1 ;
-(void)cleanupMedia;
-(void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3 ;
-(void)remotePauseDidChangeToState:(BOOL)arg1 forVideo:(BOOL)arg2 ;
-(void)addScreenConfigToSDP:(id)arg1 ;
-(void)getAllPayloadsForScreen:(int*)arg1 count:(int*)arg2 ;
-(void)doSipEndProc:(id)arg1 ;
-(const char*)matchedFeaturesStringForPayload:(int)arg1 ;
-(void)setupBitrateNegotation;
-(void)shouldSendBlackFrame:(BOOL)arg1 ;
-(void)setDuplicationFlag:(BOOL)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 ;
-(void)setupVideoPauseMessages;
-(void)setupAudioPauseMessages;
-(void)setupCellTechChangeMessages;
-(void)setupAudioPausedHBMessages;
-(void)setupCallingModeMessages;
-(void)setupHandoverCandidateChangeMessage;
-(void)setupPiPStateChangeMessage;
-(void)setupBasebandCodecInfoMessages;
-(void)setupAudioOnOffStateMessages;
-(void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2 ;
-(void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2 ;
-(void)transportSession:(id)arg1 sendRelayResponse:(id)arg2 ;
-(void)callAlarmsWithRTPTimeStamp:(unsigned)arg1 ;
-(void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3 ;
-(BOOL)onCaptureFrame:(CVBufferRef)arg1 audioTS:(unsigned)arg2 audioHT:(double)arg3 videoHT:(SCD_Struct_VC21)arg4 droppedFrames:(int)arg5 cameraBits:(unsigned char)arg6 ;
-(void)processBlackFrame:(CVBufferRef)arg1 ;
-(void)updateVideoQualityNotification:(double)arg1 ;
-(void)onPlayVideo:(CVBufferRef)arg1 frameTime:(SCD_Struct_VC21)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(unsigned)parameterSetForPayload:(int)arg1 ;
-(BOOL)isStarted;
-(void)resetState;
-(int)signalStrength;
-(void)setSignalStrength:(int)arg1 ;
-(VCCapabilities *)capabilities;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
@end
