/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICKeychainUtilities : NSObject
+(BOOL)touchIDIsEnrolled;
+(BOOL)removeItemForIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)addItemWithoutGuardian:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)addDevicePasscodeGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)getItemForIdentifier:(id)arg1 alertTextForAuthentication:(id)arg2 error:(id*)arg3 ;
+(id)secAccessControlObjectWithCreationFlag:(unsigned long long)arg1 error:(id*)arg2 ;
+(BOOL)addItem:(id)arg1 forIdentifier:(id)arg2 secAccessControlObject:(id)arg3 error:(id*)arg4 ;
+(void)beginEvaluatePolicyReplyBlock;
+(void)endEvaluatePolicyReplyBlock;
+(BOOL)looselyAuthenticateWithDevicePasscodeWithAlertText:(id)arg1 ;
+(BOOL)addTouchIDGuardedItem:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
@end
