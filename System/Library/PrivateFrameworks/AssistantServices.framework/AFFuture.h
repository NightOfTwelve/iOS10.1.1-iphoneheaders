/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface AFFuture : NSObject {

	NSObject*<OS_dispatch_group> _group;
	id _value;

}
-(id)initAndGetSetterBlock:(/*^block*/id*)arg1 ;
-(id)waitForValue:(unsigned long long)arg1 ;
@end

