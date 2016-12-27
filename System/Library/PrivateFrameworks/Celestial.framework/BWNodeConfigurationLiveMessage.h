/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {

	long long _configurationID;
	BWFormat* _updatedFormat;

}

@property (readonly) long long configurationID; 
@property (readonly) BWFormat * updatedFormat; 
+(id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
+(id)newMessageWithConfigurationID:(long long)arg1 ;
-(void)dealloc;
-(BWFormat *)updatedFormat;
-(id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
-(long long)configurationID;
@end
