/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, SSDownloadManager, NSString;

@interface LegacyDownloadClient : NSObject <SSDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableOrderedSet* _blessedDownloadIDs;
	NSMutableOrderedSet* _canceledDownloadIDs;
	SSDownloadManager* _manager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeDownloadID:(long long)arg1 ;
-(void)_cleanupAbandonedDownloads:(id)arg1 ;
-(void)_cancelDownloads:(id)arg1 ;
-(id)init;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
@end
