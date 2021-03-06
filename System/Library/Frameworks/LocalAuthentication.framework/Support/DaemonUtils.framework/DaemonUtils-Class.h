/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface DaemonUtils : NSObject {

	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
+(id)_pluginDisplayNameForUUID:(id)arg1 bundleId:(id*)arg2 ;
+(id)_callerUUID;
+(id)_pluginDisplayNameForPID:(int)arg1 bundleId:(id*)arg2 ;
+(id)callerDisplayNameWithPid:(int)arg1 bundleId:(id*)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serverQueue;
@end

