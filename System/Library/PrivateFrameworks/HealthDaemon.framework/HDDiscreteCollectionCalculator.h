/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCollectionCalculator.h>

@interface HDDiscreteCollectionCalculator : HDCollectionCalculator {

	SCD_Struct_HD27 _currentStats;
	map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >* _bySource;

}
-(id)description;
-(BOOL)hasData;
-(id)initWithBucketBoundaries:(id)arg1 ;
-(BOOL)advanceBucket;
-(void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 ;
-(id)sourceIDsForCurrentBucket;
-(long long)dataCount;
-(id)statsBySource;
-(void)getCurrentBucketStats:(SCD_Struct_HD27*)arg1 ;
@end

