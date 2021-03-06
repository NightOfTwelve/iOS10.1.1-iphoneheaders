/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASDataStore.h>

@class _DASCoreDataStorage, NSString;

@interface _DASCoreDataStore : NSObject <_DASDataStore> {

	_DASCoreDataStorage* _database;

}

@property (nonatomic,retain) _DASCoreDataStorage * database;              //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)saveGroup:(id)arg1 ;
-(void)deleteActivity:(id)arg1 ;
-(void)saveActivities:(id)arg1 ;
-(void)saveActivity:(id)arg1 ;
-(void)loadAllGroups:(id)arg1 ;
-(void)deleteOldActivities;
-(void)deleteActivitiesIfRequired;
-(void)loadPendingLaunchTasks:(id)arg1 ;
-(void)mocSaveAndReset:(id)arg1 ;
-(void)createMOInMOC:(id)arg1 activity:(id)arg2 group:(id)arg3 triggers:(id)arg4 ;
-(void)createMOInMOC:(id)arg1 group:(id)arg2 activities:(id)arg3 ;
-(void)updateActivityStarted:(id)arg1 ;
-(void)saveActivity:(id)arg1 triggers:(id)arg2 ;
-(void)saveActivity:(id)arg1 group:(id)arg2 triggers:(id)arg3 hasStarted:(BOOL)arg4 ;
-(void)loadStartedTasks:(id)arg1 ;
-(void)updateActivityCompleted:(id)arg1 ;
-(void)saveActivities:(id)arg1 groups:(id)arg2 triggersArray:(id)arg3 ;
-(void)saveGroup:(id)arg1 activity:(id)arg2 ;
-(void)updateActivityCanceled:(id)arg1 ;
-(void)saveGroups:(id)arg1 activitiesArray:(id)arg2 ;
-(void)loadAllTasks:(id)arg1 startedTasks:(id)arg2 ;
-(id)init;
-(id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
-(_DASCoreDataStorage *)database;
-(void)setDatabase:(_DASCoreDataStorage *)arg1 ;
-(BOOL)deleteStorageWithObliterationOption:(BOOL)arg1 ;
@end

