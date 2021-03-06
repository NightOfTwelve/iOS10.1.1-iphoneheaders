/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDRoutineLocationOfInterest, NSDate;

@interface HDRoutinePredictedLocationOfInterest : NSObject {

	HDRoutineLocationOfInterest* _locationOfInterest;
	double _confidence;
	NSDate* _nextEntryTime;
	long long _modeOfTransportation;
	long long _sourceType;

}

@property (nonatomic,retain) HDRoutineLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,nonatomic) double confidence;                                             //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) NSDate * nextEntryTime;                                        //@synthesize nextEntryTime=_nextEntryTime - In the implementation block
@property (assign,nonatomic) long long modeOfTransportation;                                //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (assign,nonatomic) long long sourceType;                                          //@synthesize sourceType=_sourceType - In the implementation block
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setLocationOfInterest:(HDRoutineLocationOfInterest *)arg1 ;
-(HDRoutineLocationOfInterest *)locationOfInterest;
-(void)setNextEntryTime:(NSDate *)arg1 ;
-(long long)modeOfTransportation;
-(void)setModeOfTransportation:(long long)arg1 ;
-(NSDate *)nextEntryTime;
-(id)initWithPredictedLocationOfInterest:(id)arg1 ;
-(id)initWithCodable:(id)arg1 ;
@end

