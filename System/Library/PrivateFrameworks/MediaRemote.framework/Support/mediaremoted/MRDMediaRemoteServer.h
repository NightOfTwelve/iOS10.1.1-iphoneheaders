/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDMediaRemoteClientDelegate.h>
#import <mediaremoted/MRDXPCMessageHandling.h>
#import <mediaremoted/MRDNowPlayingDataSourceDelegate.h>
#import <mediaremoted/MRDTelevisionRemoteDelegate.h>
#import <mediaremoted/MRDVirtualAudioInputServerDelegate.h>
#import <mediaremoted/MRDBluetoothAccessoryControllerDelegate.h>
#import <mediaremoted/MRDPhoneCallControllerDelegate.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, MRDNowPlayingDataSource, MRDAVRoutingDataSource, MRDNowPlayingInfoServer, MRDVolumeController, MRDRemoteControlServer, MRDBrowsableContentServer, MRDTelevisionRemoteServer, MRDAVRoutingServer, MRDVirtualAudioInputServer, MRDTransactionServer, MRDBackgroundTasks, MRDMediaRemoteClient, NSMutableDictionary, NSMutableArray, NSMutableSet, MRMutableApplicationActivity, NSLock, NSArray, NSString;

@interface MRDMediaRemoteServer : NSObject <MRDMediaRemoteClientDelegate, MRDXPCMessageHandling, MRDNowPlayingDataSourceDelegate, MRDTelevisionRemoteDelegate, MRDVirtualAudioInputServerDelegate, MRDBluetoothAccessoryControllerDelegate, MRDPhoneCallControllerDelegate> {

	NSObject*<OS_xpc_object> _listenerConnection;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	MRDNowPlayingDataSource* _localNowPlayingDataSource;
	MRDAVRoutingDataSource* _localRoutingDataSource;
	MRDNowPlayingInfoServer* _nowPlayingInfoServer;
	MRDVolumeController* _volumeController;
	MRDRemoteControlServer* _remoteControlServer;
	MRDBrowsableContentServer* _browsableContentServer;
	MRDTelevisionRemoteServer* _televisionServer;
	MRDAVRoutingServer* _routingServer;
	MRDVirtualAudioInputServer* _virtualAudioInputServer;
	MRDTransactionServer* _transactionServer;
	MRDBackgroundTasks* _tasks;
	MRDMediaRemoteClient* _overrideClient;
	NSMutableDictionary* _activeClients;
	NSMutableDictionary* _customOrigins;
	NSMutableArray* _applicationStateMonitors;
	NSMutableSet* _runAssertions;
	MROriginRef _activeOrigin;
	MRMutableApplicationActivity* _currentAppActivity;
	NSLock* _currentAppActivityLock;
	int _nowPlayingApplicationDidChangeToken;
	int _nowPlayingApplicationIsPlayingDidChangeToken;
	int _anyApplicationIsPlayingDidChangeToken;
	NSMutableDictionary* _customOriginIsPlayingTokens;
	BOOL _shouldSendCommandsDuringPhoneCall;

}

