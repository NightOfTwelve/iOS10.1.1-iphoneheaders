/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, _HKTimePeriod, HKActivityCache, HDSourceEntity, HKQuantityType, HDActivityCacheDataSource, NSSet, HKQuantitySample, _HKDelayedOperation, NSHashTable, NSDate, NSTimeZone, NSCalendar, NSString;

@interface HDActivityCacheManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	long long _todayActivityCacheIndex;
	long long _yesterdayActivityCacheIndex;
	BOOL _cacheIndicesAreSet;
	_HKTimePeriod* _todayDateRange;
	_HKTimePeriod* _yesterdayDateRange;
	BOOL _existingActivityCachesAreSet;
	HKActivityCache* _existingYesterdayActivityCache;
	HKActivityCache* _existingTodayActivityCache;
	HDSourceEntity* _localDeviceSourceEntity;
	HKQuantityType* _pushCountType;
	HDActivityCacheDataSource* _dataSource;
	HKQuantityType* _calorieGoalType;
	NSSet* _allQuantityTypes;
	HKQuantitySample* _todayGoal;
	HKQuantitySample* _yesterdayGoal;
	BOOL _shouldSendCacheUpdateNotification;
	_HKDelayedOperation* _updateCachesOperation;
	_HKDelayedOperation* _rebuildCachesOperation;
	NSHashTable* _observers;
	BOOL _hasSubscribedToSignificantTimeChangeNotifications;
	long long _wheelchairUse;
	NSDate* _dateOverride;
	NSTimeZone* _timeZoneOverride;

}

@property (nonatomic,retain) NSDate * dateOverride;                                   //@synthesize dateOverride=_dateOverride - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZoneOverride;                           //@synthesize timeZoneOverride=_timeZoneOverride - In the implementation block
@property (readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) HKActivityCache * currentActivityCache; 
@property (nonatomic,readonly) HKActivityCache * yesterdayActivityCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSCalendar *)calendar;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDateOverride:(NSDate *)arg1 ;
-(NSDate *)dateOverride;
-(void)_queue_updateCaches;
-(void)_queue_rebuildActivityCaches;
-(BOOL)_queue_readyToSaveCaches;
-(id)_queue_saveCacheWithDateRange:(id)arg1 calorieGoal:(id)arg2 cacheIndex:(long long)arg3 previousCache:(id)arg4 statisticsBuilder:(id)arg5 wheelchairUse:(long long)arg6 ;
-(void)_queue_alertObserversTodayActivityCacheChanged:(id)arg1 ;
-(void)_queue_alertObserversYesterdayActivityCacheChanged:(id)arg1 ;
-(BOOL)_queue_saveTodayCache;
-(BOOL)_queue_saveYesterdayCache;
-(BOOL)_queue_readyToPrimeDataSource;
-(BOOL)_queue_goalsSet;
-(id)_mostRecentGoalBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)_queue_resetDailyGoals;
-(void)_queue_updateDailyGoalsWithGoalSample:(id)arg1 ;
-(void)_queue_primeCacheIndices;
-(void)_queue_primeLocalSource;
-(void)_queue_primeExistingActivityCaches;
-(void)_queue_primeDailyGoals;
-(void)_queue_primeDataSource;
-(void)_queue_saveCaches;
-(id)_queue_gregorianCalendar;
-(id)_queue_today;
-(void)_calculateCacheIndicesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2 todayStart:(id)arg3 yesterdayStart:(id)arg4 calendar:(id)arg5 ;
-(void)_queue_resetExistingActivityCaches;
-(void)_queue_updateDateRangesWithExistingActivityCaches;
-(void)_queue_resetCacheIndices;
-(void)_queue_resetDataSource;
-(id)_queue_currentTimeZone;
-(void)_queue_resetEverything;
-(void)_queue_updateDailyGoalsWithSamples:(id)arg1 ;
-(void)_significantTimeChangeOccurred:(id)arg1 ;
-(void)_didReceiveSignificantTimeChangeNotification;
-(void)_queue_streamSamplesAdded;
-(void)_queue_registerForSignificantTimeChangeNotification;
-(void)_queue_updateWheelchairUse;
-(void)_userCharacteristicsDidChangeNotification:(id)arg1 ;
-(void)_queue_deleteExistingActivityCaches;
-(HKActivityCache *)currentActivityCache;
-(HKActivityCache *)yesterdayActivityCache;
-(void)addActivityCacheObserver:(id)arg1 ;
-(void)removeActivityCacheObserver:(id)arg1 ;
-(NSTimeZone *)timeZoneOverride;
-(void)setTimeZoneOverride:(NSTimeZone *)arg1 ;
@end
