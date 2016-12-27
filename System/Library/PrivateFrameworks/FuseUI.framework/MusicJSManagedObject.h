/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, JSManagedValue;

@interface MusicJSManagedObject : NSObject {

	IKAppContext* _appContext;
	JSManagedValue* _managedValue;
	id _object;
	id _owner;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) id object; 
@property (nonatomic,__weak,readonly) id owner; 
-(id)init;
-(void)dealloc;
-(id)object;
-(id)owner;
-(IKAppContext *)appContext;
-(id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3 ;
@end
