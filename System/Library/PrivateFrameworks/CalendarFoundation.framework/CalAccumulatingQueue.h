/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface CalAccumulatingQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _tags;
	NSMutableDictionary* _context;
	/*^block*/id _block;
	float _delay;

}
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 delay:(float)arg3 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_hasQueuedUpBlock;
-(id)initWithQueue:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)updateTagsAndExecuteBlock:(id)arg1 ;
@end

