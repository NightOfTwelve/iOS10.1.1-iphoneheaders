/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Accounts/Notification/NotesAccountNotificationPlugin.bundle/NotesAccountNotificationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NotesAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relevantAccountTypeIdentifiers;
-(void)acAccount:(id)arg1 wasDeletedInStore:(id)arg2 ;
-(void)deleteAccountForACAccount:(id)arg1 ;
-(void)fetchAndSetMigrationStateForACAccount:(id)arg1 inStore:(id)arg2 ;
-(void)acAccount:(id)arg1 wasModifiedInStore:(id)arg2 ;
-(void)deleteLegacyAccountForACAccount:(id)arg1 ;
-(BOOL)shouldProcessChangeType:(int)arg1 forACAccount:(id)arg2 ;
-(void)updateAccountForParentACAccount:(id)arg1 inStore:(id)arg2 ;
-(void)updateLegacyAccountForParentACAccount:(id)arg1 ;
-(void)deleteSpotlightDomainForAccount:(id)arg1 ;
-(void)deleteSpotlightDomainIfNecessaryForAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)isModernNotesACAccount:(id)arg1 ;
-(id)init;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

