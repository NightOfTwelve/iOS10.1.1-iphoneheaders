/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUAudioController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSArray;

@interface TUAudioSystemController : TUAudioController {

	NSObject*<OS_dispatch_queue> _uplinkMutedQueue;
	NSObject*<OS_dispatch_queue> _downlinkMutedQueue;
	NSObject*<OS_dispatch_queue> _ttyQueue;
	NSObject*<OS_dispatch_queue> _pickableRoutesQueue;
	NSNumber* _isUplinkMutedCached;
	NSNumber* _isDownlinkMutedCached;
	NSNumber* _isTTYCached;
	NSArray* _pickableRoutesForTTY;
	NSArray* _pickableRoutesForPhoneCall;
	NSArray* _pickableRoutesForPlayAndRecordVideo;
	NSArray* _pickableRoutesForPlayAndRecordVoice;
	NSArray* _pickableRoutesForPlayAndRecordRemoteVoice;
	NSArray* _pickableRoutesForVoicemail;
	BOOL _isRequestingUplinkMuted;
	BOOL _isRequestingDownlinkMuted;
	BOOL _isRequestingTTY;
	BOOL _isRequestingPickableRoutesForTTY;
	BOOL _isRequestingPickableRoutesForPhoneCall;
	BOOL _isRequestingPickableRoutesForPlayAndRecordVideo;
	BOOL _isRequestingPickableRoutesForPlayAndRecordVoice;
	BOOL _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
	BOOL _isRequestingPickableRoutesForVoicemail;
	unsigned long long _lastUplinkMutedRequestScheduleTime;
	unsigned long long _lastDownlinkMutedRequestScheduleTime;
	unsigned long long _lastTTYRequestScheduleTime;
	unsigned long long _lastTTYPickableRoutesScheduleTime;
	unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
	unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
	unsigned long long _lastVoicemailRoutesScheduleTime;

}

@property (assign,getter=isUplinkMuted,nonatomic) BOOL uplinkMuted; 
@property (assign,getter=isDownlinkMuted,nonatomic) BOOL downlinkMuted; 
@property (getter=isTTY,nonatomic,readonly) BOOL tty; 
+(id)sharedSystemController;
+(id)sharedAudioSystemController;
+(id)sourceIdentifierForRouteID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg1 ;
-(void)_handlePickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_updateCachedState;
-(BOOL)isUplinkMuted;
-(BOOL)isDownlinkMuted;
-(BOOL)isTTY;
-(id)pickableRoutesForTTY;
-(id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1 ;
-(id)bestGuessPickableRoutesForAnyCall;
-(void)_handleDownlinkMuteDidChangeNotification:(id)arg1 ;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg1 ;
-(id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2 ;
-(id)pickableRouteWithUniqueIdentifier:(id)arg1 ;
-(BOOL)shouldSuppressCallUsingRoute:(id)arg1 ;
-(void)_handleServerConnectionDiedNotification:(id)arg1 ;
@end
