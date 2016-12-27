/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject <NSSecureCoding> {

	BOOL _supportsLiveTraffic;
	int _transportType;
	NSDate* _conservativeDepartureDate;
	double _conservativeTravelTime;
	NSDate* _suggestedDepartureDate;
	double _estimatedTravelTime;
	NSDate* _aggressiveDepartureDate;
	double _aggressiveTravelTime;
	NSString* _routeName;
	unsigned long long _currentTrafficDensity;
	NSString* _trafficDensityDescription;
	long long _travelState;

}

@property (assign,nonatomic) int transportType;                                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSDate * conservativeDepartureDate;                    //@synthesize conservativeDepartureDate=_conservativeDepartureDate - In the implementation block
@property (assign,nonatomic) double conservativeTravelTime;                         //@synthesize conservativeTravelTime=_conservativeTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * suggestedDepartureDate;                       //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (assign,nonatomic) double estimatedTravelTime;                            //@synthesize estimatedTravelTime=_estimatedTravelTime - In the implementation block
@property (nonatomic,retain) NSDate * aggressiveDepartureDate;                      //@synthesize aggressiveDepartureDate=_aggressiveDepartureDate - In the implementation block
@property (assign,nonatomic) double aggressiveTravelTime;                           //@synthesize aggressiveTravelTime=_aggressiveTravelTime - In the implementation block
@property (nonatomic,retain) NSString * routeName;                                  //@synthesize routeName=_routeName - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveTraffic;                              //@synthesize supportsLiveTraffic=_supportsLiveTraffic - In the implementation block
@property (assign,nonatomic) unsigned long long currentTrafficDensity;              //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,retain) NSString * trafficDensityDescription;                  //@synthesize trafficDensityDescription=_trafficDensityDescription - In the implementation block
@property (assign,nonatomic) long long travelState;                                 //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) NSDate * effectiveDepartureDate; 
@property (nonatomic,readonly) double effectiveTravelTime; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(NSDate *)suggestedDepartureDate;
-(unsigned long long)currentTrafficDensity;
-(long long)travelState;
-(BOOL)supportsLiveTraffic;
-(NSString *)routeName;
-(void)setSupportsLiveTraffic:(BOOL)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(NSString *)trafficDensityDescription;
-(double)estimatedTravelTime;
-(NSDate *)conservativeDepartureDate;
-(NSDate *)aggressiveDepartureDate;
-(double)conservativeTravelTime;
-(double)aggressiveTravelTime;
-(void)setTravelState:(long long)arg1 ;
-(void)setConservativeDepartureDate:(NSDate *)arg1 ;
-(void)setConservativeTravelTime:(double)arg1 ;
-(void)setSuggestedDepartureDate:(NSDate *)arg1 ;
-(void)setEstimatedTravelTime:(double)arg1 ;
-(void)setAggressiveDepartureDate:(NSDate *)arg1 ;
-(void)setAggressiveTravelTime:(double)arg1 ;
-(void)setCurrentTrafficDensity:(unsigned long long)arg1 ;
-(void)setTrafficDensityDescription:(NSString *)arg1 ;
-(id)initWithGEORouteHypothesis:(id)arg1 ;
-(id)initWithEKGEORouteHypothesis:(id)arg1 ;
-(NSDate *)effectiveDepartureDate;
-(double)effectiveTravelTime;
-(id)initWithSyntheticGEORouteHypothesis:(id)arg1 ;
@end
