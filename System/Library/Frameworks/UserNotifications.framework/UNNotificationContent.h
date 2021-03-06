/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber, NSString, UNNotificationSound, NSDictionary;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _attachments;
	NSNumber* _badge;
	NSString* _body;
	NSString* _categoryIdentifier;
	NSString* _darwinNotificationName;
	NSString* _darwinSnoozedNotificationName;
	BOOL _fromSnooze;
	BOOL _hasDefautAction;
	NSString* _launchImageName;
	NSArray* _peopleIdentifiers;
	BOOL _shouldAddToNotificationsList;
	BOOL _shouldAlwaysAlertWhileAppIsForeground;
	BOOL _shouldLockDevice;
	BOOL _shouldPauseMedia;
	BOOL _snoozeable;
	UNNotificationSound* _sound;
	NSString* _subtitle;
	NSString* _threadIdentifier;
	NSString* _title;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                           //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultAction;                                      //@synthesize hasDefautAction=_hasDefautAction - In the implementation block
@property (nonatomic,readonly) BOOL shouldAddToNotificationsList;                          //@synthesize shouldAddToNotificationsList=_shouldAddToNotificationsList - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysAlertWhileAppIsForeground;                 //@synthesize shouldAlwaysAlertWhileAppIsForeground=_shouldAlwaysAlertWhileAppIsForeground - In the implementation block
@property (nonatomic,readonly) BOOL shouldLockDevice;                                      //@synthesize shouldLockDevice=_shouldLockDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldPauseMedia;                                      //@synthesize shouldPauseMedia=_shouldPauseMedia - In the implementation block
@property (getter=isSnoozeable,nonatomic,readonly) BOOL snoozeable;                        //@synthesize snoozeable=_snoozeable - In the implementation block
@property (getter=isFromSnooze,nonatomic,readonly) BOOL fromSnooze;                        //@synthesize fromSnooze=_fromSnooze - In the implementation block
@property (nonatomic,copy,readonly) NSString * darwinNotificationName;                     //@synthesize darwinNotificationName=_darwinNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * darwinSnoozedNotificationName;              //@synthesize darwinSnoozedNotificationName=_darwinSnoozedNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachments;                                 //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * badge;                                      //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                       //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                         //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageName;                            //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSound * sound;                           //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                           //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(NSString *)subtitle;
-(BOOL)isFromSnooze;
-(NSString *)threadIdentifier;
-(UNNotificationSound *)sound;
-(NSString *)launchImageName;
-(NSString *)categoryIdentifier;
-(BOOL)isSnoozeable;
-(NSNumber *)badge;
-(NSString *)darwinNotificationName;
-(BOOL)shouldAlwaysAlertWhileAppIsForeground;
-(BOOL)hasDefaultAction;
-(BOOL)shouldLockDevice;
-(BOOL)shouldPauseMedia;
-(NSString *)darwinSnoozedNotificationName;
-(BOOL)shouldAddToNotificationsList;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(NSArray *)peopleIdentifiers;
-(id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 darwinNotificationName:(id)arg5 darwinSnoozedNotificationName:(id)arg6 fromSnooze:(BOOL)arg7 hasDefaultAction:(BOOL)arg8 launchImageName:(id)arg9 peopleIdentifiers:(id)arg10 shouldAddToNotificationsList:(BOOL)arg11 shouldAlwaysAlertWhileAppIsForeground:(BOOL)arg12 shouldLockDevice:(BOOL)arg13 shouldPauseMedia:(BOOL)arg14 snoozeable:(BOOL)arg15 sound:(id)arg16 subtitle:(id)arg17 threadIdentifier:(id)arg18 title:(id)arg19 userInfo:(id)arg20 ;
@end

