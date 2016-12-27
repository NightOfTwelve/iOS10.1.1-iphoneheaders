/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDReselectedRTPParameters : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	NSNumber* _maximumBitrate;
	NSNumber* _minimumBitrate;
	NSNumber* _rtcpInterval;

}

@property (nonatomic,copy,readonly) NSNumber * maximumBitrate;              //@synthesize maximumBitrate=_maximumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minimumBitrate;              //@synthesize minimumBitrate=_minimumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtcpInterval;                //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)minimumBitrate;
-(NSNumber *)rtcpInterval;
-(NSNumber *)maximumBitrate;
-(id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3 ;
@end
