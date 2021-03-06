/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NPAverage, NSDate;

@interface NPEdgeLatency : NSObject <NSSecureCoding> {

	BOOL _needReprobe;
	BOOL _passedReprobeThreshold;
	unsigned long long _roundTripTime;
	NPAverage* _roundTripAverage;
	NPAverage* _roundTripAverageObserved;
	unsigned long long _edgeIndex;
	long long _reprobeCount;
	long long _probeCount;
	NSDate* _creationDate;

}

@property (assign) unsigned long long roundTripTime;                  //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (retain) NPAverage * roundTripAverage;                      //@synthesize roundTripAverage=_roundTripAverage - In the implementation block
@property (retain) NPAverage * roundTripAverageObserved;              //@synthesize roundTripAverageObserved=_roundTripAverageObserved - In the implementation block
@property (assign) unsigned long long edgeIndex;                      //@synthesize edgeIndex=_edgeIndex - In the implementation block
@property (assign) BOOL needReprobe;                                  //@synthesize needReprobe=_needReprobe - In the implementation block
@property (assign) long long reprobeCount;                            //@synthesize reprobeCount=_reprobeCount - In the implementation block
@property (assign) long long probeCount;                              //@synthesize probeCount=_probeCount - In the implementation block
@property (retain) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) BOOL passedReprobeThreshold;                       //@synthesize passedReprobeThreshold=_passedReprobeThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setRoundTripTime:(unsigned long long)arg1 ;
-(unsigned long long)roundTripTime;
-(id)initWithRTT:(unsigned long long)arg1 edgeIndex:(unsigned long long)arg2 ;
-(unsigned long long)edgeIndex;
-(NPAverage *)roundTripAverage;
-(NPAverage *)roundTripAverageObserved;
-(BOOL)passedReprobeThreshold;
-(long long)probeCount;
-(void)setEdgeIndex:(unsigned long long)arg1 ;
-(void)setRoundTripAverage:(NPAverage *)arg1 ;
-(void)setRoundTripAverageObserved:(NPAverage *)arg1 ;
-(void)setPassedReprobeThreshold:(BOOL)arg1 ;
-(void)setProbeCount:(long long)arg1 ;
-(void)addRoundTripSample:(unsigned long long)arg1 ;
-(void)addRoundTripSampleObserved:(unsigned long long)arg1 ;
-(BOOL)needReprobe;
-(void)setNeedReprobe:(BOOL)arg1 ;
-(long long)reprobeCount;
-(void)setReprobeCount:(long long)arg1 ;
@end

