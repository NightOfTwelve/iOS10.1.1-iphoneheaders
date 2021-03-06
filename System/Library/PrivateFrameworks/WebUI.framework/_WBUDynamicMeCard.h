/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {

	NSMutableArray* _blocksPendingMeCard;
	CNContact* _me;
	BOOL _meCardExists;

}

@property (nonatomic,readonly) BOOL meCardExists;              //@synthesize meCardExists=_meCardExists - In the implementation block
+(id)_contactObjectComponentForString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)me;
-(void)_addressBookChanged:(id)arg1 ;
-(id)valueForProperty:(id)arg1 contact:(id)arg2 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
-(BOOL)meCardExists;
@end