@property (nonatomic,readonly) NSArray * availableOrigins; 
@property (nonatomic,readonly) NSArray * customOrigins; 
@property (nonatomic,readonly) MRDNowPlayingInfoServer * nowPlayingInfoServer;              //@synthesize nowPlayingInfoServer=_nowPlayingInfoServer - In the implementation block
@property (nonatomic,readonly) int localNowPlayingPID; 
@property (nonatomic,readonly) NSString * localNowPlayingAppDisplayID; 
@property (nonatomic,readonly) BOOL localNowPlayingApplicationIsPlaying; 
@property (nonatomic,readonly) unsigned localNowPlayingPlaybackState; 
@property (nonatomic,readonly) BOOL nowPlayingClientIsPlaying; 
@property (nonatomic,readonly) BOOL shouldSendCommandsDuringPhoneCall;                      //@synthesize shouldSendCommandsDuringPhoneCall=_shouldSendCommandsDuringPhoneCall - In the implementation block
@property (nonatomic,retain) MRDMediaRemoteClient * overrideClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * localNowPlayingClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * systemMediaClient; 
@property (nonatomic,readonly) MRDMediaRemoteClient * frontmostClient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)clientWithRegisteredCustomOrigin:(MROriginRef)arg1 ;
-(id)clientForBundleIdentifier:(id)arg1 ;
-(MROriginRef)copyActiveOrigin;
-(unsigned)resolveContextualCommandForCurrentNowPlaying:(unsigned)arg1 ;
-(void)pickRouteWithUID:(id)arg1 ;
-(NSString *)localNowPlayingAppDisplayID;
-(MRDMediaRemoteClient *)localNowPlayingClient;
-(BOOL)nowPlayingClientIsPlaying;
-(MRDMediaRemoteClient *)frontmostClient;
-(MRDMediaRemoteClient *)systemMediaClient;
-(void)postClientNotificationNamed:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)shouldSendCommandsDuringPhoneCall;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(MROriginRef)copyAvailableOriginMatchingUniqueIdentifier:(int)arg1 ;
-(MRDNowPlayingInfoServer *)nowPlayingInfoServer;
-(void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1 ;
-(void)televisionServer:(id)arg1 didReceiveCommand:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)localNowPlayingPID;
-(void)_sendMediaRemoteCommand:(unsigned)arg1 withOrigin:(MROriginRef)arg2 ;
-(void)_postActiveOriginDidChange;
-(void)_postAvailableOriginsDidChange;
-(void)_clientDidOpenConnection:(id)arg1 ;
-(void)reinitializeClient:(id)arg1 ;
-(void)reinitializePlaybackQueue:(id)arg1 ;
-(id)_createNotificationMessage:(id)arg1 userInfo:(id)arg2 ;
-(MROriginRef)_createRestoredActiveOrigin;
-(MROriginRef)copyCustomOriginMatchingUniqueIdentifier:(unsigned)arg1 ;
-(void)_setActiveOrigin:(MROriginRef)arg1 whileRestoringFromSavedState:(BOOL)arg2 ;
-(void)_savePersistentActiveOrigin:(MROriginRef)arg1 ;
-(void)_postNowPlayingAppIsPlayingDidChange;
-(void)_postNowPlayingApplicationDidChange;
-(BOOL)originIsActiveOrigin:(MROriginRef)arg1 ;
-(void)setActiveOrigin:(MROriginRef)arg1 ;
-(NSArray *)availableOrigins;
-(NSArray *)customOrigins;
-(unsigned)_localNowPlayingPlaybackStateForOrigin:(MROriginRef)arg1 ;
-(BOOL)nowPlayingClientIsPlayingWithOrigin:(MROriginRef)arg1 ;
-(BOOL)localNowPlayingApplicationIsPlaying;
-(void)_endApplicationActivity:(id)arg1 ;
-(void)_beginApplicationActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_postAppActivityNotificationNamed:(id)arg1 withActivity:(id)arg2 ;
-(void)_handleServerXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetCanBeNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppOverrideMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetOverriddenNowPlayingAppMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingInfoMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingArtworkMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppDisplayIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppPIDMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppDisplayNameMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetNowPlayingAppPlaybackStateMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetAnyAppIsPlayingMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSelectSourceMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetAvailableOriginsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetActiveOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRegisterCustomOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRemoveCustomOriginMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleKeepAliveMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handlePostNotificationMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleBeginApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetCurrentApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleEndApplicationActivityMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetNowPlayingPlaybackQueue:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSystemVolumeMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleAdjustSystemVolumeByStepMessage:(id)arg1 fromClient:(id)arg2 ;
-(MRDMediaRemoteClient *)overrideClient;
-(void)setOverrideClient:(MRDMediaRemoteClient *)arg1 ;
-(void)_processNowPlayingInfoUpdate:(id)arg1 ;
-(MROriginRef)_copyActiveOrRegisteredOriginForUID:(int)arg1 ;
-(void)_postClientNotificationNamed:(id)arg1 withOrigin:(MROriginRef)arg2 userInfo:(id)arg3 ;
-(BOOL)registerCustomOrigin:(MROriginRef)arg1 ;
-(BOOL)removeCustomOrigin:(MROriginRef)arg1 ;
-(BOOL)_internalMediaRemoteNotificationIsLegal:(id)arg1 ;
-(BOOL)_interalMediaRemoteNotificationIsLegalInternal:(id)arg1 ;
-(void)_handleInternalNotification:(id)arg1 message:(id)arg2 fromClient:(id)arg3 ;
-(void)setCurrentApplicationActivity:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)currentApplicationActivity;
-(id)_destinationClientFromXPCMessage:(id)arg1 ;
-(void)removeClientForPID:(int)arg1 ;
-(void)_postNowPlayingAppIsPlayingDidChangeWithOrigin:(MROriginRef)arg1 ;
-(void)_postAnyAppIsPlayingDidChangeNotification;
-(void)_postNowPlayingInfoDidChangeNotification;
-(void)_postNowPlayingInfoDidChangeNotificationForOrigin:(MROriginRef)arg1 ;
-(void)_handleInvalidateNowPlayingPlaybackQueue:(id)arg1 fromClient:(id)arg2 ;
-(void)_prepareRemoteControlInterfacesForStartedActivity:(id)arg1 ;
-(void)_prepareRemoteControlInterfacesForStartingActivity:(id)arg1 ;
-(void)_teardownRemoteControlInterfacesForEndedActivity:(id)arg1 ;
-(void)mediaRemoteClientInvalidated:(id)arg1 ;
-(void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1 ;
-(void)nowPlayingDataSourceAnyApplicationPlaybackStateDidChange:(id)arg1 ;
-(void)virtualAudioInputServer:(id)arg1 didUpdateRecordingState:(unsigned)arg2 forDevice:(id)arg3 ;
-(unsigned)localNowPlayingPlaybackState;
-(id)addRunAssertionWithName:(id)arg1 ;
-(void)removeRunAssertion:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)stop;
-(void)start;
-(void)addClient:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)allClients;
-(id)clientForPID:(int)arg1 ;
@end

