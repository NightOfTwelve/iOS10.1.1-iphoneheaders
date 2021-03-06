/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMLiftManagerDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMLiftManager;

@interface CMLiftManagerInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	id<CMLiftManagerDelegate> fDelegate;
	Dispatcher* fAccelerometerDispatcher;
	CMLiftDetector* fLiftDetector;
	CMLiftManager* fSender;
	unsigned long long fPrevLiftState;

}
-(id)init;
-(void)dealloc;
-(void)registerForLiftNotifications;
-(void)unregisterForLiftNotifications;
@end

