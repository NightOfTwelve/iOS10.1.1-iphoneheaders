/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)progressForBundleID:(id)arg1 ;
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
-(void)removeProgressForBundleID:(id)arg1 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
