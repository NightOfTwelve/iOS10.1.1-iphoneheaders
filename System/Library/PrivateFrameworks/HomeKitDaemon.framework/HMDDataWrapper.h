/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSData;

@interface HMDDataWrapper : HMDFieldWrapper {

	NSData* _field;

}

@property (nonatomic,retain) NSData * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSData *)field;
-(void)setField:(NSData *)arg1 ;
@end

