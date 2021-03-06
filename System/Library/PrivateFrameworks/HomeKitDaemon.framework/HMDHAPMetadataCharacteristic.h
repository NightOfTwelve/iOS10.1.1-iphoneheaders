/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataCharacteristic, HMDHAPMetadataCharacteristicValue;

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding> {

	HAPMetadataCharacteristic* _hapCharacteristicMetadata;
	HMDHAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) HAPMetadataCharacteristic * hapCharacteristicMetadata;              //@synthesize hapCharacteristicMetadata=_hapCharacteristicMetadata - In the implementation block
@property (nonatomic,retain) HMDHAPMetadataCharacteristicValue * valueMetadata;                  //@synthesize valueMetadata=_valueMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHapCharacteristicMetadata:(HAPMetadataCharacteristic *)arg1 ;
-(HMDHAPMetadataCharacteristicValue *)valueMetadata;
-(void)setValueMetadata:(HMDHAPMetadataCharacteristicValue *)arg1 ;
-(id)initWithHAPCharacteristic:(id)arg1 ;
-(HAPMetadataCharacteristic *)hapCharacteristicMetadata;
@end

