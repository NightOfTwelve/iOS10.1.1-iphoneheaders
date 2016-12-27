/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSNumberFormatter, NSObject;

@interface MCFormatterVendor : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedInstance;
-(id)numberFormatter;
-(id)init;
-(void)dealloc;
-(void)_localeDidChange:(id)arg1 ;
@end
