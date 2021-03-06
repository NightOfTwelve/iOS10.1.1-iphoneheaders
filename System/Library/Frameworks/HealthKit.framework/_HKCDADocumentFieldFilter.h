/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString, NSRegularExpression;

@interface _HKCDADocumentFieldFilter : _HKFilter {

	unsigned long long _operatorType;
	NSString* _keyPath;
	NSString* _comparisonValue;
	NSRegularExpression* _comparisonExpression;

}

@property (nonatomic,readonly) unsigned long long operatorType;                         //@synthesize operatorType=_operatorType - In the implementation block
@property (nonatomic,readonly) NSString * keyPath;                                      //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) NSString * comparisonValue;                              //@synthesize comparisonValue=_comparisonValue - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * comparisonExpression;              //@synthesize comparisonExpression=_comparisonExpression - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 keyPath:(id)arg2 comparisonValue:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(id)_comparisonExpression;
-(NSRegularExpression *)comparisonExpression;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSString *)comparisonValue;
-(unsigned long long)operatorType;
@end

