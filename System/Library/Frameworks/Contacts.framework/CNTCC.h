/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNTCC : NSObject {

	long long _simulateType;
	BOOL _simulateAccessPrompt;
	BOOL _simulateAccessPromptGranted;
	unsigned _simulateAccessPromptDelay;

}
+(id)sharedInstance;
-(id)_simulateQueue;
-(int)accessPreflight;
-(unsigned char)isAccessRestricted;
-(void)accessRequestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned char)checkAuditToken:(SCD_Struct_CN1)arg1 ;
-(void)simulate:(long long)arg1 ;
-(void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(BOOL)arg1 withDelay:(unsigned)arg2 ;
@end

