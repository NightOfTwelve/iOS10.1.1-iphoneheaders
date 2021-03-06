/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INHomeEntityExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INHomeEntity : NSObject <INHomeEntityExport, NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _type;
	long long _deviceType;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long deviceType;                //@synthesize deviceType=_deviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)deviceType;
-(id)initWithName:(id)arg1 type:(long long)arg2 deviceType:(long long)arg3 ;
@end

