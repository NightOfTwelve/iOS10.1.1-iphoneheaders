/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding> {

	IMPluginPayload* _pluginPayload;
	UIImage* _composeImage;

}

@property (nonatomic,retain) IMPluginPayload * pluginPayload;              //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) UIImage * composeImage;                       //@synthesize composeImage=_composeImage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(IMPluginPayload *)pluginPayload;
-(UIImage *)composeImage;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)setComposeImage:(UIImage *)arg1 ;
@end

