/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSObject;

@interface PHCloudResourceManager : NSObject {

	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _requestsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _currentRequestID;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)cancelRequest:(int)arg1 ;
-(void)_updateCloudResourceDownloadStatesOnStatusDidChangeNotification:(id)arg1 ;
-(void)_updateCloudResourceDownloadStatesOnConnectionLostNotification:(id)arg1 ;
-(void)_synchronized:(/*^block*/id)arg1 ;
-(int)requestCloudResourceType:(unsigned long long)arg1 forAssetWithObjectID:(id)arg2 downloadIsTransient:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
