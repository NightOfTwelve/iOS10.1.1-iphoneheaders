/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTReachabilityManager : RTNotifier {

	SCNetworkReachabilityRef _reachabilityRef;
	long long _currentReachability;

}

@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,readonly) long long currentReachability;                       //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)sharedInstance;
+(long long)_processReachabilityChange:(unsigned)arg1 ;
+(id)reachabilityToString:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)shutdown;
-(void)setCurrentReachability:(long long)arg1 ;
-(long long)currentReachability;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(BOOL)_getCurrentReachability:(unsigned*)arg1 ;
-(id)currentReachabilityString;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)processReachabilityChange:(unsigned)arg1 ;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
@end

