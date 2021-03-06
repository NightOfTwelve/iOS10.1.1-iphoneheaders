/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Accounts/DataclassOwners/Calendar.bundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@class ACAccountStore, EKEventsDataclassOwner, EKRemindersDataclassOwner, NSString;

@interface CDCOCalendarDataClassOwner : NSObject <ACDDataclassOwnerProtocol> {

	CalDatabase* _calDatabase;
	ACAccountStore* _accountStore;
	EKEventsDataclassOwner* _eventsOwner;
	EKRemindersDataclassOwner* _remindersOwner;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataclasses;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(void)_cleanKeepAwayFromServerCalsInStore:(void*)arg1 ;
-(CalDatabase*)calDatabase;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)_DAAccountIdentifierForAccount:(id)arg1 withChildren:(id)arg2 ;
-(BOOL)mergeEntityType:(int)arg1 fromStore:(void*)arg2 toStore:(void*)arg3 inDatabase:(CalDatabase*)arg4 ;
-(id)init;
-(void)dealloc;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)accountStore;
-(NSString *)clientIdentifier;
@end

