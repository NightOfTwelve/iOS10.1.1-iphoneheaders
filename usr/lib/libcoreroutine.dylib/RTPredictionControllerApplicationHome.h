/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionControllerApplication.h>

@interface RTPredictionControllerApplicationHome : RTPredictionControllerApplication {

	unsigned long long _maxMicroLocationsForTraining;
	double _minMicroLocationConfidenceThreshold;

}

@property (assign,nonatomic) unsigned long long maxMicroLocationsForTraining;              //@synthesize maxMicroLocationsForTraining=_maxMicroLocationsForTraining - In the implementation block
@property (assign,nonatomic) double minMicroLocationConfidenceThreshold;                   //@synthesize minMicroLocationConfidenceThreshold=_minMicroLocationConfidenceThreshold - In the implementation block
+(id)defaultProviders;
-(void)_unregisterForNotifications;
-(id)init;
-(void)invalidate;
-(void)_setup;
-(void)_registerForNotifications;
-(id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 predictionTable:(id)arg9 applicationManager:(id)arg10 ;
-(id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 predictionTable:(id)arg9 ;
-(void)_updateRegisteredDefaults:(/*^block*/id)arg1 ;
-(void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(/*^block*/id)arg3 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)onAuthorizationUpdate:(id)arg1 ;
-(void)__processData:(/*^block*/id)arg1 ;
-(void)_buildExpertsWithHandler:(/*^block*/id)arg1 ;
-(id)findUniqueMicroLocations:(id)arg1 limit:(unsigned long long)arg2 minimumProbability:(double)arg3 ;
-(unsigned long long)maxMicroLocationsForTraining;
-(void)setMaxMicroLocationsForTraining:(unsigned long long)arg1 ;
-(double)minMicroLocationConfidenceThreshold;
-(void)setMinMicroLocationConfidenceThreshold:(double)arg1 ;
@end

