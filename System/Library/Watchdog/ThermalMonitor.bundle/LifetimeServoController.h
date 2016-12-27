/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@protocol OS_dispatch_source;
@class LifetimeServoControlLoop, AggDThermalMonitor, NSObject;

@interface LifetimeServoController : NSObject <tGraphDataSource> {

	unsigned _dieTempCtlService;
	int _controllerVariant;
	LifetimeServoControlLoop* _eCoreLoop;
	LifetimeServoControlLoop* _pCoreLoop;
	LifetimeServoControlLoop* _gCoreLoop;
	CFDictionaryRef _subscribedChannelsCPU;
	IOReportSubscriptionCFRef _subscriptionCPU;
	CFDictionaryRef _lastReadingCPU;
	int _perfStateVoltagesCPU[16];
	float _perfStateFractionCPU[16];
	int _perfStateCountCPU;
	CFDictionaryRef _subscribedChannelsGPU;
	IOReportSubscriptionCFRef _subscriptionGPU;
	CFDictionaryRef _lastReadingGPU;
	int _perfStateVoltagesGPU[16];
	float _perfStateFractionGPU[16];
	int _perfStateCountGPU;
	int _override_tempMax;
	int _override_tempAverage;
	int _dieTempTarget;
	long long _lastSleepEntry;
	AggDThermalMonitor* _aggdController;
	NSObject*<OS_dispatch_source> _statePersistenceTimer;

}
-(int)initPerfStateVoltagesGPU;
-(void)updateForTempMax:(int)arg1 tempAverage:(int)arg2 ;
-(void)overrideParam:(id)arg1 value:(int)arg2 ;
-(void)initPerfStateReportingGPU;
-(CFDictionaryRef)newChannelForDriver:(const char*)arg1 channelID:(unsigned long long)arg2 ;
-(int)initPerfStateVoltagesCPU;
-(void)updatePerfStateReportingGPU;
-(int)writeToDriverService:(unsigned)arg1 key:(CFStringRef)arg2 value:(long long)arg3 ;
-(void)updatePerfStateReportingCPU;
-(id)initWithParams:(id)arg1 aggdController:(id)arg2 ;
-(void)initPerfStateReportingCPU;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(int)initPerfStateVoltages:(const char*)arg1 propertyName:(CFStringRef)arg2 voltages:(int*)arg3 maxVoltageCount:(int)arg4 ;
-(id)init;
@end
