/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitActivityCache : PBCodable <NSCopying> {

	long long _activeHours;
	long long _briskMinutes;
	long long _cacheIndex;
	long long _endDate;
	long long _energyBurned;
	long long _energyBurnedGoal;
	long long _energyBurnedGoalDate;
	long long _startDate;
	long long _stepCount;
	long long _walkingAndRunningDistance;
	SCD_Struct_HD40 _has;

}

@property (assign,nonatomic) BOOL hasCacheIndex; 
@property (assign,nonatomic) long long cacheIndex;                             //@synthesize cacheIndex=_cacheIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) long long energyBurned;                           //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) long long briskMinutes;                           //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHours; 
@property (assign,nonatomic) long long activeHours;                            //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) BOOL hasStepCount; 
@property (assign,nonatomic) long long stepCount;                              //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) long long energyBurnedGoal;                       //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistance; 
@property (assign,nonatomic) long long walkingAndRunningDistance;              //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoalDate; 
@property (assign,nonatomic) long long energyBurnedGoalDate;                   //@synthesize energyBurnedGoalDate=_energyBurnedGoalDate - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                                //@synthesize endDate=_endDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)stepCount;
-(void)setEndDate:(long long)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(void)setCacheIndex:(long long)arg1 ;
-(void)setHasCacheIndex:(BOOL)arg1 ;
-(BOOL)hasCacheIndex;
-(void)setEnergyBurned:(long long)arg1 ;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(BOOL)hasEnergyBurned;
-(void)setBriskMinutes:(long long)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(BOOL)hasBriskMinutes;
-(void)setActiveHours:(long long)arg1 ;
-(void)setHasActiveHours:(BOOL)arg1 ;
-(BOOL)hasActiveHours;
-(void)setStepCount:(long long)arg1 ;
-(void)setHasStepCount:(BOOL)arg1 ;
-(BOOL)hasStepCount;
-(void)setEnergyBurnedGoal:(long long)arg1 ;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(BOOL)hasEnergyBurnedGoal;
-(void)setWalkingAndRunningDistance:(long long)arg1 ;
-(void)setHasWalkingAndRunningDistance:(BOOL)arg1 ;
-(BOOL)hasWalkingAndRunningDistance;
-(void)setEnergyBurnedGoalDate:(long long)arg1 ;
-(void)setHasEnergyBurnedGoalDate:(BOOL)arg1 ;
-(BOOL)hasEnergyBurnedGoalDate;
-(long long)cacheIndex;
-(long long)energyBurned;
-(long long)briskMinutes;
-(long long)activeHours;
-(long long)energyBurnedGoal;
-(long long)walkingAndRunningDistance;
-(long long)energyBurnedGoalDate;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
@end
