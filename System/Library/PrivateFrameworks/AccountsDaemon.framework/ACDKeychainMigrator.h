/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface ACDKeychainMigrator : NSObject {

	ACAccountStore* _store;

}
+(id)sharedInstance;
-(id)init;
-(void)migrateAllKeychainItems;
-(id)allKeychainItems;
-(BOOL)migrateKeychainItem:(id)arg1 ;
-(void)_validateKeychainItemClass:(id)arg1 ;
-(id)_keychainItemsForUsername:(id)arg1 accountTypeIdentifiers:(id)arg2 ;
-(id)_keychainItemFromAttributesArray:(id)arg1 ;
-(id)_keychainItemFromAttributes:(id)arg1 ;
@end
