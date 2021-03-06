/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMDReplayStorageController;

@interface IMDReplayController : NSObject {

	IMDReplayStorageController* _storageController;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)replayMessages;
-(void)_processBatch:(id)arg1 ;
-(BOOL)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3 ;
-(void)deleteReplayDBIfNotUnderFirstUnlock;
@end

