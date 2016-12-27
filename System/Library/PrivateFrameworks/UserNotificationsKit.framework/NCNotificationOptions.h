/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/UserNotificationsKit-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, NSString;

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {

	NSSet* _alertSuppressionContexts;
	NSString* _alternateActionLabel;
	BOOL _dismissAutomatically;
	BOOL _overridesQuietMode;
	BOOL _alertsWhenLocked;
	BOOL _addToLockScreenWhenLocked;
	unsigned long long _lockScreenPersistence;
	unsigned long long _lockScreenPriority;
	unsigned long long _realertCount;
	BOOL _suppressesAlertsWhenAppIsActive;
	BOOL _silencedByMenuButtonPress;
	BOOL _overridesPocketMode;
	BOOL _canPlaySound;
	BOOL _canTurnOnDisplay;
	BOOL _requestsFullScreenPresentation;
	BOOL _hideClearActionInList;
	unsigned long long _messageNumberOfLines;
	BOOL _ignoreAttachmentImageThumbnailCrop;
	BOOL _preemptsPresentedNotification;
	BOOL _revealsAdditionalContentOnPresentation;
	BOOL _suppressesMessageWhenLocked;
	BOOL _suppressesSubtitleWhenLocked;
	BOOL _coalescesWhenLocked;

}

@property (nonatomic,copy,readonly) NSSet * alertSuppressionContexts;                    //@synthesize alertSuppressionContexts=_alertSuppressionContexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateActionLabel;                     //@synthesize alternateActionLabel=_alternateActionLabel - In the implementation block
@property (nonatomic,readonly) BOOL dismissAutomatically;                                //@synthesize dismissAutomatically=_dismissAutomatically - In the implementation block
@property (nonatomic,readonly) BOOL overridesQuietMode;                                  //@synthesize overridesQuietMode=_overridesQuietMode - In the implementation block
@property (nonatomic,readonly) BOOL alertsWhenLocked;                                    //@synthesize alertsWhenLocked=_alertsWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL addToLockScreenWhenUnlocked;                         //@synthesize addToLockScreenWhenLocked=_addToLockScreenWhenLocked - In the implementation block
@property (nonatomic,readonly) unsigned long long lockScreenPersistence;                 //@synthesize lockScreenPersistence=_lockScreenPersistence - In the implementation block
@property (nonatomic,readonly) unsigned long long lockScreenPriority;                    //@synthesize lockScreenPriority=_lockScreenPriority - In the implementation block
@property (nonatomic,readonly) unsigned long long realertCount;                          //@synthesize realertCount=_realertCount - In the implementation block
@property (nonatomic,readonly) BOOL suppressesAlertsWhenAppIsActive;                     //@synthesize suppressesAlertsWhenAppIsActive=_suppressesAlertsWhenAppIsActive - In the implementation block
@property (nonatomic,readonly) BOOL canPlaySound;                                        //@synthesize canPlaySound=_canPlaySound - In the implementation block
@property (nonatomic,readonly) BOOL canTurnOnDisplay;                                    //@synthesize canTurnOnDisplay=_canTurnOnDisplay - In the implementation block
@property (nonatomic,readonly) BOOL requestsFullScreenPresentation;                      //@synthesize requestsFullScreenPresentation=_requestsFullScreenPresentation - In the implementation block
@property (nonatomic,readonly) BOOL preemptsPresentedNotification;                       //@synthesize preemptsPresentedNotification=_preemptsPresentedNotification - In the implementation block
@property (nonatomic,readonly) BOOL revealsAdditionalContentOnPresentation;              //@synthesize revealsAdditionalContentOnPresentation=_revealsAdditionalContentOnPresentation - In the implementation block
@property (nonatomic,readonly) BOOL suppressesContentWhenLocked; 
@property (nonatomic,readonly) BOOL suppressesMessageWhenLocked;                         //@synthesize suppressesMessageWhenLocked=_suppressesMessageWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL suppressesSubtitleWhenLocked;                        //@synthesize suppressesSubtitleWhenLocked=_suppressesSubtitleWhenLocked - In the implementation block
@property (nonatomic,readonly) BOOL silencedByMenuButtonPress;                           //@synthesize silencedByMenuButtonPress=_silencedByMenuButtonPress - In the implementation block
@property (nonatomic,readonly) BOOL overridesPocketMode;                                 //@synthesize overridesPocketMode=_overridesPocketMode - In the implementation block
@property (nonatomic,readonly) BOOL hideClearActionInList;                               //@synthesize hideClearActionInList=_hideClearActionInList - In the implementation block
@property (nonatomic,readonly) unsigned long long messageNumberOfLines;                  //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (nonatomic,readonly) BOOL ignoreAttachmentImageThumbnailCrop;                  //@synthesize ignoreAttachmentImageThumbnailCrop=_ignoreAttachmentImageThumbnailCrop - In the implementation block
@property (nonatomic,readonly) BOOL coalescesWhenLocked;                                 //@synthesize coalescesWhenLocked=_coalescesWhenLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(BOOL)suppressesSubtitleWhenLocked;
-(BOOL)suppressesMessageWhenLocked;
-(NSSet *)alertSuppressionContexts;
-(NSString *)alternateActionLabel;
-(unsigned long long)realertCount;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)revealsAdditionalContentOnPresentation;
-(BOOL)coalescesWhenLocked;
-(BOOL)ignoreAttachmentImageThumbnailCrop;
-(BOOL)hideClearActionInList;
-(BOOL)suppressesContentWhenLocked;
-(unsigned long long)lockScreenPriority;
-(unsigned long long)lockScreenPersistence;
-(BOOL)preemptsPresentedNotification;
-(BOOL)dismissAutomatically;
-(BOOL)alertsWhenLocked;
-(BOOL)addToLockScreenWhenUnlocked;
-(BOOL)silencedByMenuButtonPress;
-(BOOL)canPlaySound;
-(BOOL)canTurnOnDisplay;
-(BOOL)requestsFullScreenPresentation;
-(id)initWithNotificationOptions:(id)arg1 ;
@end
