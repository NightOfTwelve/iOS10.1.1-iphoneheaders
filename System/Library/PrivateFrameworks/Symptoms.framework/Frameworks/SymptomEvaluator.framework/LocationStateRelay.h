/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class RTRoutineManager, NSBundle, CLLocationManager, NSArray, NSString;

@interface LocationStateRelay : NSObject <CLLocationManagerDelegate> {

	void* coreLocationDyLibHandle;
	void* coreRoutineDyLibHandle;
	RTRoutineManager* routineManager;
	NSBundle* mobileWiFiBundle;
	CLLocationManager* mobileWiFiLocationManager;
	Class CLLocationManagerClassRef;
	NSArray* _allLOIs;

}

@property (retain) NSArray * allLOIs;                               //@synthesize allLOIs=_allLOIs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)fetchCurrentLocationLOIOnQueue:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)unloadFrameworks;
-(long long)preflightFrameworks;
-(id)mobileWiFiLocationManager;
-(BOOL)loadCoreRoutine;
-(BOOL)loadCoreLocation;
-(void)fetchLOICountOnMainQueueWithReply:(/*^block*/id)arg1 ;
-(BOOL)authorizedToUseCoreRoutine;
-(void)showLocationArrow;
-(NSArray *)allLOIs;
-(void)setAllLOIs:(NSArray *)arg1 ;
@end

