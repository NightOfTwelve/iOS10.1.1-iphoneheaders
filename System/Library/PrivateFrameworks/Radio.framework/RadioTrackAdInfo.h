/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RadioTrackAdInfo : NSObject <NSSecureCoding> {

	BOOL _gatewayAdSlot;
	NSString* _slotIdentifier;

}

@property (getter=isGatewayAdSlot,nonatomic,readonly) BOOL gatewayAdSlot;              //@synthesize gatewayAdSlot=_gatewayAdSlot - In the implementation block
@property (nonatomic,copy,readonly) NSString * slotIdentifier;                         //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithAdInfoDictionary:(id)arg1 ;
-(BOOL)isGatewayAdSlot;
-(NSString *)slotIdentifier;
@end
