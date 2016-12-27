/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCSharedDeviceConfigurationPayload : MCPayload {

	NSString* _lockScreenFootnote;
	NSString* _assetTagInformation;

}

@property (nonatomic,readonly) NSString * lockScreenFootnote;               //@synthesize lockScreenFootnote=_lockScreenFootnote - In the implementation block
@property (nonatomic,readonly) NSString * assetTagInformation;              //@synthesize assetTagInformation=_assetTagInformation - In the implementation block
@property (nonatomic,readonly) NSDictionary * configuration; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)lockScreenFootnote;
-(NSString *)assetTagInformation;
-(NSDictionary *)configuration;
@end
