/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProvider.h>
#import <libobjc.A.dylib/RTDataProviderProtocol.h>

@class CLLocation, RTLocationManager, RTApplicationManager, NSString;

@interface RTDataProviderHeroApp : RTDataProvider <RTDataProviderProtocol> {

	CLLocation* _mostRecentLocation;
	RTLocationManager* _locationManager;
	RTApplicationManager* _applicationManager;

}

@property (nonatomic,retain) CLLocation * mostRecentLocation;                        //@synthesize mostRecentLocation=_mostRecentLocation - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTApplicationManager * applicationManager;              //@synthesize applicationManager=_applicationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)providerName;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)fetchPredictedApplications:(/*^block*/id)arg1 ;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)supportedEventClasses;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 ;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(RTApplicationManager *)applicationManager;
-(void)setApplicationManager:(RTApplicationManager *)arg1 ;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 locationManager:(id)arg3 applicationManager:(id)arg4 ;
-(void)onLeechedLocation:(id)arg1 ;
-(void)onHeroAppNotification:(id)arg1 ;
-(id)_processLocationApplicationPredictions:(id)arg1 ;
-(void)_onHeroAppNotification:(id)arg1 ;
-(void)_onLeechedLocation:(id)arg1 ;
-(CLLocation *)mostRecentLocation;
-(void)setMostRecentLocation:(CLLocation *)arg1 ;
@end

