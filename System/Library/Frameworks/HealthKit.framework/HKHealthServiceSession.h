/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HKHealthService, NSLock;

@interface HKHealthServiceSession : NSObject {

	NSArray* _interestedTransitoryKeys;
	/*^block*/id _transitoryDataHandler;
	HKHealthService* _service;
	NSLock* _propertyLock;
	unsigned long long _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _characteristicsHandler;

}

@property (nonatomic,retain) NSLock * propertyLock;                             //@synthesize propertyLock=_propertyLock - In the implementation block
@property (assign,nonatomic) unsigned long long sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id sessionHandler;                                   //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,copy) id characteristicsHandler;                           //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
@property (nonatomic,readonly) HKHealthService * service;                       //@synthesize service=_service - In the implementation block
@property (retain) NSArray * interestedTransitoryKeys; 
@property (copy) id transitoryDataHandler; 
-(unsigned long long)sessionIdentifier;
-(void)setSessionHandler:(id)arg1 ;
-(NSArray *)interestedTransitoryKeys;
-(void)setInterestedTransitoryKeys:(NSArray *)arg1 ;
-(id)transitoryDataHandler;
-(void)setTransitoryDataHandler:(id)arg1 ;
-(NSLock *)propertyLock;
-(void)setPropertyLock:(NSLock *)arg1 ;
-(void)setCharacteristicsHandler:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(HKHealthService *)service;
-(id)characteristicsHandler;
-(void)setSessionIdentifier:(unsigned long long)arg1 ;
-(id)sessionHandler;
@end
