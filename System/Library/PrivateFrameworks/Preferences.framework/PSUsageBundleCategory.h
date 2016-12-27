/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject {

	PSUsageBundleApp* _usageBundleApp;
	NSString* _identifier;
	NSString* _name;

}

@property (assign,nonatomic,__weak) PSUsageBundleApp * usageBundleApp;              //@synthesize usageBundleApp=_usageBundleApp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(PSUsageBundleApp *)usageBundleApp;
-(void)setUsageBundleApp:(PSUsageBundleApp *)arg1 ;
@end
