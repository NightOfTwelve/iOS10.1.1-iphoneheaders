/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface HMDCameraTLVParser : NSObject {

	NSData* _tlvData;

}
+(id)parserWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)parseResponseForData:(unsigned long long)arg1 ;
-(id)parseResponseForNumber:(unsigned long long)arg1 ;
-(id)parseResponseForString:(unsigned long long)arg1 ;
-(id)parseResponseForUUID:(unsigned long long)arg1 ;
-(id)parseResponseForArray:(unsigned long long)arg1 ;
@end

