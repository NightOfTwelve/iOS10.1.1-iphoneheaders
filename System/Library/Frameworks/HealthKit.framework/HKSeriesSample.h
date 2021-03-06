/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample {

	long long _count;
	BOOL _frozen;

}

@property (assign,setter=_setFrozen:,getter=_isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)_valueDescription;
-(id)_validateSample;
-(BOOL)_isFrozen;
-(id)_validateConfiguration;
-(void)_setFrozen:(BOOL)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
@end

