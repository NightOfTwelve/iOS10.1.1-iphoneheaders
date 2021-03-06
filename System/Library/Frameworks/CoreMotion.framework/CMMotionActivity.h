/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem {

	CLMotionActivity fState;

}

@property (getter=isVehicleConnected,nonatomic,readonly) BOOL vehicleConnected; 
@property (nonatomic,readonly) long long confidence; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) BOOL unknown; 
@property (nonatomic,readonly) BOOL stationary; 
@property (nonatomic,readonly) BOOL walking; 
@property (nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL automotive; 
@property (nonatomic,readonly) BOOL cycling; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)confidence;
-(BOOL)isVehicleConnected;
-(NSDate *)startDate;
-(BOOL)walking;
-(BOOL)automotive;
-(BOOL)cycling;
-(BOOL)running;
-(BOOL)unknown;
-(BOOL)stationary;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
@end

