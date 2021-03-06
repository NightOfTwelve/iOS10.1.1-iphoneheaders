/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSHashTable, Alarm, NSDate, NSArray;

@interface AlarmManager : NSObject {

	NSString* _defaultSound;
	long long _defaultSoundType;
	BOOL _dirty;
	NSMutableArray* _alarms;
	NSHashTable* _observers;
	BOOL invalidAlarmsDetected;
	NSMutableArray* logMessageList;
	Alarm* _sleepAlarm;
	NSDate* lastModified;

}

@property (nonatomic,retain) NSDate * lastModified; 
@property (nonatomic,readonly) Alarm * sleepAlarm;                         //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (nonatomic,retain) NSMutableArray * logMessageList; 
@property (assign,nonatomic) BOOL invalidAlarmsDetected; 
@property (nonatomic,readonly) long long defaultSoundType; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,retain) NSString * defaultVibrationID; 
@property (nonatomic,readonly) NSArray * alarms;                           //@synthesize alarms=_alarms - In the implementation block
+(id)sharedManager;
+(id)copySleepAlarmFromPreferences;
+(id)copyReadAlarmsFromPreferences;
+(void)writeAlarmsToPreferences:(id)arg1 ;
+(void)writeSleepAlarmToPreferences:(id)arg1 ;
+(BOOL)isAlarmNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)alarms;
-(void)removeAlarm:(id)arg1 ;
-(void)setLogMessageList:(NSMutableArray *)arg1 ;
-(void)loadDefaultSoundAndType;
-(void)unloadAlarms;
-(void)countAlarmsInAggregateDictionary;
-(id)nextAlarmForDate:(id)arg1 activeOnly:(BOOL)arg2 allowRepeating:(BOOL)arg3 allowSnoozed:(BOOL)arg4 ;
-(id)nextAlarmForDate:(id)arg1 activeOnly:(BOOL)arg2 allowRepeating:(BOOL)arg3 allowSnoozed:(BOOL)arg4 allowSleepAlarm:(BOOL)arg5 ;
-(Alarm *)sleepAlarm;
-(void)updateAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)saveAlarms;
-(void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2 ;
-(void)loadScheduledNotificationsWithCancelUnused:(BOOL)arg1 ;
-(void)reloadScheduledNotificationsWithRefreshActive:(BOOL)arg1 cancelUnused:(BOOL)arg2 ;
-(void)handleNotificationFired:(id)arg1 ;
-(void)handleNotificationSnoozed:(id)arg1 ;
-(id)alarmWithId:(id)arg1 ;
-(long long)defaultSoundType;
-(void)reloadDefaultSoundAndType;
-(void)setDefaultSound:(id)arg1 ofType:(long long)arg2 ;
-(NSString *)defaultVibrationID;
-(void)setDefaultVibrationID:(NSString *)arg1 ;
-(void)loadAlarms;
-(BOOL)checkIfAlarmsModified;
-(id)alarmWithIdUrl:(id)arg1 ;
-(id)nextAlarmForDate:(id)arg1 activeOnly:(BOOL)arg2 allowRepeating:(BOOL)arg3 ;
-(void)addAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)setAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)updateSleepAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2 ;
-(void)loadScheduledNotifications;
-(void)reloadScheduledNotifications;
-(void)handleAnyNotificationChanges;
-(void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1 ;
-(NSMutableArray *)logMessageList;
-(BOOL)invalidAlarmsDetected;
-(void)setInvalidAlarmsDetected:(BOOL)arg1 ;
-(NSString *)defaultSound;
-(NSDate *)lastModified;
-(void)setLastModified:(NSDate *)arg1 ;
@end

